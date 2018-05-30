#pragma once
#include "message_Queue.h"
#include "log.h"
//启用开关  系统日志
#define SYS_LOG_ENABLE 


#ifdef SYS_LOG_ENABLE

template <class T>
inline void WriteArg(T t, string &s)
{
	s += t ;
	s += " ";
}

extern MsgQueue SysLogQue;

#define _SYS_ERROR 1
#define _SYS_INFO 2 

template <class ...Args>
static void SYSLOG(string &Type, Args... args) {

	string t;

	if (Type == "ERROR") {
		t += _SYS_ERROR; 
		t += Mylog::_GetSystemTime();
		t += ":ERROR:";
	}
	else if (Type == "INFO") {
		t += _SYS_INFO; 
		t += Mylog::_GetSystemTime();
		t += ":INFO:";
	}
	int arr[] = { (WriteArg(args,t), 0)... };
	SysLogQue.Publish(t);
}

#define SYS_LOG_ERROR(...)  SYSLOG(string("ERROR"),__VA_ARGS__)
#define SYS_LOG_INF(...)    SYSLOG(string("INFO"),__VA_ARGS__)





namespace 电工基础1本 {
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System;
	using namespace System::Threading;

	public ref class SysLog {



	};



}

#endif