#pragma once
#include "tool.h"
#include "һ�׵�·����Ӧ����ʵ��Ŀ��.h"
#include "һ�׵�·����Ӧ����ʵ������.h"
#include "һ�׵�·����Ӧ����ʵ������.h"
#include "һ�׵�·����Ӧ����ʵ��ԭ��.h"
#include "һ�׵�·����Ӧ����ʵ�鲽��.h"
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// һ�׵�·����Ӧ���� ժҪ
	/// </summary>
	public ref class һ�׵�·����Ӧ���� : public System::Windows::Forms::Form
	{
	public:
		һ�׵�·����Ӧ����(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~һ�׵�·����Ӧ����()
		{
			g_c.Start();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ��Ŀ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����չʾToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ʵ�鲽��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ͨѶЭ��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(һ�׵�·����Ӧ����::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ʵ��Ŀ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->ʵ������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����չʾToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ʵ�鲽��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ͨѶЭ��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"΢���ź�", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ʵ��Ŀ��ToolStripMenuItem,
					this->ʵ������ToolStripMenuItem, this->����չʾToolStripMenuItem, this->ʵ�鲽��ToolStripMenuItem, this->ͨѶЭ��ToolStripMenuItem, this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(972, 35);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ʵ��Ŀ��ToolStripMenuItem
			// 
			this->ʵ��Ŀ��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripSeparator1 });
			this->ʵ��Ŀ��ToolStripMenuItem->Name = L"ʵ��Ŀ��ToolStripMenuItem";
			this->ʵ��Ŀ��ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->ʵ��Ŀ��ToolStripMenuItem->Text = L"ʵ��Ŀ��";
			this->ʵ��Ŀ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����::ʵ��Ŀ��ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(63, 6);
			// 
			// ʵ������ToolStripMenuItem
			// 
			this->ʵ������ToolStripMenuItem->Name = L"ʵ������ToolStripMenuItem";
			this->ʵ������ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->ʵ������ToolStripMenuItem->Text = L"ʵ������";
			this->ʵ������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����::ʵ������ToolStripMenuItem_Click);
			// 
			// ����չʾToolStripMenuItem
			// 
			this->����չʾToolStripMenuItem->Name = L"����չʾToolStripMenuItem";
			this->����չʾToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->����չʾToolStripMenuItem->Text = L"ʵ��ԭ��";
			this->����չʾToolStripMenuItem->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����::����չʾToolStripMenuItem_Click);
			// 
			// ʵ�鲽��ToolStripMenuItem
			// 
			this->ʵ�鲽��ToolStripMenuItem->Name = L"ʵ�鲽��ToolStripMenuItem";
			this->ʵ�鲽��ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->ʵ�鲽��ToolStripMenuItem->Text = L"ʵ�鲽��";
			this->ʵ�鲽��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����::ʵ�鲽��ToolStripMenuItem_Click);
			// 
			// ͨѶЭ��ToolStripMenuItem
			// 
			this->ͨѶЭ��ToolStripMenuItem->Name = L"ͨѶЭ��ToolStripMenuItem";
			this->ͨѶЭ��ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->ͨѶЭ��ToolStripMenuItem->Text = L"ʵ������";
			this->ͨѶЭ��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����::ͨѶЭ��ToolStripMenuItem_Click);
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(64, 31);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����::����ToolStripMenuItem_Click);
			// 
			// һ�׵�·����Ӧ����
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 571);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"һ�׵�·����Ӧ����";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"һ�׵�·����Ӧ����";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����::һ�׵�·����Ӧ����_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ʵ��Ŀ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		openʵ��Ŀ��();
	}
			 void openʵ��Ŀ��() {
				 Form ^f = GetWindowsChild("һ�׵�·����Ӧ����ʵ��Ŀ��",this);

				 if (f == nullptr) {
					 CloseAllMidchild(this);
					 һ�׵�·����Ӧ����ʵ��Ŀ��^ f = gcnew һ�׵�·����Ӧ����ʵ��Ŀ��;
					 f->MdiParent = this;
					 f->Name = "һ�׵�·����Ӧ����ʵ��Ŀ��";
					 f->WindowState = FormWindowState::Maximized;
					 f->Show();
				 }
				 else {
					 f->BringToFront();
				 }
			 }
private: System::Void һ�׵�·����Ӧ����_Load(System::Object^  sender, System::EventArgs^  e) {
	openʵ��Ŀ��();
}
private: System::Void ʵ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("һ�׵�·����Ӧ����ʵ������", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		һ�׵�·����Ӧ����ʵ������^ f = gcnew һ�׵�·����Ӧ����ʵ������;
		f->MdiParent = this;
		f->Name = "һ�׵�·����Ӧ����ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void ����չʾToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("һ�׵�·����Ӧ����ʵ��ԭ��", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		һ�׵�·����Ӧ����ʵ��ԭ��^ f = gcnew һ�׵�·����Ӧ����ʵ��ԭ��;
		f->MdiParent = this;
		f->Name = "һ�׵�·����Ӧ����ʵ��ԭ��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void ʵ�鲽��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("һ�׵�·����Ӧ����ʵ�鲽��", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		һ�׵�·����Ӧ����ʵ�鲽��^ f = gcnew һ�׵�·����Ӧ����ʵ�鲽��;
		f->MdiParent = this;
		f->Name = "һ�׵�·����Ӧ����ʵ�鲽��";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void ͨѶЭ��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("һ�׵�·����Ӧ����ʵ������", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		һ�׵�·����Ӧ����ʵ������^ f = gcnew һ�׵�·����Ӧ����ʵ������;
		f->MdiParent = this;
		f->Name = "һ�׵�·����Ӧ����ʵ������";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void ����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
