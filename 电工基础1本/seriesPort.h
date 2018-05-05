#pragma once

#include <iostream>
using namespace std;


#define uint unsigned int
#define uchar unsigned char
uint crc16(uchar *buf, uchar len);
string ATOH(string &in);


struct S_PLCRecv {
	uint SCMId; // 单片机编号
	uint FunCode; //功能码
	uint Bytes; // 字节数
	uint REGAD; //寄存器地址
	uint HeaderId; //寄存器地址
	uint U;
	uint I;
	uint P;
	uint COS;
	uint Fhz;
	uint DCsymbol;
};



namespace 电工基础1本 {
	using namespace System::IO::Ports;
	using namespace System::Threading;
	using namespace System::IO;
	using namespace System;
	using namespace System::Threading;

	/***************
	clr 串口控制协议
	由于串口只能打开一次，所以 只用一个类就可以
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

	/******串口业务层*****/
	public ref class SerialHandle {
	private:
		SerialControl ^sc = gcnew SerialControl;
	public:
		void SerialHandleInit();
		void SerialHandleClose();
		/********读取设备号********/
		uint GetMonitorTesterId(); //读设备号
		S_PLCRecv GetliKongData(); //获取
		void MonitorTesterId(uint TesterId); //写设备号
	};

}