#pragma once
#include "tool.h"
#include "SynchroShortConnection.h"
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 成绩传输 摘要
	/// </summary>
	public ref class 成绩传输 : public System::Windows::Forms::Form
	{
	public:
		成绩传输(void)
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
		~成绩传输()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;







	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: _LogBox::LogBox^  logBox1;


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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->logBox1 = (gcnew _LogBox::LogBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox1->Controls->Add(this->logBox1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1284, 671);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"同步短连接";
			// 
			// logBox1
			// 
			this->logBox1->Location = System::Drawing::Point(623, 342);
			this->logBox1->Margin = System::Windows::Forms::Padding(4);
			this->logBox1->Name = L"logBox1";
			this->logBox1->Size = System::Drawing::Size(472, 305);
			this->logBox1->TabIndex = 18;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->richTextBox2);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->comboBox5);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->comboBox6);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->comboBox7);
			this->groupBox3->Controls->Add(this->comboBox8);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox3->Location = System::Drawing::Point(12, 341);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(604, 306);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"报文接收";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Location = System::Drawing::Point(329, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(111, 21);
			this->label9->TabIndex = 16;
			this->label9->Text = L"接收的内容";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(291, 61);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(211, 211);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(154, 248);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(121, 28);
			this->textBox4->TabIndex = 15;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(154, 207);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(121, 28);
			this->textBox5->TabIndex = 14;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"XML", L"PIC", L"JSON" });
			this->comboBox5->Location = System::Drawing::Point(154, 130);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(121, 26);
			this->comboBox5->TabIndex = 13;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->Location = System::Drawing::Point(16, 133);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(110, 21);
			this->label10->TabIndex = 12;
			this->label10->Text = L"TrialName";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(154, 171);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(121, 28);
			this->textBox6->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Location = System::Drawing::Point(16, 251);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(99, 21);
			this->label11->TabIndex = 10;
			this->label11->Text = L"FileName";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Location = System::Drawing::Point(16, 210);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 21);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Pupilage";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Location = System::Drawing::Point(16, 171);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(99, 21);
			this->label13->TabIndex = 8;
			this->label13->Text = L"DateTime";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"XML", L"PIC", L"JSON" });
			this->comboBox6->Location = System::Drawing::Point(154, 98);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(121, 26);
			this->comboBox6->TabIndex = 7;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Location = System::Drawing::Point(16, 101);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 21);
			this->label14->TabIndex = 6;
			this->label14->Text = L"TrialCode";
			// 
			// comboBox7
			// 
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"XML", L"PIC", L"JSON" });
			this->comboBox7->Location = System::Drawing::Point(154, 61);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(121, 26);
			this->comboBox7->TabIndex = 5;
			// 
			// comboBox8
			// 
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SAVEFILE", L"RETMSG" });
			this->comboBox8->Location = System::Drawing::Point(154, 30);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(121, 26);
			this->comboBox8->TabIndex = 4;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Location = System::Drawing::Point(16, 64);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(88, 21);
			this->label15->TabIndex = 3;
			this->label15->Text = L"MsgType";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Location = System::Drawing::Point(16, 33);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(132, 21);
			this->label16->TabIndex = 1;
			this->label16->Text = L"RequestType";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->richTextBox1);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox2->Location = System::Drawing::Point(12, 29);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(885, 306);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"报文发送";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &成绩传输::groupBox2_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(522, 234);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 38);
			this->button1->TabIndex = 21;
			this->button1->Text = L"发送";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &成绩传输::button1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(660, 71);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(196, 28);
			this->textBox8->TabIndex = 20;
			this->textBox8->Text = L"10009";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(660, 35);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(196, 28);
			this->textBox9->TabIndex = 19;
			this->textBox9->Text = L"127.0.0.1";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Location = System::Drawing::Point(522, 74);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(51, 21);
			this->label20->TabIndex = 18;
			this->label20->Text = L"端口";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Location = System::Drawing::Point(522, 35);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(73, 21);
			this->label21->TabIndex = 17;
			this->label21->Text = L"IP地址";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Location = System::Drawing::Point(329, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 21);
			this->label8->TabIndex = 16;
			this->label8->Text = L"要传输的内容";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(291, 61);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(211, 211);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(154, 248);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 28);
			this->textBox3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(154, 207);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 28);
			this->textBox2->TabIndex = 14;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"基尔霍夫", L"一阶线性电路相应" });
			this->comboBox4->Location = System::Drawing::Point(154, 130);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 26);
			this->comboBox4->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Location = System::Drawing::Point(16, 133);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(110, 21);
			this->label7->TabIndex = 12;
			this->label7->Text = L"TrialName";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 171);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 28);
			this->textBox1->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Location = System::Drawing::Point(16, 251);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 21);
			this->label6->TabIndex = 10;
			this->label6->Text = L"FileName";
			this->label6->Click += gcnew System::EventHandler(this, &成绩传输::label6_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(16, 210);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 21);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Pupilage";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(16, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 21);
			this->label4->TabIndex = 8;
			this->label4->Text = L"DateTime";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"6" });
			this->comboBox3->Location = System::Drawing::Point(154, 98);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 26);
			this->comboBox3->TabIndex = 7;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &成绩传输::comboBox3_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Location = System::Drawing::Point(16, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 21);
			this->label3->TabIndex = 6;
			this->label3->Text = L"TrialCode";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"XML", L"PIC", L"JSON" });
			this->comboBox2->Location = System::Drawing::Point(154, 61);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 26);
			this->comboBox2->TabIndex = 5;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SAVEFILE", L"RETMSG" });
			this->comboBox1->Location = System::Drawing::Point(154, 30);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Location = System::Drawing::Point(16, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 21);
			this->label2->TabIndex = 3;
			this->label2->Text = L"MsgType";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Location = System::Drawing::Point(16, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"RequestType";
			// 
			// 成绩传输
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 671);
			this->Controls->Add(this->groupBox1);
			this->Name = L"成绩传输";
			this->Text = L"成绩传输";
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	SSCHandle_e se;
	if (se.Start(T_to_string(textBox9->Text), T_to_string(textBox8->Text))) {
		logBox1->LogInfo("连接成功");
	}else {
		logBox1->LogErr("连接失败");
		return;
	}
	char *a = "aaa";
	Head H;
	snprintf(H.DateTime, sizeof(H.DateTime), "%s",textBox1->Text);
	snprintf(H.FileName, sizeof(H.FileName), "%s", textBox3->Text);
	snprintf(H.MsgType, sizeof(H.MsgType), "%s", comboBox2->Text);
	snprintf(H.Pupilage, sizeof(H.Pupilage), "%s", textBox2->Text);
	snprintf(H.RequestType, sizeof(H.RequestType), "%s", comboBox1->Text);
	H.TrialCode = comboBox3->SelectedIndex;
	snprintf(H.TrialName, sizeof(H.TrialName), "%s", comboBox4->Text);

	if( se.SendRequest(H,T_to_string(richTextBox1->Text))) logBox1->LogInfo("发送成功");
	else {
		logBox1->LogErr("发送失败");
		se.Destroy();
		return;
	}
	string ret = se.RecvHandle();
	se.Destroy();
	logBox1->LogInfo(gcnew String(ret.c_str()));
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	comboBox4->SelectedIndex = comboBox3->SelectedIndex;
}
};
}
