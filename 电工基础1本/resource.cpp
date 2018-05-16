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

#include "基尔霍夫定律.h"
bool 基尔霍夫定律IsOpened = false;
#include "基尔霍夫定律实验目的.h"
bool 基尔霍夫定律实验目的IsOpened = false;
#include "基尔霍夫定律实验原理.h"
bool 基尔霍夫定律实验原理IsOpened = false;
#include "基尔霍夫定律实验器件.h"
bool 基尔霍夫定律实验器件IsOpened = false;
#include "基尔霍夫定律实验步骤.h"
bool 基尔霍夫定律实验步骤IsOpened = false;
#include "基尔霍夫定律实验内容.h"
bool 基尔霍夫定律实验内容IsOpened = false;

#include "基尔霍夫定理原理动画.h"
bool 基尔霍夫定理原理动画IsOpened = false;




MsgQueue trial1part1;
//程序启动的时候 消息队列初始化
void MsgQueueRegister() {
	trial1part1.QueueRegister(string("实验1第一个实验"));

}

