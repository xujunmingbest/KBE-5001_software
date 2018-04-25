#pragma once
#include <windows.h>
#include <iostream>
#include "xml/xml.h"
using namespace std;
#include "底部.h"
using namespace 电工基础1本;
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
}


void Exceptioninit();