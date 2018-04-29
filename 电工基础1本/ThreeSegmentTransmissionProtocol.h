#pragma once

#include <iostream>
#include <windows.h>
#include "log.h"
#include "底部.h"
#include "json/json.h"
#pragma comment(lib,"WS2_32.lib")//显示连接套接字库

using namespace std;
using namespace 电工基础1本;

/**********************
报文结构体
{"正确", 0},
resError{ "对方不存在",1 },
{ "对方不在线",2 },
{ "你和对方的链路未注册",3 },
{ "您的mac机器未注册",4 },
{ "有其他mac机子登入了",5 },
{ "报文长度位接收解析错误，连接中断",6 },
{ "报文Json解析错误",7 },
{ "装发器内部错误",8 },
***********************/
struct err {
	string err_mes;
	int err_code;
};


struct TSTPHead {
	string src_mac;
	string des_mac;
	err em;
};

struct TSTPBody {
	string trial_name;
	Json::Value trial_data;
};
/*****************
1:三段发送协议

（1）长度段
4个字节第一部分 json长度段
8报文体长度段
（2）json段
     （2.1）json分为
	    src_mac，des_mac  err":{"err_mes":"您的mac机器未注册","err_code":4}}
（3）报文体段
***************/
class ThreeSegmentTransmissionProtocol {
private:
	SOCKET sockClient;
	
	string R(int rl) {
		char *buff = new char[rl];
		int lena = 0;
		while (lena < rl) {
			int templ = recv(sockClient, buff + lena, rl - lena, 0);
			if (templ == 0 || templ == -1) {
				delete[]buff;
				return "socket_error";
			}
			lena += templ;
		}
		string r(buff, rl);
		delete[]buff;
		return r;
	};


	string srcmac;
	string desmac;
	string U2G(const char* utf8)
	{
		int len = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, NULL, 0);
		wchar_t* wstr = new wchar_t[len + 1];
		wmemset(wstr, 0, len + 1);
		MultiByteToWideChar(CP_UTF8, 0, utf8, -1, wstr, len);
		len = WideCharToMultiByte(CP_ACP, 0, wstr, -1, NULL, 0, NULL, NULL);
		char* str = new char[len + 1];
		memset(str, 0, len + 1);
		WideCharToMultiByte(CP_ACP, 0, wstr, -1, str, len, NULL, NULL);
		if (wstr) delete[] wstr;
		string r(str, len);
		delete[] str;
		return r;
	}

public:
	void initParam(string &Srcmac, string &Desmac) {
		srcmac = Srcmac;
		desmac = Desmac;
	}

	ThreeSegmentTransmissionProtocol() {};
	~ThreeSegmentTransmissionProtocol() {
		ProtocolDestroy();
	};
private:
	bool Start(string Ip, string port) {
		//加载套接字  
		WSADATA wsaData;
		if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		{
			LOG_ERROR("Failed to load Winsock");
			return false;
		}

		SOCKADDR_IN addrSrv;
		addrSrv.sin_family = AF_INET;
		addrSrv.sin_port = htons(atoi(port.c_str()));
		addrSrv.sin_addr.S_un.S_addr = inet_addr(Ip.c_str());

		//创建套接字  
		sockClient = socket(AF_INET, SOCK_STREAM, 0);
		if (SOCKET_ERROR == sockClient) {
			LOG_ERROR("Socket() error:", WSAGetLastError());
			return false;
		}
		//向服务器发出连接请求  
		if (connect(sockClient, (struct  sockaddr*)&addrSrv, sizeof(addrSrv)) == INVALID_SOCKET) {
			LOG_ERROR("Connect failed", WSAGetLastError());
			return false;
		}
		return true;
	};
public:
	void ProtocolStart(string Ip, string port) {
		bool s = false;
		int count = 0;
		while (!s && count <= 10)
		{
			ProtocolDestroy();
			s = Start(Ip, port);
			LOG_DETAIL(s);
			Sleep(1000);
			count++;
			if (count > 10)
			{
				MessageBox::Show("网络繁忙请稍后再试");
				return;
			}
		}
		MessageBox::Show("网络连接成功");
	};
	void ProtocolDestroy()
	{
		closesocket(sockClient);
		WSACleanup();
	}
	bool ProtocolSend(TSTPBody &b)
	{
		char Headbuff[5];
		char Bodybuff[9];
		//发送数据
		Json::Value root;
		root["src_mac"] = Json::Value(srcmac);
		root["des_mac"] = Json::Value(desmac);
		root["err"]["err_mes"] = "正确";
		root["err"]["err_code"] = 0;
		Json::FastWriter w;
		string head = w.write(root);
		memset(Headbuff, 0x00, 5);
		snprintf(Headbuff, 5, "%d", head.length());
		string lh(Headbuff, 4);

		//body
		Json::Value body;
		body["trial_name"] = b.trial_name;
		body["trial_data"] = b.trial_name;
		string sz_body = w.write(body);
		memset(Bodybuff, 0x00, 9);
		snprintf(Bodybuff, 9, "%d", sz_body.length());
		string lb(Bodybuff, 8);

		string sfinally;
		sfinally = sfinally + lh + lb + head + sz_body;
		int sendlen = send(sockClient, sfinally.c_str(), sfinally.length(), 0);
		if (sendlen <= 0) {

			return false;
		}
		else {
			return true;
		}
	}
	TSTPBody ProtocolRecv() {
		char buff[1000];
		TSTPBody tb;
		string lh = R(4);
		string lb = R(8);
		string head = R(atoi(lh.c_str()));
		string a = U2G(head.c_str());
		MessageBox::Show(gcnew String(a.c_str()));
		string body = R(atoi(lb.c_str()));
		Json::Reader reader;
		Json::Value root;  
		if (reader.parse(body, root))
		{
			tb.trial_name = root["trial_name"].asString();
			tb.trial_data = root["trial_data"];
		};
		return tb;
	}
};






