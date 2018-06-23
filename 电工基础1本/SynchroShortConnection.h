#pragma once
#include <iostream>
#include <windows.h>
#include <fstream>
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
	string R(int rl);
public:
	void Destroy();
	bool Connect(string Ip, string port);
	bool Start(string Ip, string port);
	void SetTimeOut(int nNetTimeout);
	bool Send(string &buff);
	bool Recv(int len, string &r);
};


class SSCHandle_e : public SynchroShortConnection {
private:  bool RecvFIRSTBYTES(uint &len);
		  bool RecvSECONDBYTES(uint &len);
		  bool RecvFIRST( uint &len, string &first);
		  bool RecvSECOND(uint &len, string &second);
		  string GenerateFIRSTBYTES(uint ln);
		  string GenerateSECONDBYTES(uint ln);
		  string HandleMsg(string &first, string &second);
public:   string RecvHandle();
	      bool SendRequest(Head &H, string &body);
	      bool _ReadFile(string &fileName, string &data);
          string SSCSend(Head &H, string &body);
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


