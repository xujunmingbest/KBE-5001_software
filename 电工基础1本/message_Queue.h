#pragma once

/**************
clr  windows ��Ϣ���� 

*************/

#include <queue>
#include <windows.h>
#include "log.h"
#include "_Mutex.h"
using namespace std;

class QueueMutex {
	HANDLE hMutex1;
public:
	bool Create(string &QueueName) {
		string QN = QueueName + "Mutex";
		hMutex1 = NULL;
		hMutex1 = CreateSemaphoreA(NULL, 1, 20, QN.c_str());
		if (GetLastError() == ERROR_ALREADY_EXISTS)
		{
			LOG_ERROR("������", QN, "����ʧ��");
			return false;
		}
		if (NULL == OpenSemaphoreA(SEMAPHORE_MODIFY_STATE, FALSE, QN.c_str()))
		{
			LOG_ERROR("������", QN, "����ʧ��", GetLastError());
			return false;
		}
		return true;
	}
	void Lock() {
		WaitForSingleObject(hMutex1, INFINITE);
	}
	void UnLock() {
		long dwSem = 0;
		ReleaseSemaphore(hMutex1, 1, &dwSem);
	}
	~QueueMutex()
	{
		CloseHandle(hMutex1);
		hMutex1 = NULL;
	}
};






/**********c����ʵ������Ϣ����***********/
class MsgQueue {
	private:
		queue<string> Queue;
		QueueMutex QM;
		HANDLE ENT;
		bool Enable() {
			return QueueEnable;
		}
    public:  //register
		bool QueueEnable = false;
		/************
		����ע��: ����  sem ע��

		*****/
		void QueueRegister(string &name) {
			QueueEnable = QM.Create(name);
			if (!QueueEnable) {
				return;
			}
			wchar_t *w_name = multiByteToWideChar(name+"Event");
			ENT =  CreateEvent(0,
				false,  // WaitForMultipleObjects ��ָ������ź�״̬
				false,  // һ��ʼ�������ź�
				NULL);
			delete[]w_name;
			if (GetLastError() == ERROR_ALREADY_EXISTS)
			{
				QueueEnable = false;
				LOG_ERROR("������", name, "����ʧ��");
				return;
			}
			QueueEnable = true;
		}
	
		void Publish(string &data) {
			if (!Enable()) return;
			QM.Lock();
			Queue.push(data);
			QM.UnLock();
			SetEvent(ENT);
		}

		string Consume() {
			WaitForMultipleObjects(1, &ENT, FALSE, INFINITE);
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