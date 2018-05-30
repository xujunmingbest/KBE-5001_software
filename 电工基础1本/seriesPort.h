#pragma once

#include <iostream>
using namespace std;
#include "xml/xml.h"

#define uint unsigned int
#define uchar unsigned char
uint crc16(uchar *buf, uchar len);
string ATOH(string &in);

typedef unsigned char       BYTE;
struct S_PLCRecv {
	BYTE MId;		//��Ƭ����� 01
	BYTE FunCode;	//������	 03
	BYTE Bytes;		//�ֽ���     0E

	uint HeaderId;	//��ͷ���  2�ǵ�ѹ�� 5��ma ������
	uint U;
	uint I;
	uint P;
	uint COS;
	uint Fhz;
	uint DCsymbol;
};



namespace �繤����1�� {
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System;
	using namespace System::Threading;

	/***************
	clr ���ڿ���Э��
	���ڴ���ֻ�ܴ�һ�Σ����� ֻ��һ����Ϳ���
	****************/
	public ref class SerialControl {
	private:
		SerialPort^  serialPort1 = gcnew SerialPort;
	public:
		void serialPortOpen(String ^ PortName);
		void serialPort1Close();
		bool Send(string &s);
		bool SendNoCrc(string &s);
		string Recv(int len);
		bool check_crc16(string &in);
	};

	/******����ҵ���*****/
	public ref class SerialHandle {
	private:
		SerialControl ^sc = gcnew SerialControl;
	public:
		void SerialHandleInit();
		void SerialHandleClose();
		/********��ȡ�豸��********/
		uint GetMonitorTesterId(); //���豸��
		S_PLCRecv GetliKongData(); //��ȡ
		void MonitorTesterId(uint TesterId); //д�豸��
	};

	/******���Ƶ�Դҵ���*****/
	public ref class SerialControlSource {
	private:
		SerialControl ^sc = gcnew SerialControl;
	public:
		void SerialHandleInit();
		void SerialHandleClose();
		/********��ȡ�豸��********/
		void SetDirectVoltage(int Voltage);
		void SetDirectCurrent(int Current);
		void SetAlternatingVoltage(char Id,int Voltage);
		void OpenSource(int Id);
		void CloseSource(int Id);
	};

}

