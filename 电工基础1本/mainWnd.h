#pragma once
#include "实验1Main.h"
#include "tool.h"
#include "LoginWnd.h"
#include "基尔霍夫定律.h"
#include "设置.h"
#include "系统日志.h"
#include "首页.h"
#include "叠加原理.h"
#include "示波器.h"
#include "一阶电路的响应测试.h"
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

	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ToolStripMenuItem^  基尔霍夫定律实验ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  系统日志ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  首页ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  叠加原理ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  示波器调试ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  一阶电路的响应测试ToolStripMenuItem;





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
			this->首页ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->元件伏安特性的测试ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->基尔霍夫定律实验ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->叠加原理ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->一阶电路的响应测试ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->系统日志ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->示波器调试ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->首页ToolStripMenuItem,
					this->实验ToolStripMenuItem, this->设置ToolStripMenuItem, this->系统日志ToolStripMenuItem, this->示波器调试ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->实验ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(730, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &mainWnd::menuStrip1_ItemClicked);
			// 
			// 首页ToolStripMenuItem
			// 
			this->首页ToolStripMenuItem->Name = L"首页ToolStripMenuItem";
			this->首页ToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->首页ToolStripMenuItem->Text = L"首页";
			this->首页ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::首页ToolStripMenuItem_Click);
			// 
			// 实验ToolStripMenuItem
			// 
			this->实验ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->元件伏安特性的测试ToolStripMenuItem,
					this->基尔霍夫定律实验ToolStripMenuItem, this->叠加原理ToolStripMenuItem, this->一阶电路的响应测试ToolStripMenuItem
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
			// 叠加原理ToolStripMenuItem
			// 
			this->叠加原理ToolStripMenuItem->Name = L"叠加原理ToolStripMenuItem";
			this->叠加原理ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->叠加原理ToolStripMenuItem->Text = L"叠加原理";
			this->叠加原理ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::叠加原理ToolStripMenuItem_Click);
			// 
			// 一阶电路的响应测试ToolStripMenuItem
			// 
			this->一阶电路的响应测试ToolStripMenuItem->Name = L"一阶电路的响应测试ToolStripMenuItem";
			this->一阶电路的响应测试ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->一阶电路的响应测试ToolStripMenuItem->Text = L"一阶电路的响应测试";
			this->一阶电路的响应测试ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::一阶电路的响应测试ToolStripMenuItem_Click);
			// 
			// 设置ToolStripMenuItem
			// 
			this->设置ToolStripMenuItem->Name = L"设置ToolStripMenuItem";
			this->设置ToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->设置ToolStripMenuItem->Text = L"设置";
			this->设置ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::设置ToolStripMenuItem_Click);
			// 
			// 系统日志ToolStripMenuItem
			// 
			this->系统日志ToolStripMenuItem->Name = L"系统日志ToolStripMenuItem";
			this->系统日志ToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->系统日志ToolStripMenuItem->Text = L"系统日志";
			this->系统日志ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::系统日志ToolStripMenuItem_Click);
			// 
			// 示波器调试ToolStripMenuItem
			// 
			this->示波器调试ToolStripMenuItem->Name = L"示波器调试ToolStripMenuItem";
			this->示波器调试ToolStripMenuItem->Size = System::Drawing::Size(126, 24);
			this->示波器调试ToolStripMenuItem->Text = L"示波器调试";
			this->示波器调试ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::示波器调试ToolStripMenuItem_Click);
			// 
			// mainWnd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 518);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"mainWnd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"电工基础1本";
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
		设置 ^ 设置Wnd;
		首页 ^ 首页Wnd;
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
		if (首页IsOpened == true)
		{
			首页Wnd->BringToFront(); //这个可以置于最前面
			首页Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		首页Wnd = gcnew 首页;
		首页Wnd->MdiParent = this;
		首页Wnd->WindowState = FormWindowState::Maximized;
		//showActiveMdiChild();
		首页Wnd->Show();

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
		 系统日志^ 系统日志Wnd;
private: System::Void 基尔霍夫定律实验ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (基尔霍夫定律IsOpened == true)
	{
		基尔霍夫定律Wnd->BringToFront(); //这个可以置于最前面
		基尔霍夫定律Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	基尔霍夫定律Wnd = gcnew 基尔霍夫定律;
	基尔霍夫定律Wnd->WindowState = FormWindowState::Maximized;
	this->Visible = false;
	基尔霍夫定律Wnd->Show();
}
private: System::Void 设置ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (设置IsOpened == true)
	{
		设置Wnd->BringToFront(); //这个可以置于最前面
		设置Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	设置Wnd = gcnew 设置;
	设置Wnd->MdiParent = this;
	设置Wnd->WindowState = FormWindowState::Maximized;
	设置Wnd->Show();
}
private: System::Void 系统日志ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (系统日志IsOpened == true)
	{
		系统日志Wnd->BringToFront(); //这个可以置于最前面
		系统日志Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	系统日志Wnd = gcnew 系统日志;
	系统日志Wnd->MdiParent = this;
	系统日志Wnd->WindowState = FormWindowState::Maximized;
	系统日志Wnd->Show();
}
private: System::Void 首页ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (首页IsOpened == true)
	{
		首页Wnd->BringToFront(); //这个可以置于最前面
		首页Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	首页Wnd = gcnew 首页;
	首页Wnd->MdiParent = this;
	首页Wnd->WindowState = FormWindowState::Maximized;
	//showActiveMdiChild();
	首页Wnd->Show();
}


private: System::Void 叠加原理ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	叠加原理 ^ f = gcnew 叠加原理();
	f->Show();
	this->Visible = false;
}

private: System::Void 示波器调试ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("示波器");

	if (f == nullptr) {
		示波器^ f = gcnew 示波器;
		f->MdiParent = this;
		f->Name = "示波器";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}

}



		 Form^ GetWindowsChild(String ^FormName) {
			 for each(Form^ f in MdiChildren)
			 {
				 if (f->Name == FormName)
				 {
					 return f;
				 }
			 }
			 return nullptr;
		 }

private: System::Void 一阶电路的响应测试ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	一阶电路的响应测试 ^ f = gcnew 一阶电路的响应测试();
	f->Show();
	this->Visible = false;
}
};
}
