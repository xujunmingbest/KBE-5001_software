#pragma once
#include <windows.h>
#include <iostream>
#include "xml/xml.h"
#include "log.h"
#include "ThreeSegmentTransmissionProtocol.h"
#include "message_Queue.h"
#include "seriesPort.h"

using namespace std;
#include "底部.h"
using namespace 电工基础1本;

void Exceptioninit();
string T_to_string(String^in);



class CControl
{
	HANDLE hMutex1;
public:
	CControl(char *Name);
	void Stop();
	void Start();
	~CControl();

};

extern CControl g_c;
extern ConfigXml g_cx;
extern ThreeSegmentTransmissionProtocol g_TSTP;
void voice_speek(String^ in);



using namespace System;
using namespace Microsoft::Speech::Synthesis;
using namespace System::Media;
using namespace System::Threading;
namespace 电工基础1本 {
	public ref class Voice
	{
		SoundPlayer ^ player = gcnew SoundPlayer;
		SpeechSynthesizer^ tts = gcnew SpeechSynthesizer();
	public:Voice() {
			tts->SpeakCompleted += gcnew EventHandler<SpeakCompletedEventArgs^>(this, &Voice::tts_SpeakCompleted);
			tts->Volume = 100;
			tts->Rate = -2;
	}
	public:void Close() {
		player->Stop(); 
	}
	private: System::Void tts_SpeakCompleted(System::Object^ sender, SpeakCompletedEventArgs^ e)
	{
		try {
			player->Stream->Position = 0;

			player->Play();
		}
		catch (System::Exception^ e) {
			Console::Write(e->ToString());
		}
	}
	public:void Speak(String ^text)
	{
		try {
			player->Stop();

			player->Stream = gcnew System::IO::MemoryStream();
			tts->SetOutputToWaveStream(player->Stream);
			tts->SpeakAsync(text);

		}
		catch (System::Exception^ e) {
			Console::Write(e->ToString());
		}
	}
		   // TODO:  在此处添加此类的方法。
	};
	public ref class Waver
	{
		cli::array<Label^>^ a;
		int pos=0;
		void LabelWaverT() {
			for (int i = 0; i < 2; i++) {
				for (int i = 0; i < a->Length; i++) {
					a[i]->Visible = true;
				}
				Thread::Sleep(500);
				for (int i = 0; i < a->Length; i++) {
					a[i]->Visible = false;
				}
				Thread::Sleep(500);
			}
		}
	public: void LabelWaver() {
			Thread ^ t = gcnew Thread(gcnew ThreadStart(this,&Waver::LabelWaverT));
			t->Start();
		}
	public:void ArrayInit(int count) {
			a = gcnew cli::array<Label^>(count);
			pos = 0;
		}
	public:	void Add(Label^l) {
			if (pos < a->Length) {
				a[pos++] = l;
			}
		}

	};

	/**************************
	检测视屏播放的时候 在固定秒数播放对应的
	label 或者 pictureBox

	根据视屏 播放控件
	****************************/
	public ref class VideoShowWidget
	{
	private: Hashtable ^ht = gcnew Hashtable;
			 Mutex ^ mutex = gcnew Mutex;
			 int NowTime = 0;
			 ~VideoShowWidget() {
				 t->Abort();
			 }
			 void TShow() {
				 mutex->WaitOne();
				 try {
					 for each (Object^ var in ht)
					 {
						 DictionaryEntry^ d = (DictionaryEntry^)var;
						 int v = (int)d->Value;
						 if (v < NowTime) {
							 ((Label^)d->Key)->Visible = false;
						 }
						 else if (v > NowTime) {
							 ((Label^)d->Key)->Visible = true;
						 }
						 else if (v == NowTime) {
							 ((Label^)d->Key)->BackColor = Color::Red;
						 }
					 }
					 for (int i = 0; i < 2; i++) {
						 for each (Object^ var in ht)
						 {
							 DictionaryEntry^ d = (DictionaryEntry^)var;
							 if ((int)d->Value == NowTime) {
								 ((Label^)d->Key)->Visible = true;
							 }
						 }
						 Thread::Sleep(500);

						 for each (Object^ var in ht)
						 {
							 DictionaryEntry^ d = (DictionaryEntry^)var;
							 if ((int)d->Value == NowTime)
								 ((Label^)d->Key)->Visible = false;
						 }
						 Thread::Sleep(500);
					 }
					 for each (Object^ var in ht)
					 {
						 DictionaryEntry^ d = (DictionaryEntry^)var;
						 if ((int)d->Value == NowTime) {
							 ((Label^)d->Key)->BackColor = Color::White;
						 }
					 }
				 }
				 catch (System::Exception ^e ) {
					 LOG_EXCEPTION(T_to_string(e->ToString()));
				 }
				 mutex->ReleaseMutex();
			 }
			 Thread^ t;
	public:
		void Clear() {
			ht->Clear();
		}

		void AddLabel(Label^l, int showTime) {
			ht->Add(l, showTime);
		}
		void ShowLabel(int second) {
			NowTime = second;
			t = gcnew Thread(gcnew ThreadStart(this, &VideoShowWidget::TShow));
			t->Start();
		}
		/***************************
		根据突然变化的秒数进行文件的检测


		**************************/
		void SuddenChange(int second) {

			mutex->WaitOne();
			NowTime = second;
			for each (Object^ var in ht)
			{
				DictionaryEntry^ d = (DictionaryEntry^)var;
				int v = (int)d->Value;
				if (v <= NowTime) {
					((Label^)d->Key)->Visible = false;
				}
				else if (v > NowTime) {
					((Label^)d->Key)->Visible = true;
				}
			}
			mutex->ReleaseMutex();
		}
	};
}



public ref class global {
public:
	static SerialHandle^ sh = gcnew SerialHandle;  //全局seriesPort 变量
	

	static String^ IntToFormatFloatString(int i) {
		int xiaoshu = i % 100;
		int zhengshu = i / 100;
		String^ t;
		if (xiaoshu == 0) {
			t = zhengshu.ToString() + "." + "00";
		}
		else {
			t = zhengshu.ToString() + "." + xiaoshu.ToString();
		}
		return t;
	}

};