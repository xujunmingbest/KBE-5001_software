#pragma once
#include "实验1Main.h"
#include "tool.h"
#include "LoginWnd.h"
#include "基尔霍夫定律.h"
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// mainWnd 摘要
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			c = gcnew Thread(gcnew ThreadStart(this, &mainWnd::C));
			c->Start();
			c->IsBackground = true;
			//this->skinEngine1->SkinFile = "E:\\clr\\电工基础1本\\res\\皮肤\\DeepGreen.ssk";
			//ShowLoginWnd();


			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void ShowLoginWnd() {
			bool Success = false;
			LoginWnd ^ lw = gcnew LoginWnd(Success);
			lw->ShowDialog();
			if (!Success)
			{
				exit(-1);
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^  网络重连ToolStripMenuItem;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ToolStripMenuItem^  基尔霍夫定律实验ToolStripMenuItem;

	public:

		Thread ^c;
		void C() {
			while (1) {
				g_c.Stop();
				this->Visible = true;
				this->BringToFront();
			}
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~mainWnd()
		{
			c->Abort();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  元件伏安特性的测试ToolStripMenuItem;

	private: System::Windows::Forms::Label^  label1;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->元件伏安特性的测试ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->基尔霍夫定律实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->网络重连ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->实验ToolStripMenuItem,
					this->网络重连ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(772, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &mainWnd::menuStrip1_ItemClicked);
			// 
			// 实验ToolStripMenuItem
			// 
			this->实验ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->元件伏安特性的测试ToolStripMenuItem,
					this->基尔霍夫定律实验ToolStripMenuItem
			});
			this->实验ToolStripMenuItem->Name = L"实验ToolStripMenuItem";
			this->实验ToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->实验ToolStripMenuItem->Text = L"实验";
			// 
			// 元件伏安特性的测试ToolStripMenuItem
			// 
			this->元件伏安特性的测试ToolStripMenuItem->Name = L"元件伏安特性的测试ToolStripMenuItem";
			this->元件伏安特性的测试ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->元件伏安特性的测试ToolStripMenuItem->Text = L"元件伏安特性的测试";
			this->元件伏安特性的测试ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::元件伏安特性的测试ToolStripMenuItem_Click);
			// 
			// 基尔霍夫定律实验ToolStripMenuItem
			// 
			this->基尔霍夫定律实验ToolStripMenuItem->Name = L"基尔霍夫定律实验ToolStripMenuItem";
			this->基尔霍夫定律实验ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->基尔霍夫定律实验ToolStripMenuItem->Text = L"基尔霍夫定律实验";
			this->基尔霍夫定律实验ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::基尔霍夫定律实验ToolStripMenuItem_Click);
			// 
			// 网络重连ToolStripMenuItem
			// 
			this->网络重连ToolStripMenuItem->Name = L"网络重连ToolStripMenuItem";
			this->网络重连ToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->网络重连ToolStripMenuItem->Text = L"网络重连";
			this->网络重连ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::网络重连ToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(0, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(772, 504);
			this->label1->TabIndex = 1;
			this->label1->Text = L"欢迎使用中腾科教教学软件";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &mainWnd::label1_Click);
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(772, 532);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainWnd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"电工基础1本";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &mainWnd::mainWnd_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*
  实验1Main


*/

		实验1Main ^ 实验1MainWnd;
	private: System::Void 元件伏安特性的测试ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (实验1MainIsOpened == true)
		{
			实验1MainWnd->BringToFront(); //这个可以置于最前面
			实验1MainWnd->WindowState = FormWindowState::Maximized;
			return;
		}
		实验1MainWnd = gcnew 实验1Main;
		实验1MainWnd->Show();
		实验1MainWnd->WindowState = FormWindowState::Maximized;
		this->Visible = false;
	}
	private: System::Void mainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
	}



private: System::Void 网络重连ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	/*
	//在登入窗体应该做的事情
	g_TSTP.initParam(string("mac1"), configXml.DesMac);
	g_TSTP.ProtocolStart(configXml.RepeaterIp, configXml.RepeaterPort);
	TSTPBody b;
	g_TSTP.ProtocolSend(b);
	g_TSTP.ProtocolSend(b);
	g_TSTP.ProtocolSend(b);
	while (1) {
		TSTPBody a = g_TSTP.ProtocolRecv();
		MessageBox::Show(gcnew String(a.trial_name.c_str()));
		Json::FastWriter w;
		MessageBox::Show(gcnew String(w.write(a.trial_data).c_str()));
	}
	*/
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}


		 基尔霍夫定律^ 基尔霍夫定律Wnd;
private: System::Void 基尔霍夫定律实验ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (基尔霍夫定律IsOpened == true)
	{
		基尔霍夫定律Wnd->BringToFront(); //这个可以置于最前面
		基尔霍夫定律Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	基尔霍夫定律Wnd = gcnew 基尔霍夫定律;
	基尔霍夫定律Wnd->Show();
	基尔霍夫定律Wnd->WindowState = FormWindowState::Maximized;
	this->Visible = false;

}
};
}
