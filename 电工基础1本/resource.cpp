#include "tool.h"
Mylog Mlog;
#include "ThreeSegmentTransmissionProtocol.h"
ThreeSegmentTransmissionProtocol g_TSTP; 


#include "ʵ��1ʵ��Ŀ��.h"
bool ʵ��1ʵ��Ŀ��IsOpened = false;
#include "ʵ��1ԭ��˵��.h"
bool ʵ��1ԭ��˵��IsOpened = false;
#include "ʵ��1ԭ��˵����Ƶ.h"
bool ʵ��1ԭ��˵����ƵIsOpened = false;
#include "ʵ��1Main.h"
bool ʵ��1MainIsOpened = false;
#include "ʵ��1ʵ���豸.h"
bool ʵ��1ʵ���豸IsOpened = false;
#include "ʵ��1ʵ������1.h"
bool ʵ��1ʵ������1IsOpened = false;
#include "ʵ��1˼����.h"
bool ʵ��1˼����IsOpened = false;
#include "ʵ��1ʵ��ע������.h"
bool ʵ��1ʵ��ע������IsOpened = false;
#include "ʵ��1ʵ�鱨��.h"
bool ʵ��1ʵ�鱨��IsOpened = false;






MsgQueue trial1part1;

void MsgQueueRegister() {
	trial1part1.QueueRegister(string("ʵ��1��һ��ʵ��"));

}

