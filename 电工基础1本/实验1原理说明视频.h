#pragma once
extern bool 实验1原理说明视频IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// 实验1原理说明视频 摘要
	/// </summary>
	public ref class 实验1原理说明视频 : public System::Windows::Forms::Form
	{
	public:
		实验1原理说明视频(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			//axWindowsMediaPlayer1->URL = "E:\\clr\\电工基础1本\\资源\\二极管伏安特性曲线测试实验.mp4";
			实验1原理说明视频IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			t = gcnew Thread(gcnew ThreadStart(this,&实验1原理说明视频::test));
			t->IsBackground = true;
			t->Start();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		Thread ^ t;
		void test() {
			while (1) {
				try {
					int a = axWindowsMediaPlayer1->Ctlcontrols->currentPosition;
					switch (a) {
					case 1:Console::Write(a.ToString() + "显示"); break;
					case 2:Console::Write(a.ToString() + "显示"); break;
					case 3:Console::Write(a.ToString() + "显示"); break;
					case 4:Console::Write(a.ToString() + "显示"); break;
					case 5:Console::Write(a.ToString() + "显示"); break;
					case 6:Console::Write(a.ToString() + "显示"); break;
					}

					cout << axWindowsMediaPlayer1->Ctlcontrols->currentPosition << endl;
				}
				catch (System::Exception ^e) {
					Console::Write(e->ToString()) ;
				}
				Sleep(1000);
			}
		
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1原理说明视频()
		{
			实验1原理说明视频IsOpened = false;
			t->Abort();
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1原理说明视频::typeid));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(13, 13);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(473, 429);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &实验1原理说明视频::axWindowsMediaPlayer1_Enter);
			// 
			// 实验1原理说明视频
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 454);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Name = L"实验1原理说明视频";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"实验1原理说明视频";
			this->Load += gcnew System::EventHandler(this, &实验1原理说明视频::实验1原理说明视频_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1原理说明视频_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void axWindowsMediaPlayer1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
