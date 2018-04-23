#pragma once
#include <windows.h>
#include <iostream>
#include "xml/xml.h"
using namespace std;
#include "底部.h"
using namespace 电工基础1本;
class CControl
{
	HANDLE hMutex1;
public:
	CControl(char *Name);
	void Stop();
	void Start();
	~CControl();

};

extern CControl g_c;
extern ConfigXml g_cx;
void voice_speek(String^ in);