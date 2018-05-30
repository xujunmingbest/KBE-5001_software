#pragma once

/**************
clr  windows 消息队列 

*************/

#include <queue>
#include <windows.h>
#include "log.h"
#include "_Mutex.h"
using namespace std;


//队列信号量
class QueueSemaphore {
	HANDLE hMutex1;
public:
	bool Create(string &QueueName) {
		string QN = QueueName + "Semaphore";
		hMutex1 = NULL;
		hMutex1 = CreateSemaphoreA(NULL, 0, 100, QN.c_str());
		if (GetLastError() == ERROR_ALREADY_EXISTS)
		{
			LOG_ERROR("队列信号", QN, "创建失败");
			return false;
		}
		if (NULL == OpenSemaphoreA(SEMAPHORE_MODIFY_STATE, FALSE, QN.c_str()))
		{
			LOG_ERROR("队列信号", QN, "创建失败", GetLastError());
			return false;
		}
		return true;
	}
	void Decrease() {
		WaitForSingleObject(hMutex1, INFINITE);
	}
	void Increase() {
		long dwSem = 0;
		ReleaseSemaphore(hMutex1, 1, &dwSem);
	}
	~QueueSemaphore()
	{
		CloseHandle(hMutex1);
		hMutex1 = NULL;
	}
};

//队列互斥锁
class QueueMutex {
private:
	HANDLE hMutex1;

public:
	bool Create(string &QueueName){
		hMutex1 = CreateMutex(NULL, FALSE, (QueueName + "MUTEX").c_str());
		if (GetLastError() == ERROR_ALREADY_EXISTS)
		{
			LOG_ERROR("队列锁", QueueName, "创建失败");
			return false;
		}
		return true;
	}

	void Lock() {
		WaitForSingleObject(hMutex1, INFINITE);
	}
	void UnLock() {
		ReleaseMutex(hMutex1);
	}

	~QueueMutex() {
		CloseHandle(hMutex1);
		hMutex1 = NULL;
	}
};




/**********c语言实现县消息队列***********/
class MsgQueue {
	private:
		queue<string> Queue;
		QueueSemaphore QS;
		QueueMutex QM;
		HANDLE ENT;
		bool Enable() {
			return QueueEnable;
		}
    public:  //register
		bool QueueEnable = false;
		/************
		队列注册: 包括  sem 注册

		*****/
		void QueueRegister(string &name) {
			QueueEnable = QM.Create(name);
			if (!QueueEnable) {
				return;
			}
			QueueEnable = QS.Create(name);
			if (!QueueEnable) {
				return;
			}
			QueueEnable = true;
		}
	
		void Publish(string &data) {
			if (!Enable()) return;
			QM.Lock();
			Queue.push(data);
			QM.UnLock();
			QS.Increase();
		}

		string Consume() {
			QS.Decrease();
			QM.Lock();
			string t;
			if (!Queue.empty()) {
				t = Queue.front();
				Queue.pop();
			}
			else {
				t = "";
			}
			QM.UnLock();
			return t;
		}
};