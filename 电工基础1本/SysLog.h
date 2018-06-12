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

#define _SYS_ERROR 0x00
#define _SYS_INFO 0x01
#define _SYS_WARN 0x02

template <class ...Args>
static void SYSLOG(string &Type, Args... args) {

	string t;

	if (Type == "ERROR") {
		t += char(_SYS_ERROR); 
	}
	else if (Type == "INFO") {
		t += char(_SYS_INFO);
	}
	else if (Type == "WARN") {
		t += char(_SYS_WARN);
	}
	int arr[] = { (WriteArg(args,t), 0)... };
	SysLogQue.Publish(t);
}

#define SYS_LOG_ERROR(...)  SYSLOG(string("ERROR"),__VA_ARGS__)
#define SYS_LOG_INF(...)    SYSLOG(string("INFO"),__VA_ARGS__)
#define SYS_LOG_WARN(...)    SYSLOG(string("WARN"),__VA_ARGS__)


#endif