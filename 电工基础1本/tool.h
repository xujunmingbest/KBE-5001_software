#pragma once
#include <windows.h>
#include <iostream>
#include "xml/xml.h"
#include "log.h"
#include "SysLog.h"
#include "ThreeSegmentTransmissionProtocol.h"
#include "message_Queue.h"
#include "seriesPort.h"

using namespace std;
#include "底部.h"
using namespace 电工基础1本;

void Exceptioninit();
int String_to_Int(String^in);


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
extern ThreeSegmentTransmissionProtocol g_TSTP;
void voice_speek(String^ in);



//using namespace System;
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
	}
	public:void Close() {
		player->Stop(); 
	}
	public:void SetVolume(int Volume) {
		tts->Volume = Volume;
	}
	public:void SetRate(int Rate) {
		tts->Rate = Rate;
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
		Hashtable ^LabelHt ;
		Hashtable ^PicboxHt ;

	public:void Init();
	public:void Add(Label^ll,Color a);
	public:void Add(PictureBox^ pb);
	public:void waver();
	public:void twaver();
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
			ht->Add(l, Color::Red);
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


/* IsDClegal
入参数: 两位小数的字符串数字
返回值: 返回 string 类型的数字值
如果返回 ""则是不合法
*/
string IsDClegal(String^in); /* string 为空返回不合法  不为空是合法*/


/* GetDcNum
入参数: 两位小数的字符串数字
返回值: 数字扩大100之后的int值
 */
int GetDcNum(string &in);


/* DcNumToString
入参数: 实际数字乘以100后的 无符号int，无符号 电流电压标符号
返回值: 实际数字 含有两位小数的  String 类型数字字符串
*/
String^ DcNumToString(uint in, uint DcSymbol); /*返回数值 有 整数和小数*/

struct oscillographParam {
	string MP_MAX; //最大值		
	string MP_MIN;     //最小值		
	string MP_HIGH;    //High(Top)-高电平(顶端值)		
	string MP_MIDDLE;  //Middle-中间值		
	string 	MP_LOW;     //Low(Bottom) - 低电平(底端值)	

	string 	MP_PKPK;    //VPP-峰峰值		
	string 	MP_AMP;     //最小值	
	string 	MP_MEAN;    //平均值		
	string MP_CYCMEAN; //		
	string 	MP_RMS;     //均方根

	string MP_CYCRMS;   //周期均方值		
	string 	MP_AREA;     //面积		
	string 	MP_CYCAREA;  //周期面积		
	string 	MP_OVERSHOOT;//过冲		
	string 	MP_PRESHOOT; //预冲

	string 	MP_PERIOD;   //周期		
	string MP_FREQ;     //频率	
	string MP_RISE_TIME;//上升时间	
	string MP_FALL_TIME;//下降时间		
	string 	MP_PWIDTH;   //正脉宽

	string 	MP_NWIDTH;   //负脉宽
	string 	MP_PDUTY;    //正占空比		
	string  MP_NDUTY;    //负占空比		
	string MP_RISEDELAY;//上升延时		
	string MP_FALLDELAY;//下升延时

	string MP_PHASE;	 //相位		
	string MP_FRR;	     //
	string MP_FRF;
	string MP_FFR;
	string MP_FFF;

	string MP_LRF;
	string MP_LRR;
	string 	MP_LFR;
	string MP_LFF;
	string MP_BURST_WIDTH; //突发脉冲
};

#include "uci/uci.h"
class oscillograph {
public:
	static bool SetParam(string &CMD);
	static bool SetVP(string &CH,string &value);
	static bool SetHP(string &CH, string &value);
	static bool SetTB(string &CH, string &value);
	static bool SetVB(string &CH, string &value);
	static oscillographParam GetoscillographParam();
	static bool oscillographOpen();
	static bool GetOscilloscopePrtScnBmp(string &bmpName);
	static bool oscillographClose();
};






public ref class global {
public:
	static Thread ^ t;

	static void SystemStart();
	static void SystemShortDown();
	//static LedWatch::LedWatch dlb1;
	//static LedWatch::LedWatch dlb2;
	//static LedWatch::LedWatch dyb1;
	//static LedWatch::LedWatch dyb2;

	static S_PLCRecv *PLCRecv ;
	static SerialHandle^ sh = gcnew SerialHandle;  //全局seriesPort 变量
	static SerialControlSource^ scs = gcnew SerialControlSource;
	static Voice^ voice = gcnew Voice();


	/* LiKongMonter
	功能: 用于力控线程开辟的函数
	*/
	static void LiKongMonter();
	static void SetDV(String^t);
};




void MsgQueueRegister();