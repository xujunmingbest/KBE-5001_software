#pragma once
#include "tool.h"
#include "一阶电路的响应测试实验目的.h"
#include "一阶电路的响应测试实验器件.h"
#include "一阶电路的响应测试实验内容.h"
#include "一阶电路的响应测试实验原理.h"
#include "一阶电路的响应测试实验步骤.h"
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 一阶电路的响应测试 摘要
	/// </summary>
	public ref class 一阶电路的响应测试 : public System::Windows::Forms::Form
	{
	public:
		一阶电路的响应测试(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~一阶电路的响应测试()
		{
			g_c.Start();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  实验目的ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  实验器件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  动画展示ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验步骤ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  通讯协议ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  返回ToolStripMenuItem;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(一阶电路的响应测试::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->实验目的ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->实验器件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->动画展示ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验步骤ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->通讯协议ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->返回ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->menuStrip1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuStrip1.BackgroundImage")));
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->实验目的ToolStripMenuItem,
					this->实验器件ToolStripMenuItem, this->动画展示ToolStripMenuItem, this->实验步骤ToolStripMenuItem, this->通讯协议ToolStripMenuItem, this->返回ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(972, 35);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验目的ToolStripMenuItem
			// 
			this->实验目的ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripSeparator1 });
			this->实验目的ToolStripMenuItem->Name = L"实验目的ToolStripMenuItem";
			this->实验目的ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->实验目的ToolStripMenuItem->Text = L"实验目的";
			this->实验目的ToolStripMenuItem->Click += gcnew System::EventHandler(this, &一阶电路的响应测试::实验目的ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(63, 6);
			// 
			// 实验器件ToolStripMenuItem
			// 
			this->实验器件ToolStripMenuItem->Name = L"实验器件ToolStripMenuItem";
			this->实验器件ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->实验器件ToolStripMenuItem->Text = L"实验器件";
			this->实验器件ToolStripMenuItem->Click += gcnew System::EventHandler(this, &一阶电路的响应测试::实验器件ToolStripMenuItem_Click);
			// 
			// 动画展示ToolStripMenuItem
			// 
			this->动画展示ToolStripMenuItem->Name = L"动画展示ToolStripMenuItem";
			this->动画展示ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->动画展示ToolStripMenuItem->Text = L"实验原理";
			this->动画展示ToolStripMenuItem->Click += gcnew System::EventHandler(this, &一阶电路的响应测试::动画展示ToolStripMenuItem_Click);
			// 
			// 实验步骤ToolStripMenuItem
			// 
			this->实验步骤ToolStripMenuItem->Name = L"实验步骤ToolStripMenuItem";
			this->实验步骤ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->实验步骤ToolStripMenuItem->Text = L"实验步骤";
			this->实验步骤ToolStripMenuItem->Click += gcnew System::EventHandler(this, &一阶电路的响应测试::实验步骤ToolStripMenuItem_Click);
			// 
			// 通讯协议ToolStripMenuItem
			// 
			this->通讯协议ToolStripMenuItem->Name = L"通讯协议ToolStripMenuItem";
			this->通讯协议ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->通讯协议ToolStripMenuItem->Text = L"实验内容";
			this->通讯协议ToolStripMenuItem->Click += gcnew System::EventHandler(this, &一阶电路的响应测试::通讯协议ToolStripMenuItem_Click);
			// 
			// 返回ToolStripMenuItem
			// 
			this->返回ToolStripMenuItem->Name = L"返回ToolStripMenuItem";
			this->返回ToolStripMenuItem->Size = System::Drawing::Size(64, 31);
			this->返回ToolStripMenuItem->Text = L"返回";
			this->返回ToolStripMenuItem->Click += gcnew System::EventHandler(this, &一阶电路的响应测试::返回ToolStripMenuItem_Click);
			// 
			// 一阶电路的响应测试
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 571);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"一阶电路的响应测试";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"一阶电路的响应测试";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &一阶电路的响应测试::一阶电路的响应测试_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 实验目的ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		open实验目的();
	}
			 void open实验目的() {
				 Form ^f = GetWindowsChild("一阶电路的响应测试实验目的",this);

				 if (f == nullptr) {
					 CloseAllMidchild(this);
					 一阶电路的响应测试实验目的^ f = gcnew 一阶电路的响应测试实验目的;
					 f->MdiParent = this;
					 f->Name = "一阶电路的响应测试实验目的";
					 f->WindowState = FormWindowState::Maximized;
					 f->Show();
				 }
				 else {
					 f->BringToFront();
				 }
			 }
private: System::Void 一阶电路的响应测试_Load(System::Object^  sender, System::EventArgs^  e) {
	open实验目的();
}
private: System::Void 实验器件ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("一阶电路的响应测试实验器件", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		一阶电路的响应测试实验器件^ f = gcnew 一阶电路的响应测试实验器件;
		f->MdiParent = this;
		f->Name = "一阶电路的响应测试实验器件";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void 动画展示ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("一阶电路的响应测试实验原理", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		一阶电路的响应测试实验原理^ f = gcnew 一阶电路的响应测试实验原理;
		f->MdiParent = this;
		f->Name = "一阶电路的响应测试实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void 实验步骤ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("一阶电路的响应测试实验步骤", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		一阶电路的响应测试实验步骤^ f = gcnew 一阶电路的响应测试实验步骤;
		f->MdiParent = this;
		f->Name = "一阶电路的响应测试实验步骤";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void 通讯协议ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("一阶电路的响应测试实验内容", this);

	if (f == nullptr) {
		CloseAllMidchild(this);
		一阶电路的响应测试实验内容^ f = gcnew 一阶电路的响应测试实验内容;
		f->MdiParent = this;
		f->Name = "一阶电路的响应测试实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void 返回ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
