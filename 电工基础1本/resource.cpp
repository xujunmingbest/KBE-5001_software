#include "tool.h"
Mylog Mlog;
#include "ThreeSegmentTransmissionProtocol.h"
ThreeSegmentTransmissionProtocol g_TSTP; 


#include "实验1实验目的.h"
bool 实验1实验目的IsOpened = false;
#include "实验1原理说明.h"
bool 实验1原理说明IsOpened = false;
#include "实验1原理说明视频.h"
bool 实验1原理说明视频IsOpened = false;
#include "实验1Main.h"
bool 实验1MainIsOpened = false;
#include "实验1实验设备.h"
bool 实验1实验设备IsOpened = false;
#include "实验1实验内容1.h"
bool 实验1实验内容1IsOpened = false;
#include "实验1思考题.h"
bool 实验1思考题IsOpened = false;
#include "实验1实验注意事项.h"
bool 实验1实验注意事项IsOpened = false;
#include "实验1实验报告.h"
bool 实验1实验报告IsOpened = false;






MsgQueue trial1part1;

void MsgQueueRegister() {
	trial1part1.QueueRegister(string("实验1第一个实验"));

}

