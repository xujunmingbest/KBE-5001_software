#pragma once

extern bool 系统日志IsOpened ;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 系统日志 摘要
	/// </summary>
	public ref class 系统日志 : public System::Windows::Forms::Form
	{
	public:
		系统日志(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			系统日志IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			//
			//TODO:  在此处添加构造函数代码
			//
			t = gcnew Thread(gcnew ThreadStart(this, &系统日志::LogRecv));
			t->Start();
		}
	private: _LogBox::LogBox^  logBox1;
	public:
		Thread ^ t;
		void LogRecv() {
			Thread::Sleep(500);
			while (1) {
				string o = SysLogQue.Consume();

				String^ temp = gcnew String(o.c_str() + 1);
				switch (o.c_str()[0]) {
				case _SYS_ERROR: logBox1->LogErr(temp); break;
				case _SYS_INFO: logBox1->LogInfo(temp); break;
				case _SYS_WARN: logBox1->LogWarn(temp); break;
				}
			}
		}


	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~系统日志()
		{
			系统日志IsOpened = false;
			t->Abort();
			if (components)
			{
				delete components;
			}
		}

	protected:

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
			this->logBox1 = (gcnew _LogBox::LogBox());
			this->SuspendLayout();
			// 
			// logBox1
			// 
			this->logBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->logBox1->Location = System::Drawing::Point(0, 0);
			this->logBox1->Name = L"logBox1";
			this->logBox1->Size = System::Drawing::Size(1042, 624);
			this->logBox1->TabIndex = 1;
			this->logBox1->Load += gcnew System::EventHandler(this, &系统日志::logBox1_Load);
			// 
			// 系统日志
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1042, 624);
			this->ControlBox = false;
			this->Controls->Add(this->logBox1);
			this->Name = L"系统日志";
			this->Text = L"系统日志";
			this->Load += gcnew System::EventHandler(this, &系统日志::系统日志_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 系统日志_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void logBox1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
