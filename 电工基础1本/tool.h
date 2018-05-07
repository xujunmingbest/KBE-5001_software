#pragma once
#include <windows.h>
#include <iostream>
#include "xml/xml.h"
#include "log.h"
#include "ThreeSegmentTransmissionProtocol.h"
#include "message_Queue.h"
#include "seriesPort.h"

using namespace std;
#include "�ײ�.h"
using namespace �繤����1��;
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
namespace �繤����1�� {
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
		   // TODO:  �ڴ˴���Ӵ���ķ�����
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
	����������ŵ�ʱ�� �ڹ̶��������Ŷ�Ӧ��
	label ���� pictureBox

	�������� ���ſؼ�
	****************************/
	public ref class VideoShowWidget
	{
	private: Hashtable ^ht = gcnew Hashtable;
			 Mutex ^ mutex = gcnew Mutex;
			 int NowTime = 0;

			 void TShow() {
				 mutex->WaitOne();
				 for each (Object^ var in ht)
				 {
					 DictionaryEntry^ d = (DictionaryEntry^)var;
					 int v = (int)d->Value;
					 if (v < NowTime) {
						 ((Label^)d->Key)->Visible = true;
					 }
					 else if (v > NowTime) {
						 ((Label^)d->Key)->Visible = false;
					 }
				 }
				 for (int i = 0; i < 2; i++) {
					 for each (Object^ var in ht)
					 {
						 DictionaryEntry^ d = (DictionaryEntry^)var;
						 if ((int)d->Value == NowTime) {
							 ((Label^)d->Key)->Visible = false;
						 }
					 }
					 Thread::Sleep(500);

					 for each (Object^ var in ht)
					 {
						 DictionaryEntry^ d = (DictionaryEntry^)var;
						 if ((int)d->Value == NowTime)
							 ((Label^)d->Key)->Visible = true;
					 }
					 Thread::Sleep(500);
				 }
				 mutex->ReleaseMutex();
			 }

	public:
		void Clear() {
			ht->Clear();
		}

		void AddLabel(Label^l, int showTime) {
			ht->Add(l, showTime);
		}
		void ShowLabel(int second) {
			NowTime = second;
			Thread^ t = gcnew Thread(gcnew ThreadStart(this, &VideoShowWidget::TShow));
			t->Start();
		}
		/***************************
		����ͻȻ�仯�����������ļ��ļ��


		**************************/
		void SuddenChange(int second) {

			mutex->WaitOne();
			NowTime = second;
			for each (Object^ var in ht)
			{
				DictionaryEntry^ d = (DictionaryEntry^)var;
				int v = (int)d->Value;
				if (v <= NowTime) {
					((Label^)d->Key)->Visible = true;
				}
				else if (v > NowTime) {
					((Label^)d->Key)->Visible = false;
				}
			}
			mutex->ReleaseMutex();
		}
	};
}


void Exceptioninit();
string T_to_string(String^in);



public ref class global {
public:
	static SerialHandle^ sh = gcnew SerialHandle;
	

};