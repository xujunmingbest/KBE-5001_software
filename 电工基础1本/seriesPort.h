#pragma once

#include <iostream>
using namespace std;


#define uint unsigned int
#define uchar unsigned char
uint crc16(uchar *buf, uchar len);
string ATOH(string &in);


struct S_PLCRecv {
	uint SCMId; // ��Ƭ�����
	uint FunCode; //������
	uint Bytes; // �ֽ���
	uint REGAD; //�Ĵ�����ַ
	uint HeaderId; //�Ĵ�����ַ
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

}