#include "seriesPort.h"

using namespace 电工基础1本;



uint TwoByteTouInt(char *buff);

void SerialControl::serialPortOpen(String ^ PortName) {

	int count = 0;

	serialPort1->Close();
	try {
		serialPort1->PortName = PortName;
		serialPort1->ReceivedBytesThreshold = 1;
		serialPort1->DataBits = 8;
		serialPort1->Parity = System::IO::Ports::Parity::None; //无奇偶校验位
															   //serialPort1->StopBits = System::IO::Ports::StopBits::One;//设置停止位为1
		serialPort1->Open(); //串口打开
	}
	catch (System::Exception ^e) {
		cout << "打开串口失败" << endl;
	}
	return;
}

void SerialControl::serialPort1Close() {
	serialPort1->Close();
}

bool SerialControl::Send(string &s) {

	int alen = s.length();
	cli::array<unsigned char>^ buffer = gcnew cli::array<unsigned char>(alen+2);
	for (int i = 0; i < alen; i++)
	{
		buffer[i] = s[i];
	}
	try {

		uint Yu = 0xff;
		uint r = crc16((uchar*)s.c_str(), s.length());
		uchar buffr[2];
		buffr[0] = (r &0xffff) >> 8;
		buffr[1] = r & 0xff;
		buffer[alen] = buffr[1];
		buffer[alen+1] = buffr[0];

		serialPort1->Write(buffer, 0, alen+2);//发送指令0x55
		if (alen == 0) {
			throw"发送0字节";
		}
	}
	catch (System::Exception ^e) {
		return false;
	}
}

string SerialControl::Recv(int len) {
	string out;
	cli::array<unsigned char>^ rbuff = gcnew cli::array<unsigned char>(len);
	try {
		int actrecvlen = 0;
		cli::array<unsigned char>^ buff = gcnew cli::array<unsigned char>(100);
		while (actrecvlen < len) {
			int recvlen = serialPort1->Read(buff, 0, len - actrecvlen);// 估计是可以返回 字符串的 读取个数
			Array::Copy(buff, 0, rbuff, actrecvlen, recvlen);
			cli::pin_ptr<unsigned char> c = &rbuff[actrecvlen];
			char *pinp = (char *)c;
			out += string(pinp, recvlen);
			actrecvlen += recvlen;
			if (recvlen <= 0) {
				throw "串口退出";
			}
		}
	}
	catch (System::Exception ^e) {
		return "";
	}

	//crc16检验

	if (!check_crc16(out)) 
		return "";
	
	return out;
}


string HTOA(string &h) {
	int a;
	string out;
	for (int i = 0; i < h.length(); i += 2) {
		sscanf_s(h.c_str() + i, "%2X", &a);
		out += a;
	}
	return out;
}

string ATOH(string &in) {
	char *H = new char[in.length() * 2 + 1];
	for (int i = 0; i < in.length(); i++) {
		snprintf(H + i * 2, 3, "%02X", uchar(in[i]));
	}
	string out(H, in.length() * 2);
	delete[]H;
	return out;
}

uint crc16(uchar *buf, uchar len);
//两位crc的地址
bool SerialControl::check_crc16(string &in) {
	uint crcr = crc16((uchar*)in.c_str(), in.length()-2);
	uint actcrcr = 0;
	uchar temp[3];
	temp[0] = (uchar)in[in.length() - 1];
	temp[1] = (uchar)in[in.length() - 2];
	actcrcr = TwoByteTouInt((char*)temp);


	if (crcr == actcrcr) {
		return true;
	}
	return false;
}

uint calccrc(uchar crcbuf, uint crc)			//校验算法
{
	uchar i;
	uchar chk;
	crc = crc ^ crcbuf;
	for (i = 0; i<8; i++)
	{
		chk = (uchar)(crc & 1);
		crc = crc >> 1;
		crc = crc & 0x7fff;
		if (chk == 1)
			crc = crc ^ 0xa001;
		crc = crc & 0xffff;
	}
	return crc;
}


uint crc16(uchar *buf, uchar len)			//校验函数 高位在前，低位在后
{
	uchar hi, lo, i;
	uint crc;
	crc = 0xFFFF;
	for (i = 0; i<len; i++)
	{
		crc = calccrc(*buf, crc);
		buf++;
	}
	hi = (uchar)(crc / 256);
	lo = (uchar)(crc % 256);
	crc = (((uint)(hi)) << 8) | lo;
	return crc;
}




void SerialHandle::SerialHandleInit()
{
	sc->serialPortOpen("com7");
}

void SerialHandle::SerialHandleClose()
{
	sc->serialPort1Close();
}


uint SerialHandle::GetMonitorTesterId() {
	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x03;
	buff[2] = 0x00;
	buff[3] = 0x00;
	buff[4] = 0x00;
	buff[5] = 0x01;

	sc->Send(string(buff, 6));
	string r = sc->Recv(7);
	uint testerId;
	if (r.length() == 0) return 0;
	testerId = TwoByteTouInt(&r[3]);
	return testerId;
} //写设备号

void SerialHandle::MonitorTesterId(uint TesterId)
{
	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x06;
	buff[2] = 0x00;
	buff[3] = 0x00;
	buff[4] = TesterId >> 8;
	buff[5] = TesterId & 0Xff;

	sc->Send(string(buff, 6));
	string r = sc->Recv(8);

}


S_PLCRecv SerialHandle::GetliKongData()
{
	S_PLCRecv pr;

	char buff[6];
	buff[0] = 0x01;
	buff[1] = 0x03;
	buff[2] = 0x00;
	buff[3] = 0x01;
	buff[4] = 0x00;
	buff[5] = 0x07;

	sc->Send(string(buff, 6));
	string r = sc->Recv(19);
	if (r.length() == 0) return pr;

	pr.SCMId = r[0];
	pr.FunCode = r[1];
	pr.Bytes = r[2];

	pr.HeaderId = TwoByteTouInt(&r[3]);
	pr.U = TwoByteTouInt(&r[5]);
	pr.I = TwoByteTouInt(&r[7]);
	pr.P = TwoByteTouInt(&r[9]);
	pr.COS = TwoByteTouInt(&r[11]);
	pr.Fhz = TwoByteTouInt(&r[13]);
	pr.DCsymbol = TwoByteTouInt(&r[15]);
	return pr;
}//获取


//高字节在前 低字节在后
uint TwoByteTouInt(char *buff)
{
	uint t = 0;
	t = ((uint)buff[0]) & 0xff;
	t = t << 8;
	t += ((uint)buff[1]) & 0xff;
	return t;
}