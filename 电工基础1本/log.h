#pragma once
// c++log封装.cpp : 定义控制台应用程序的入口点。
//


/**
* 用于输出log文件的类.
*/


#ifndef LOG_H    
#define LOG_H    

#include <fstream>    
#include <string>    
#include <ctime>    
#include <windows.h>
#include <iostream>
#include "_Mutex.h"

using namespace std;



#define LOGPATH  "log.txt"

//启用开关  
#define LOG_ENABLE  
class Mylog {
private:

	//获取本地时间，格式如"[2011-11-11 11:11:11] ";   
	static string GetSystemTime()
	{
		time_t tNowTime;
		time(&tNowTime);
		tm* tLocalTime = localtime(&tNowTime);
		char szTime[30] = { '\0' };
		strftime(szTime, 30, "[%Y-%m-%d %H:%M:%S] ", tLocalTime);
		string strTime = szTime;
		return strTime;
	}

	ofstream fout;

	template <class T>
	inline void WriteArg(T t)
	{
		fout << t << " ";
	}

public:
	Mylog() {
		WriteLogBOE("BEGIN"); 
	}
	~Mylog() {
		WriteLogBOE("END");
	}

	template <class ...Args>
	void WriteDetail(const char* file, const char* func, int line, string MODEL, Args... args)
	{
		LogLock();
		fout.open(LOGPATH, ios::app);
		string fn(file);
		fn = string(fn, fn.find_last_of('\\') + 1, fn.length());
		fout << GetSystemTime() << "[" << fn << ":" << func << ":" << line <<
			"] [" << MODEL << "]: ";
		int arr[] = { (WriteArg(args), 0)... };
		fout << ";" << endl;
		fout.close();
		LogUnLock();
	}

	void WriteLogBOE(string eb)
	{
		LogLock();
		char sz_Path[MAX_PATH] = { 0 };
		GetModuleFileNameA(NULL, sz_Path, MAX_PATH);
		string exeName(sz_Path);
		exeName = string(sz_Path, exeName.find_last_of('\\') + 1, exeName.length());
		ofstream fout(LOGPATH, ios::app);
		fout.seekp(ios::end);
		if (eb == "BEGIN") {
			fout << "--------------------" << GetSystemTime() << "[" << exeName << "]" << "  [Begin]--------------------" << endl;
		}
		else if (eb == "END") {
			fout << "--------------------" << GetSystemTime() << "[" << exeName << "]" << "  [End]  --------------------" << endl;
		}
		fout.close();
		LogUnLock();
	}
};

extern Mylog Mlog;
#define LOG_DETAIL(...)  Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"DETAIL",__VA_ARGS__)
#define LOG_BEGIN        Mlog.WriteLogBOE("BEGIN")
#define LOG_DEBUG(...)   Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"DEBUG",__VA_ARGS__)
#define LOG_ERROR(...)   Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"ERROR",__VA_ARGS__)
#define LOG_EXCEPTION(...)   Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"EXCEPTION",__VA_ARGS__)
#define LOG_WARN(...)    Mlog.WriteDetail(__FILE__,__FUNCTION__,__LINE__,"WARN",__VA_ARGS__)
#define LOG_END          Mlog.WriteLogBOE("END")



#endif
