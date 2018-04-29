#include "底部.h"
#include "log.h"


namespace 电工基础1本 {
	using namespace System::IO::Ports;
	using namespace System::Threading;


	/***************
	clr 串口控制协议
	****************/
	public ref class SerialControl {
		SerialPort^  serialPort1;
	private:
		Thread^ asd;
		void serialPort1Open() {
			serialPort1->Close();
			if (asd) {
				asd->Abort();
			}
			try {
				serialPort1->ReceivedBytesThreshold = 1;
				serialPort1->DataBits = 8;
				serialPort1->Parity = System::IO::Ports::Parity::None; //无奇偶校验位
																	   //serialPort1->StopBits = System::IO::Ports::StopBits::One;//设置停止位为1
				serialPort1->Open(); //串口打开
			}
			catch (System::Exception ^e) {
				LOG_ERROR("打开串口失败");
				return;
			}
			asd = gcnew Thread(gcnew ThreadStart(this, &SerialControl::Recv));
			asd->Start();
			asd->IsBackground = true;
		}
		void serialPort1Close() {
			serialPort1->Close();
		}
		void Send(cli::array<unsigned char>^ buffer1) {
			int len;
			char *b = new char[len * 2 + 1];
			memset(b, 0x00, len * 2 + 1);
			int alen = strlen(b);
			cli::array<unsigned char>^ buffer = gcnew cli::array<unsigned char>(alen);
			for (int i = 0; i < len * 2; i++)
			{
				if (b[i] != 0x00) {
					buffer[i] = b[i];
				}
				else {
					break;
				}
			}
			delete[] b;
			try {
				serialPort1->Write(buffer, 0, alen);//发送指令0x55
				if (alen == 0) {
					throw"发送0字节";
				}
			}
			catch (System::Exception ^e) {
				return;
			}
		}
		void Recv() {
			while (1) {
				cli::array<unsigned char>^ r1buff;
				r1buff = gcnew cli::array<unsigned char>(1);
				cli::array<unsigned char>^ rbuff;
				rbuff = gcnew cli::array<unsigned char>(100);
				int recvlen;
				try {
					recvlen = serialPort1->Read(r1buff, 0, 1);// 估计是可以返回 字符串的 读取个数
					if (recvlen <= 0) {
						throw "串口退出";
					}
					recvlen += serialPort1->Read(rbuff, 0, 100);// 估计是可以返回 字符串的 读取个数
					if (recvlen <= 0) {
						throw "串口退出";
					}
				}
				catch (System::Exception ^e) {
					Console::Write(e->ToString());
					return;
				}
				cli::array<unsigned char>^ buff = gcnew cli::array<unsigned char>(101);
				r1buff->CopyTo(buff, 0);
				rbuff->CopyTo(buff, 1);
				cli::pin_ptr<unsigned char> c = &buff[0];
				char *pinp = (char *)c;
			}
		}
	};


}