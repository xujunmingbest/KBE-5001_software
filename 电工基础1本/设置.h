#pragma once
#include "tool.h"
extern bool 设置IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 设置 摘要
	/// </summary>
	public ref class 设置 : public System::Windows::Forms::Form
	{
	public:
		设置(void)
		{
			InitializeComponent();
			设置IsOpened = true;
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
		~设置()
		{
			设置IsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;



	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;


	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
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
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(137, 33);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(573, 56);
			this->trackBar1->TabIndex = 0;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &设置::trackBar1_Scroll);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->trackBar2);
			this->groupBox1->Controls->Add(this->trackBar1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(22, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(783, 187);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"声音设置";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"语速";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"音量";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(137, 113);
			this->trackBar2->Minimum = -10;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(573, 56);
			this->trackBar2->TabIndex = 1;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &设置::trackBar2_Scroll);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(22, 223);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(783, 251);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"串口连接(仅开发维护人员使用)";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &设置::groupBox2_Enter);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(15, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(227, 35);
			this->button5->TabIndex = 12;
			this->button5->Text = L"示波器连接重置";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(378, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 35);
			this->button4->TabIndex = 11;
			this->button4->Text = L"串口重置";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &设置::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(378, 36);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 35);
			this->button3->TabIndex = 10;
			this->button3->Text = L"串口重置";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &设置::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(227, 118);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 31);
			this->comboBox2->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(227, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 31);
			this->comboBox1->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(183, 39);
			this->button2->TabIndex = 6;
			this->button2->Text = L"测量仪模块";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(183, 39);
			this->button1->TabIndex = 5;
			this->button1->Text = L"电源控制模块";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// 设置
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(844, 509);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"设置";
			this->Text = L"设置";
			this->Load += gcnew System::EventHandler(this, &设置::设置_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 设置_Load(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 1; i < 100; i++) {
			comboBox1->Items->Add("COM"+i.ToString());
			comboBox2->Items->Add("COM" + i.ToString());
		}
		comboBox1->SelectedText = gcnew String(configXml.SerialControlSource.c_str());
		comboBox2->SelectedText = gcnew String(configXml.SerialHandle.c_str());
	}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	global::voice->SetVolume(trackBar1->Value);
	global::voice->Speak("钉");
}
private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
	global::voice->SetRate(trackBar2->Value);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	configXml.SerialControlSource = T_to_string(comboBox1->Text);
	global::scs->SerialHandleClose();
	if (!global::scs->SerialHandleInit()) {
		MessageBox::Show("串口重置失败");
	}
	else {
		MessageBox::Show("串口重置成功");
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	configXml.SerialHandle = T_to_string(comboBox2->Text);
	global::sh->SerialHandleClose();
	if (!global::sh->SerialHandleInit()) {
		MessageBox::Show("串口重置失败");
	}
	else {
		MessageBox::Show("串口重置成功");
	}
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
