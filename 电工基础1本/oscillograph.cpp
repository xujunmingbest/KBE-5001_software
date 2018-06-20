

#include <windows.h>
//#include "stdafx.h"

#include "uci/uci.h"
#include "uci/dso_base.h"
#include "uci/unit.h"
#include <atlstr.h>

#pragma comment(lib,"uci.lib")


#include <iostream>
#include <fstream>

using namespace std;


#include "tool.h"
u_session g_curSession = -1;
#define BMPLENGTH 387072
bool oscillograph::oscillographOpen() {
	CString msg = "[C:DSO][D:DSO-X][T:USB][PID:0x5537][VID:0x4348][EI:0x82][EO:0x2][CFG:1][I:0]";
	auto r = uci::uci_Open(msg, &g_curSession, 2000);
	if (r == 0) {
		SYS_LOG_INF("示波器打开成功");
		return true;
	}
	else {
		SYS_LOG_ERROR("示波器打开失败");
		return false;
	}
}

bool oscillograph::GetOscilloscopePrtScnBmp(string &bmpName) {
	unsigned char data[BMPLENGTH];
	memset(data, 0x00, BMPLENGTH);
	
	uci::RParams rrr;
	rrr.CMDString = "PrtScn:bmp;";
	rrr.RetCount = BMPLENGTH;
	rrr.Timeout = 4000;
	int r = uci::uci_Read(g_curSession, &rrr, data, BMPLENGTH);
	if (r <= 0) {
		SYS_LOG_ERROR("示波器读取图片失败");
	    return false;
	}

	string T = "bmp/";
	T += bmpName;
	ofstream f;
	f.open(T);
	if (!f) {
		SYS_LOG_ERROR("示波器保存图片失败");
	    return false;
	}
	f.write((const char*)data, BMPLENGTH);
	f.close();
	return true;
}

bool oscillograph::oscillographClose() {

	if (uci::uci_Close(g_curSession) == 0) {
		SYS_LOG_INF("示波器会话关闭成功");
		return true;
	}
	else {
		SYS_LOG_ERROR("示波器会话关闭失败");
		return false;
	}
}

string PrintMeaParam(const comAPICommon::MeaValue& _p);
namespace cb = comAPICommon;

 




oscillographParam oscillograph::GetoscillographParam() {
	oscillographParam op;
	memset(&op, 0x00, sizeof(oscillographParam));

	comAPICommon::MeaValue params[50];
	int r = uci::uci_ReadX(g_curSession, _T("mea:all?;"), 2000, (byte*)params, sizeof(params));
	if (r <= 0) {
		SYS_LOG_ERROR("读取示波器参数失败");
		return op;
	}
	op.MP_FREQ = PrintMeaParam(params[cb::MP_FREQ]);

	op.MP_MAX = PrintMeaParam(params[cb::MP_MAX]);

	op.MP_MIN = PrintMeaParam(params[cb::MP_MIN]);

	op.MP_HIGH = PrintMeaParam(params[cb::MP_HIGH]);

	op.MP_MIDDLE = PrintMeaParam(params[cb::MP_MIDDLE]);

	op.MP_LOW = PrintMeaParam(params[cb::MP_LOW]);

	op.MP_PKPK = PrintMeaParam(params[cb::MP_PKPK]);

	op.MP_AMP = PrintMeaParam(params[cb::MP_AMP]);

	op.MP_MEAN = PrintMeaParam(params[cb::MP_MEAN]);

	op.MP_CYCMEAN = PrintMeaParam(params[cb::MP_CYCMEAN]);

	op.MP_RMS = PrintMeaParam(params[cb::MP_RMS]);

	op.MP_CYCRMS = PrintMeaParam(params[cb::MP_CYCRMS]);

	op.MP_AREA = PrintMeaParam(params[cb::MP_AREA]);

	op.MP_CYCAREA = PrintMeaParam(params[cb::MP_CYCAREA]);

	op.MP_OVERSHOOT = PrintMeaParam(params[cb::MP_OVERSHOOT]);

	op.MP_PRESHOOT = PrintMeaParam(params[cb::MP_PRESHOOT]);

	op.MP_PERIOD = PrintMeaParam(params[cb::MP_PERIOD]);


	op.MP_RISE_TIME = PrintMeaParam(params[cb::MP_RISE_TIME]);

	op.MP_FALL_TIME = PrintMeaParam(params[cb::MP_FALL_TIME]);

	op.MP_PWIDTH = PrintMeaParam(params[cb::MP_PWIDTH]);

	op.MP_NWIDTH = PrintMeaParam(params[cb::MP_NWIDTH]);

	op.MP_PDUTY = PrintMeaParam(params[cb::MP_PDUTY]);

	op.MP_NDUTY = PrintMeaParam(params[cb::MP_NDUTY]);

	op.MP_RISEDELAY = PrintMeaParam(params[cb::MP_RISEDELAY]);

	op.MP_FALLDELAY = PrintMeaParam(params[cb::MP_FALLDELAY]);

	op.MP_PHASE = PrintMeaParam(params[cb::MP_PHASE]);

	op.MP_FRR = PrintMeaParam(params[cb::MP_FRR]);

	op.MP_FRF = PrintMeaParam(params[cb::MP_FRF]);

	op.MP_FFR = PrintMeaParam(params[cb::MP_FFR]);

	op.MP_FFF = PrintMeaParam(params[cb::MP_FFF]);

	op.MP_LRF = PrintMeaParam(params[cb::MP_LRF]);

	op.MP_LRR = PrintMeaParam(params[cb::MP_LRR]);

	op.MP_LFR = PrintMeaParam(params[cb::MP_LFR]);

	op.MP_LFF = PrintMeaParam(params[cb::MP_LFF]);

	op.MP_BURST_WIDTH = PrintMeaParam(params[cb::MP_BURST_WIDTH]);

	return op;
}



string PrintMeaParam(const comAPICommon::MeaValue& _p) {
	char buff[100];
	memset(buff, 0x00, sizeof(buff));
	if (_p.IsExist) {
		if (_p.IsValid) {
			snprintf(buff, 100, "%f %s%s", _p.Value,unit::uci_UnitFindScaleName(_p.Unit.Scale),
				unit::uci_UnitFindTypeName(_p.Unit.Type));
		}
		else {
			snprintf(buff, 100, "-- %s%s",unit::uci_UnitFindScaleName(_p.Unit.Scale),
				unit::uci_UnitFindTypeName(_p.Unit.Type));
		}
	}
	else {
		snprintf(buff, 100, "--");
	}

	return string(buff);
}
#define  _timeOut 2000
bool oscillograph::SetParam(string &CMD) {

	uci::WParams wp;
	ZeroMemory(&wp, sizeof(wp));
	//也可以使用uci_WriteX的非封装版本，请查看头文件uci.h。
	auto r = uci_Write(g_curSession, uci_CreateWParams(wp, CMD.c_str(), _timeOut), nullptr, 0);

	if (r >= 0) {
		return true;
	}
	return false;
}

bool oscillograph::SetVP(string &CH, string &value)
{
	string cmd = "CH:" + CH + "@VP:";
	cmd += value + ";";
	return SetParam(cmd);
}

bool oscillograph::SetHP(string &CH, string &value)
{
	string cmd = "CH:" + CH + "@HP:";
	cmd += value + ";";
	return SetParam(cmd);
}

bool oscillograph::SetTB(string &CH, string &value)
{
	string cmd = "CH:" + CH + "@TB:";
	cmd += value + ";";
	return SetParam(cmd);
}

bool oscillograph::SetVB(string &CH, string &value)
{
	string cmd = "CH:" + CH + "@VB:";
	cmd += value + ";";
	return SetParam(cmd);
}
