#pragma once
 
#include "����������ʵ��Ŀ��.h"
#include "����������ʵ��ԭ��.h"
#include "����������ʵ������.h"
#include "����������ʵ�鲽��.h"
#include "����������ʵ������.h"
#include "����������ԭ����.h"

extern bool ����������IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ���������� ժҪ
	/// </summary>
	public ref class ���������� : public System::Windows::Forms::Form
	{
	public:
		����������(void)
		{
			InitializeComponent();
			����������IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));



			//
			//TODO:  �ڴ˴���ӹ��캯������
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~����������()
		{
			����������IsOpened = false;
			g_c.Start();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��Ŀ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ԭ��ԭ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鲽��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͨѶЭ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����չʾToolStripMenuItem;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(����������::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ʵ��Ŀ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ԭ��ԭ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鲽��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͨѶЭ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����չʾToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->ʵ��Ŀ��ToolStripMenuItem,
					this->ԭ��ԭ��ToolStripMenuItem, this->ʵ������ToolStripMenuItem, this->ʵ�鲽��ToolStripMenuItem, this->ͨѶЭ��ToolStripMenuItem, this->����ToolStripMenuItem,
					this->����չʾToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(121, 561);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &����������::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// ԭ��ԭ��ToolStripMenuItem
			// 
			this->ԭ��ԭ��ToolStripMenuItem->Name = L"ԭ��ԭ��ToolStripMenuItem";
			this->ԭ��ԭ��ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->ԭ��ԭ��ToolStripMenuItem->Text = L"ʵ��ԭ��";
			this->ԭ��ԭ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &����������::ԭ��ԭ��ToolStripMenuItem_Click);
			// 
			// ʵ������ToolStripMenuItem
			// 
			this->ʵ������ToolStripMenuItem->Name = L"ʵ������ToolStripMenuItem";
			this->ʵ������ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->ʵ������ToolStripMenuItem->Text = L"ʵ������";
			this->ʵ������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &����������::ʵ������ToolStripMenuItem_Click);
			// 
			// ʵ�鲽��ToolStripMenuItem
			// 
			this->ʵ�鲽��ToolStripMenuItem->Name = L"ʵ�鲽��ToolStripMenuItem";
			this->ʵ�鲽��ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->ʵ�鲽��ToolStripMenuItem->Text = L"ʵ�鲽��";
			this->ʵ�鲽��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &����������::ʵ�鲽��ToolStripMenuItem_Click);
			// 
			// ͨѶЭ��ToolStripMenuItem
			// 
			this->ͨѶЭ��ToolStripMenuItem->Name = L"ͨѶЭ��ToolStripMenuItem";
			this->ͨѶЭ��ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->ͨѶЭ��ToolStripMenuItem->Text = L"ʵ������";
			this->ͨѶЭ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &����������::ͨѶЭ��ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &����������::����ToolStripMenuItem_Click);
			// 
			// ����չʾToolStripMenuItem
			// 
			this->����չʾToolStripMenuItem->Name = L"����չʾToolStripMenuItem";
			this->����չʾToolStripMenuItem->Size = System::Drawing::Size(108, 31);
			this->����չʾToolStripMenuItem->Text = L"����չʾ";
			this->����չʾToolStripMenuItem->Click += gcnew System::EventHandler(this, &����������::����չʾToolStripMenuItem_Click);
			// 
			// ����������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(899, 561);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"����������";
			this->Text = L"����������";
			this->Load += gcnew System::EventHandler(this, &����������::����������_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		����������ʵ��Ŀ��^ ����������ʵ��Ŀ��Wnd;
		����������ʵ��ԭ��^ ����������ʵ��ԭ��Wnd;
		����������ʵ������^ ����������ʵ������Wnd;
		����������ʵ�鲽��^ ����������ʵ�鲽��Wnd;
		����������ʵ������^ ����������ʵ������Wnd;
		����������ԭ����^ ����������ԭ����Wnd;
	private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (����������ʵ��Ŀ��IsOpened == true)
		{
			����������ʵ��Ŀ��Wnd->BringToFront(); //�������������ǰ��
			����������ʵ��Ŀ��Wnd->WindowState = FormWindowState::Maximized;
			return;
		}
		����������ʵ��Ŀ��Wnd = gcnew ����������ʵ��Ŀ��;
		����������ʵ��Ŀ��Wnd->MdiParent = this;
		����������ʵ��Ŀ��Wnd->Show();
		����������ʵ��Ŀ��Wnd->WindowState = FormWindowState::Maximized;
	
	}
private: System::Void ����������_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ԭ��ԭ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (����������ʵ��ԭ��IsOpened == true)
	{
		����������ʵ��ԭ��Wnd->BringToFront(); //�������������ǰ��
		����������ʵ��ԭ��Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����������ʵ��ԭ��Wnd = gcnew ����������ʵ��ԭ��;
	����������ʵ��ԭ��Wnd->MdiParent = this;
	����������ʵ��ԭ��Wnd->Show();
	����������ʵ��ԭ��Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (����������ʵ������IsOpened == true)
	{
		����������ʵ������Wnd->BringToFront(); //�������������ǰ��
		����������ʵ������Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����������ʵ������Wnd = gcnew ����������ʵ������;
	����������ʵ������Wnd->MdiParent = this;
	����������ʵ������Wnd->Show();
	����������ʵ������Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ʵ�鲽��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	if (����������ʵ�鲽��IsOpened == true)
	{
		����������ʵ�鲽��Wnd->BringToFront(); //�������������ǰ��
		����������ʵ�鲽��Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����������ʵ�鲽��Wnd = gcnew ����������ʵ�鲽��;
	����������ʵ�鲽��Wnd->MdiParent = this;
	����������ʵ�鲽��Wnd->Show();
	����������ʵ�鲽��Wnd->WindowState = FormWindowState::Maximized;

}
private: System::Void ͨѶЭ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (����������ʵ������IsOpened == true)
	{
		����������ʵ������Wnd->BringToFront(); //�������������ǰ��
		����������ʵ������Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����������ʵ������Wnd = gcnew ����������ʵ������;
	����������ʵ������Wnd->MdiParent = this;
	����������ʵ������Wnd->Show();
	����������ʵ������Wnd->WindowState = FormWindowState::Maximized;
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void ����չʾToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (����������ԭ����IsOpened == true)
	{
		����������ԭ����Wnd->BringToFront(); //�������������ǰ��
		����������ԭ����Wnd->WindowState = FormWindowState::Maximized;
		return;
	}
	����������ԭ����Wnd = gcnew ����������ԭ����;
	����������ԭ����Wnd->MdiParent = this;
	����������ԭ����Wnd->Show();
	����������ԭ����Wnd->WindowState = FormWindowState::Maximized;
}
};
}
