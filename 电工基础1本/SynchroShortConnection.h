#pragma once
#include <iostream>
#include <windows.h>
using namespace std;
#pragma comment(lib,"WS2_32.lib")//显示连接套接字库
#include "E:/clr/电工基础1本/电工基础1本/gradeSubmit.h"

#define uint unsigned int
/*******
同步短连接
********/



class SynchroShortConnection{
public:
	SOCKET sockClient;
private:
	string R(int rl) {
		char *buff = new char[rl];
		int lena = 0;
		while (lena < rl) {
			int templ = recv(sockClient, buff + lena, rl - lena, 0);
			if (templ == 0 || templ == -1) {
				delete[]buff;
				return "";
			}
			lena += templ;
		}
		string r(buff, rl);
		delete[]buff;
		return r;
	};

	bool Start(string Ip, string port) {
		//加载套接字  
		WSADATA wsaData;
		if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
		{
			printf("Failed to load Winsock");
			return false;
		}

		SOCKADDR_IN addrSrv;
		addrSrv.sin_family = AF_INET;
		addrSrv.sin_port = htons(atoi(port.c_str()));
		addrSrv.sin_addr.S_un.S_addr = inet_addr(Ip.c_str());

		//创建套接字  
		sockClient = socket(AF_INET, SOCK_STREAM, 0);
		if (SOCKET_ERROR == sockClient) {
			printf("Socket() error: %d", WSAGetLastError());
			return false;
		}
		//向服务器发出连接请求  
		if (connect(sockClient, (struct  sockaddr*)&addrSrv, sizeof(addrSrv)) == INVALID_SOCKET) {
			printf("Connect failed %d", WSAGetLastError());
			return false;
		}
		return true;
	};
public:
	void Destroy() {
		closesocket(sockClient);
		WSACleanup();
	}

	bool Connect(string Ip, string port) {
		int count = 0;
		while (!Start(Ip, port) && count <= 10)
		{
			Destroy();
			Sleep(1000);
			count++;
			if (count > 10)
			{
				return false;
			}
		}
		return true;
	};

	void SetTimeOut(int nNetTimeout) {
		setsockopt(sockClient, SOL_SOCKET, SO_RCVTIMEO,(char *)&nNetTimeout, sizeof(int));
	}

	bool Send(string &buff) {
		if (send(sockClient, buff.c_str(), buff.length(), 0) <= 0) return false;
		return true;
	}
	bool Recv(int len,string &r) {
		r = R(len);
		if ( r.length() == 0) return false;
		return true;
	}
};


class SSCHandle:public SynchroShortConnection {
public:
	string GenerateLen(uint ln)
	{
		char le[2];
		le[0] = (ln & 0xffff) >> 8;
		le[1] = ln & 0xff;
		return string(le, 2);
	}


	bool SendGrade(string &grade,Head &H)
	{

		string l = GenerateLen(grade.length());
		string s_h((char*)&H, sizeof(Head));
		string t = l + s_h + grade;
		return Send(t);
	}

	bool RecvRet(string &retmsg)
	{
		uint o = 0;
		if (!RecvLen(o)) return false;
		if ( !Recv(o, retmsg) ) return false;
		return true;
	}

	bool RecvLen(unsigned int &Out)
	{
		string r;
		if (!Recv(2, r)) return false;
		 
		Out = 0;
		Out = ( r.c_str()[0] & 0xff);
		Out = Out << 8;
		Out += (r.c_str()[1] & 0xff);
		return true;
	}
};


