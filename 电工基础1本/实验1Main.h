#pragma once
#include "tool.h"
#include "ʵ��1ʵ��Ŀ��.h"
#include "ʵ��1ԭ��˵��.h"
#include "ʵ��1ԭ��˵����Ƶ.h"
#include "ʵ��1ʵ���豸.h"
#include "ʵ��1ʵ������1.h"
#include "ʵ��1ʵ�鱨��.h"
#include "ʵ��1˼����.h"
#include "ʵ��1ʵ��ע������.h"


extern bool ʵ��1MainIsOpened ;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1Main ժҪ
	/// </summary>
	public ref class ʵ��1Main : public System::Windows::Forms::Form
	{
	public:
		ʵ��1Main(void)
		{
			InitializeComponent();
			ʵ��1MainIsOpened = true;
			//this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1Main()
		{
			ʵ��1MainIsOpened = false;

			//������ʾ�Ӵ���
			g_c.Start();
			// �ر�����mdi�Ӵ���
			for (int i = 0; i < this->MdiChildren->Length; i++)
			{
				this->MdiChildren[i]->Close();
			}
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ԭ��˵��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��Ƶ˵��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����˵��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ���豸ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��ע������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ˼����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鱨��ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ʵ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ԭ��˵��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��Ƶ˵��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����˵��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ���豸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ��ע������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->˼����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鱨��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->ʵ��ToolStripMenuItem,
					this->ԭ��˵��ToolStripMenuItem, this->ʵ���豸ToolStripMenuItem, this->ʵ������ToolStripMenuItem, this->ʵ��ע������ToolStripMenuItem, this->˼����ToolStripMenuItem,
					this->ʵ�鱨��ToolStripMenuItem, this->����ToolStripMenuItem, this->�˳�ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(117, 432);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &ʵ��1Main::menuStrip1_ItemClicked);
			// 
			// ʵ��ToolStripMenuItem
			// 
			this->ʵ��ToolStripMenuItem->Name = L"ʵ��ToolStripMenuItem";
			this->ʵ��ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ʵ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::ʵ��ToolStripMenuItem_Click);
			// 
			// ԭ��˵��ToolStripMenuItem
			// 
			this->ԭ��˵��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��Ƶ˵��ToolStripMenuItem,
					this->����˵��ToolStripMenuItem
			});
			this->ԭ��˵��ToolStripMenuItem->Name = L"ԭ��˵��ToolStripMenuItem";
			this->ԭ��˵��ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ԭ��˵��ToolStripMenuItem->Text = L"ԭ��˵��";
			// 
			// ��Ƶ˵��ToolStripMenuItem
			// 
			this->��Ƶ˵��ToolStripMenuItem->Name = L"��Ƶ˵��ToolStripMenuItem";
			this->��Ƶ˵��ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->��Ƶ˵��ToolStripMenuItem->Text = L"��Ƶ˵��";
			this->��Ƶ˵��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::��Ƶ˵��ToolStripMenuItem_Click);
			// 
			// ����˵��ToolStripMenuItem
			// 
			this->����˵��ToolStripMenuItem->Name = L"����˵��ToolStripMenuItem";
			this->����˵��ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->����˵��ToolStripMenuItem->Text = L"����˵��";
			this->����˵��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::����˵��ToolStripMenuItem_Click);
			// 
			// ʵ���豸ToolStripMenuItem
			// 
			this->ʵ���豸ToolStripMenuItem->Name = L"ʵ���豸ToolStripMenuItem";
			this->ʵ���豸ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ʵ���豸ToolStripMenuItem->Text = L"ʵ���豸";
			this->ʵ���豸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::ʵ���豸ToolStripMenuItem_Click);
			// 
			// ʵ������ToolStripMenuItem
			// 
			this->ʵ������ToolStripMenuItem->Name = L"ʵ������ToolStripMenuItem";
			this->ʵ������ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ʵ������ToolStripMenuItem->Text = L"ʵ������";
			this->ʵ������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::ʵ������ToolStripMenuItem_Click);
			// 
			// ʵ��ע������ToolStripMenuItem
			// 
			this->ʵ��ע������ToolStripMenuItem->Name = L"ʵ��ע������ToolStripMenuItem";
			this->ʵ��ע������ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ʵ��ע������ToolStripMenuItem->Text = L"ʵ��ע������";
			this->ʵ��ע������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::ʵ��ע������ToolStripMenuItem_Click);
			// 
			// ˼����ToolStripMenuItem
			// 
			this->˼����ToolStripMenuItem->Name = L"˼����ToolStripMenuItem";
			this->˼����ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->˼����ToolStripMenuItem->Text = L"˼����";
			this->˼����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::˼����ToolStripMenuItem_Click);
			// 
			// ʵ�鱨��ToolStripMenuItem
			// 
			this->ʵ�鱨��ToolStripMenuItem->Name = L"ʵ�鱨��ToolStripMenuItem";
			this->ʵ�鱨��ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->ʵ�鱨��ToolStripMenuItem->Text = L"ʵ�鱨��";
			this->ʵ�鱨��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::ʵ�鱨��ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &ʵ��1Main::����ToolStripMenuItem_Click);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(104, 24);
			this->�˳�ToolStripMenuItem->Text = L"�˳�";
			// 
			// ʵ��1Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(834, 432);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"ʵ��1Main";
			this->Text = L"ʵ��1Ԫ���������Բ���";
			this->Load += gcnew System::EventHandler(this, &ʵ��1Main::ʵ��1Main_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (ʵ��1ʵ��Ŀ��IsOpened == true)
		{
			ʵ��1ʵ��Ŀ��Wnd->BringToFront(); //�������������ǰ��
			ʵ��1ʵ��Ŀ��Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		ʵ��1ʵ��Ŀ��Wnd = gcnew ʵ��1ʵ��Ŀ��;
		ʵ��1ʵ��Ŀ��Wnd->MdiParent = this;
		ʵ��1ʵ��Ŀ��Wnd->Show();
		ʵ��1ʵ��Ŀ��Wnd->WindowState = FormWindowState::Maximized;

	}

/*
			 
			 
*/

			 ʵ��1ʵ��Ŀ�� ^ʵ��1ʵ��Ŀ��Wnd;
			 ʵ��1ԭ��˵�� ^ʵ��1ԭ��˵��Wnd;
			 ʵ��1ԭ��˵����Ƶ ^ʵ��1ԭ��˵����ƵWnd;
			 ʵ��1ʵ���豸 ^ʵ��1ʵ���豸Wnd;
			 ʵ��1ʵ������1 ^ʵ��1ʵ������1Wnd;
			 ʵ��1ʵ�鱨��^ ʵ��1ʵ�鱨��Wnd;
			 ʵ��1ʵ��ע������^ ʵ��1ʵ��ע������Wnd;
			 ʵ��1˼����^ ʵ��1˼����Wnd;
private: System::Void ʵ��1Main_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ����˵��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ԭ��˵��IsOpened == true)
	{
		ʵ��1ԭ��˵��Wnd->BringToFront(); //�������������ǰ��
		ʵ��1ԭ��˵��Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ԭ��˵��Wnd = gcnew ʵ��1ԭ��˵��;
	ʵ��1ԭ��˵��Wnd->MdiParent = this;
	ʵ��1ԭ��˵��Wnd->Show();
	ʵ��1ԭ��˵��Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ��Ƶ˵��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ԭ��˵����ƵIsOpened == true)
	{
		ʵ��1ԭ��˵����ƵWnd->BringToFront(); //�������������ǰ��
		ʵ��1ԭ��˵����ƵWnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ԭ��˵����ƵWnd = gcnew ʵ��1ԭ��˵����Ƶ;
	//ʵ��1ԭ��˵����ƵWnd->MdiParent = this;
	ʵ��1ԭ��˵����ƵWnd->Show();
	
}
private: System::Void ʵ���豸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ʵ���豸IsOpened == true)
	{
		ʵ��1ʵ���豸Wnd->BringToFront(); //�������������ǰ��
		ʵ��1ʵ���豸Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ʵ���豸Wnd = gcnew ʵ��1ʵ���豸;
	ʵ��1ʵ���豸Wnd->MdiParent = this;
	ʵ��1ʵ���豸Wnd->Show();
	ʵ��1ʵ���豸Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ������1ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ʵ������1IsOpened == true)
	{
		ʵ��1ʵ������1Wnd->BringToFront(); //�������������ǰ��
		ʵ��1ʵ������1Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ʵ������1Wnd = gcnew ʵ��1ʵ������1;
	ʵ��1ʵ������1Wnd->MdiParent = this;
	ʵ��1ʵ������1Wnd->Show();
	ʵ��1ʵ������1Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	this->Close();
}
private: System::Void ʵ�鱨��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		if ( ʵ��1ʵ�鱨��IsOpened == true)
		{
			 ʵ��1ʵ�鱨��Wnd->BringToFront(); //�������������ǰ��
			 ʵ��1ʵ�鱨��Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
	 ʵ��1ʵ�鱨��Wnd = gcnew  ʵ��1ʵ�鱨��;
	 ʵ��1ʵ�鱨��Wnd->MdiParent = this;
	 ʵ��1ʵ�鱨��Wnd->Show();
	 ʵ��1ʵ�鱨��Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}


private: System::Void ʵ��ע������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ʵ��ע������IsOpened == true)
	{
		ʵ��1ʵ��ע������Wnd->BringToFront(); //�������������ǰ��
		ʵ��1ʵ��ע������Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ʵ��ע������Wnd = gcnew  ʵ��1ʵ��ע������;
	ʵ��1ʵ��ע������Wnd->MdiParent = this;
	ʵ��1ʵ��ע������Wnd->Show();
	ʵ��1ʵ��ע������Wnd->WindowState = FormWindowState::Maximized;


}
private: System::Void ˼����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1˼����IsOpened == true)
	{
		ʵ��1˼����Wnd->BringToFront(); //�������������ǰ��
		ʵ��1˼����Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1˼����Wnd = gcnew  ʵ��1˼����;
	ʵ��1˼����Wnd->MdiParent = this;
	ʵ��1˼����Wnd->Show();
	ʵ��1˼����Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ʵ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (ʵ��1ʵ������1IsOpened == true)
	{
		ʵ��1ʵ������1Wnd->BringToFront(); //�������������ǰ��
		ʵ��1ʵ������1Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	ʵ��1ʵ������1Wnd = gcnew ʵ��1ʵ������1;
	ʵ��1ʵ������1Wnd->MdiParent = this;
	ʵ��1ʵ������1Wnd->Show();
	ʵ��1ʵ������1Wnd->WindowState = FormWindowState::Maximized;
}
};
}
