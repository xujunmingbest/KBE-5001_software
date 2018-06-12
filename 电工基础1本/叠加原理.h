#pragma once
#include "叠加原理实验目的.h"
#include "叠加原理实验器件.h"
#include "叠加原理实验内容.h"
#include "叠加原理实验原理.h"
#include "叠加原理实验步骤.h"
#include "tool.h"
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 叠加原理 摘要
	/// </summary>
	public ref class 叠加原理 : public System::Windows::Forms::Form
	{
	public:
		叠加原理(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~叠加原理()
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
	private: System::Windows::Forms::ToolStripMenuItem^  实验器件ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  动画展示ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  实验步骤ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  通讯协议ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  返回ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(叠加原理::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->实验目的ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验器件ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->动画展示ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验步骤ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->通讯协议ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->返回ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
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
			this->menuStrip1->Size = System::Drawing::Size(1042, 35);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 实验目的ToolStripMenuItem
			// 
			this->实验目的ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripSeparator1 });
			this->实验目的ToolStripMenuItem->Name = L"实验目的ToolStripMenuItem";
			this->实验目的ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->实验目的ToolStripMenuItem->Text = L"实验目的";
			this->实验目的ToolStripMenuItem->Click += gcnew System::EventHandler(this, &叠加原理::实验目的ToolStripMenuItem_Click);
			// 
			// 实验器件ToolStripMenuItem
			// 
			this->实验器件ToolStripMenuItem->Name = L"实验器件ToolStripMenuItem";
			this->实验器件ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->实验器件ToolStripMenuItem->Text = L"实验器件";
			this->实验器件ToolStripMenuItem->Click += gcnew System::EventHandler(this, &叠加原理::实验器件ToolStripMenuItem_Click);
			// 
			// 动画展示ToolStripMenuItem
			// 
			this->动画展示ToolStripMenuItem->Name = L"动画展示ToolStripMenuItem";
			this->动画展示ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->动画展示ToolStripMenuItem->Text = L"实验原理";
			this->动画展示ToolStripMenuItem->Click += gcnew System::EventHandler(this, &叠加原理::动画展示ToolStripMenuItem_Click);
			// 
			// 实验步骤ToolStripMenuItem
			// 
			this->实验步骤ToolStripMenuItem->Name = L"实验步骤ToolStripMenuItem";
			this->实验步骤ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->实验步骤ToolStripMenuItem->Text = L"实验步骤";
			this->实验步骤ToolStripMenuItem->Click += gcnew System::EventHandler(this, &叠加原理::实验步骤ToolStripMenuItem_Click);
			// 
			// 通讯协议ToolStripMenuItem
			// 
			this->通讯协议ToolStripMenuItem->Name = L"通讯协议ToolStripMenuItem";
			this->通讯协议ToolStripMenuItem->Size = System::Drawing::Size(104, 31);
			this->通讯协议ToolStripMenuItem->Text = L"实验内容";
			this->通讯协议ToolStripMenuItem->Click += gcnew System::EventHandler(this, &叠加原理::通讯协议ToolStripMenuItem_Click);
			// 
			// 返回ToolStripMenuItem
			// 
			this->返回ToolStripMenuItem->Name = L"返回ToolStripMenuItem";
			this->返回ToolStripMenuItem->Size = System::Drawing::Size(64, 31);
			this->返回ToolStripMenuItem->Text = L"返回";
			this->返回ToolStripMenuItem->Click += gcnew System::EventHandler(this, &叠加原理::返回ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(178, 6);
			// 
			// 叠加原理
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1042, 574);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->Name = L"叠加原理";
			this->Text = L"叠加原理";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &叠加原理::叠加原理_Load);
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
				 Form ^f = GetWindowsChild("叠加原理实验目的");

				 if (f == nullptr) {
					 CloseAllMidchild();
					 叠加原理实验目的^ f = gcnew 叠加原理实验目的;
					 f->MdiParent = this;
					 f->Name = "叠加原理实验目的";
					 f->WindowState = FormWindowState::Maximized;
					 f->Show();
				 }
				 else {
					 f->BringToFront();
				 }
			 }
			 void CloseAllMidchild() {
				 for each(Form^ f in MdiChildren)
				 {
					 f->Close();
				 }
			 }

			 /**
			 功能:根据窗体名字获取窗体是不是已经打开

			 */
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

private: System::Void 叠加原理_Load(System::Object^  sender, System::EventArgs^  e) {
	open实验目的();
}
private: System::Void 实验器件ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("叠加原理实验器件");

	if (f == nullptr) {
		CloseAllMidchild();
		叠加原理实验器件^ f = gcnew 叠加原理实验器件;
		f->MdiParent = this;
		f->Name = "叠加原理实验器件";
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
private: System::Void 实验步骤ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("叠加原理实验步骤");

	if (f == nullptr) {
		CloseAllMidchild();
		叠加原理实验步骤^ f = gcnew 叠加原理实验步骤;
		f->MdiParent = this;
		f->Name = "叠加原理实验步骤";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void 动画展示ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("叠加原理实验原理");

	if (f == nullptr) {
		CloseAllMidchild();
		叠加原理实验原理^ f = gcnew 叠加原理实验原理;
		f->MdiParent = this;
		f->Name = "叠加原理实验原理";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
private: System::Void 通讯协议ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Form ^f = GetWindowsChild("叠加原理实验内容");

	if (f == nullptr) {
		CloseAllMidchild();
		叠加原理实验内容^ f = gcnew 叠加原理实验内容;
		f->MdiParent = this;
		f->Name = "叠加原理实验内容";
		f->WindowState = FormWindowState::Maximized;
		f->Show();
	}
	else {
		f->BringToFront();
	}
}
};
} 
