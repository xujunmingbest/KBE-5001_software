#pragma once
#include "ʵ��1Main.h"
#include "tool.h"
#include "LoginWnd.h"
#include "����������.h"
#include "����.h"
#include "ϵͳ��־.h"
#include "��ҳ.h"
#include "����ԭ��.h"
#include "ʾ����.h"
#include "һ�׵�·����Ӧ����.h"
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// mainWnd ժҪ
	/// </summary>
	public ref class mainWnd : public System::Windows::Forms::Form
	{
	public:
		mainWnd(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			c = gcnew Thread(gcnew ThreadStart(this, &mainWnd::C));
			c->Start();
			c->IsBackground = true;
			//this->skinEngine1->SkinFile = "E:\\clr\\�繤����1��\\res\\Ƥ��\\DeepGreen.ssk";
			//ShowLoginWnd();


			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ʵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ϵͳ��־ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��ҳToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ����ԭ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʾ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  һ�׵�·����Ӧ����ToolStripMenuItem;





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
		/// ������������ʹ�õ���Դ��
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
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  Ԫ���������ԵĲ���ToolStripMenuItem;


	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��ҳToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Ԫ���������ԵĲ���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ԭ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->һ�׵�·����Ӧ����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ϵͳ��־ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʾ��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->��ҳToolStripMenuItem,
					this->ʵ��ToolStripMenuItem, this->����ToolStripMenuItem, this->ϵͳ��־ToolStripMenuItem, this->ʾ��������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MdiWindowListItem = this->ʵ��ToolStripMenuItem;
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(730, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &mainWnd::menuStrip1_ItemClicked);
			// 
			// ��ҳToolStripMenuItem
			// 
			this->��ҳToolStripMenuItem->Name = L"��ҳToolStripMenuItem";
			this->��ҳToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->��ҳToolStripMenuItem->Text = L"��ҳ";
			this->��ҳToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::��ҳToolStripMenuItem_Click);
			// 
			// ʵ��ToolStripMenuItem
			// 
			this->ʵ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->Ԫ���������ԵĲ���ToolStripMenuItem,
					this->����������ʵ��ToolStripMenuItem, this->����ԭ��ToolStripMenuItem, this->һ�׵�·����Ӧ����ToolStripMenuItem
			});
			this->ʵ��ToolStripMenuItem->Name = L"ʵ��ToolStripMenuItem";
			this->ʵ��ToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->ʵ��ToolStripMenuItem->Text = L"ʵ��";
			// 
			// Ԫ���������ԵĲ���ToolStripMenuItem
			// 
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Name = L"Ԫ���������ԵĲ���ToolStripMenuItem";
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Text = L"Ԫ���������ԵĲ���";
			this->Ԫ���������ԵĲ���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::Ԫ���������ԵĲ���ToolStripMenuItem_Click);
			// 
			// ����������ʵ��ToolStripMenuItem
			// 
			this->����������ʵ��ToolStripMenuItem->Name = L"����������ʵ��ToolStripMenuItem";
			this->����������ʵ��ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->����������ʵ��ToolStripMenuItem->Text = L"����������ʵ��";
			this->����������ʵ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::����������ʵ��ToolStripMenuItem_Click);
			// 
			// ����ԭ��ToolStripMenuItem
			// 
			this->����ԭ��ToolStripMenuItem->Name = L"����ԭ��ToolStripMenuItem";
			this->����ԭ��ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->����ԭ��ToolStripMenuItem->Text = L"����ԭ��";
			this->����ԭ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::����ԭ��ToolStripMenuItem_Click);
			// 
			// һ�׵�·����Ӧ����ToolStripMenuItem
			// 
			this->һ�׵�·����Ӧ����ToolStripMenuItem->Name = L"һ�׵�·����Ӧ����ToolStripMenuItem";
			this->һ�׵�·����Ӧ����ToolStripMenuItem->Size = System::Drawing::Size(273, 26);
			this->һ�׵�·����Ӧ����ToolStripMenuItem->Text = L"һ�׵�·����Ӧ����";
			this->һ�׵�·����Ӧ����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::һ�׵�·����Ӧ����ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(63, 24);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::����ToolStripMenuItem_Click);
			// 
			// ϵͳ��־ToolStripMenuItem
			// 
			this->ϵͳ��־ToolStripMenuItem->Name = L"ϵͳ��־ToolStripMenuItem";
			this->ϵͳ��־ToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->ϵͳ��־ToolStripMenuItem->Text = L"ϵͳ��־";
			this->ϵͳ��־ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::ϵͳ��־ToolStripMenuItem_Click);
			// 
			// ʾ��������ToolStripMenuItem
			// 
			this->ʾ��������ToolStripMenuItem->Name = L"ʾ��������ToolStripMenuItem";
			this->ʾ��������ToolStripMenuItem->Size = System::Drawing::Size(126, 24);
			this->ʾ��������ToolStripMenuItem->Text = L"ʾ��������";
			this->ʾ��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &mainWnd::ʾ��������ToolStripMenuItem_Click);
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
			this->Text = L"�繤����1��";
			this->Load += gcnew System::EventHandler(this, &mainWnd::mainWnd_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
/*
  ʵ��1Main


*/

		ʵ��1Main ^ ʵ��1MainWnd;
		���� ^ ����Wnd;
		��ҳ ^ ��ҳWnd;
	private: System::Void Ԫ���������ԵĲ���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ʵ��1MainIsOpened == true)
		{
			ʵ��1MainWnd->BringToFront(); //�������������ǰ��
			ʵ��1MainWnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��1MainWnd = gcnew ʵ��1Main;
		ʵ��1MainWnd->Show();
		ʵ��1MainWnd->WindowState = FormWindowState::Maximized;
		this->Visible = false;
	}
	private: System::Void mainWnd_Load(System::Object^  sender, System::EventArgs^  e) {
		if (��ҳIsOpened == true)
		{
			��ҳWnd->BringToFront(); //�������������ǰ��
			��ҳWnd->WindowState = FormWindowState::Maximized;
			return;
		}
		��ҳWnd = gcnew ��ҳ;
		��ҳWnd->MdiParent = this;
		��ҳWnd->WindowState = FormWindowState::Maximized;
		//showActiveMdiChild();
		��ҳWnd->Show();

	}



private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	/*
	//�ڵ��봰��Ӧ����������
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


		 ����������^ ����������Wnd;
		 ϵͳ��־^ ϵͳ��־Wnd;
private: System::Void ����������ʵ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (����������IsOpened == true)
	{
		����������Wnd->BringToFront(); //�������������ǰ��
		����������Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����������Wnd = gcnew ����������;
	����������Wnd->WindowState = FormWindowState::Maximized;
	this->Visible = false;
	����������Wnd->Show();
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (����IsOpened == true)
	{
		����Wnd->BringToFront(); //�������������ǰ��
		����Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����Wnd = gcnew ����;
	����Wnd->MdiParent = this;
	����Wnd->WindowState = FormWindowState::Maximized;
	����Wnd->Show();
}
private: System::Void ϵͳ��־ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ϵͳ��־IsOpened == true)
	{
		ϵͳ��־Wnd->BringToFront(); //�������������ǰ��
		ϵͳ��־Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ϵͳ��־Wnd = gcnew ϵͳ��־;
	ϵͳ��־Wnd->MdiParent = this;
	ϵͳ��־Wnd->WindowState = FormWindowState::Maximized;
	ϵͳ��־Wnd->Show();
}
private: System::Void ��ҳToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (��ҳIsOpened == true)
	{
		��ҳWnd->BringToFront(); //�������������ǰ��
		��ҳWnd->WindowState = FormWindowState::Maximized;
		return;
	}
	��ҳWnd = gcnew ��ҳ;
	��ҳWnd->MdiParent = this;
	��ҳWnd->WindowState = FormWindowState::Maximized;
	//showActiveMdiChild();
	��ҳWnd->Show();
}


private: System::Void ����ԭ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	����ԭ�� ^ f = gcnew ����ԭ��();
	f->Show();
	this->Visible = false;
}

private: System::Void ʾ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("ʾ����");

	if (f == nullptr) {
		ʾ����^ f = gcnew ʾ����;
		f->MdiParent = this;
		f->Name = "ʾ����";
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

private: System::Void һ�׵�·����Ӧ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	һ�׵�·����Ӧ���� ^ f = gcnew һ�׵�·����Ӧ����();
	f->Show();
	this->Visible = false;
}
};
}
