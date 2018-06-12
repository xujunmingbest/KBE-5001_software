#pragma once
#include "tool.h"
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 叠加原理实验内容 摘要
	/// </summary>
	public ref class 叠加原理实验内容 : public System::Windows::Forms::Form
	{
	public:
		叠加原理实验内容(void)
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
		~叠加原理实验内容()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label9;
	protected:
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox40;
	private: System::Windows::Forms::TextBox^  textBox39;
	private: System::Windows::Forms::TextBox^  textBox38;
	private: System::Windows::Forms::TextBox^  textBox37;
	private: System::Windows::Forms::TextBox^  textBox36;
	private: System::Windows::Forms::TextBox^  textBox35;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox50;
	private: System::Windows::Forms::TextBox^  textBox49;
	private: System::Windows::Forms::TextBox^  textBox48;
	private: System::Windows::Forms::TextBox^  textBox47;
	private: System::Windows::Forms::TextBox^  textBox46;
	private: System::Windows::Forms::TextBox^  textBox45;
	private: System::Windows::Forms::TextBox^  textBox44;
	private: System::Windows::Forms::TextBox^  textBox43;
	private: System::Windows::Forms::TextBox^  textBox42;
	private: System::Windows::Forms::TextBox^  textBox41;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::ComboBox^  comboBox6;
	private: System::Windows::Forms::ComboBox^  comboBox7;
	private: System::Windows::Forms::ComboBox^  comboBox8;
	private: System::Windows::Forms::ComboBox^  comboBox9;
	private: System::Windows::Forms::ComboBox^  comboBox10;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Button^  button1;
private: ::LedWatch::LedWatch^  ledWatch4;
private: ::LedWatch::LedWatch^  ledWatch3;
private: ::LedWatch::LedWatch^  ledWatch2;
private: ::LedWatch::LedWatch^  ledWatch1;





























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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(叠加原理实验内容::typeid));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ledWatch4 = (gcnew ::LedWatch::LedWatch());
			this->ledWatch3 = (gcnew ::LedWatch::LedWatch());
			this->ledWatch2 = (gcnew ::LedWatch::LedWatch());
			this->ledWatch1 = (gcnew ::LedWatch::LedWatch());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(338, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 24);
			this->label9->TabIndex = 10;
			this->label9->Text = L"I1（mA）";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(456, 66);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 24);
			this->label11->TabIndex = 11;
			this->label11->Text = L"I2（mA）";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(570, 66);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(112, 24);
			this->label13->TabIndex = 12;
			this->label13->Text = L"I3（mA）";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(687, 66);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(112, 24);
			this->label20->TabIndex = 15;
			this->label20->Text = L"UFA（v）";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(806, 66);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(112, 24);
			this->label21->TabIndex = 16;
			this->label21->Text = L"UAB（v）";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(926, 66);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(112, 24);
			this->label22->TabIndex = 17;
			this->label22->Text = L"UAD（v）";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(1041, 66);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(112, 24);
			this->label23->TabIndex = 18;
			this->label23->Text = L"UCD（v）";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(1159, 66);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(112, 24);
			this->label24->TabIndex = 19;
			this->label24->Text = L"UDE（v）";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(221, 65);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(99, 24);
			this->label17->TabIndex = 14;
			this->label17->Text = L"E2（v）";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(106, 66);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(99, 24);
			this->label15->TabIndex = 13;
			this->label15->Text = L"E1（v）";
			this->label15->Click += gcnew System::EventHandler(this, &叠加原理实验内容::label15_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(110, 140);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 34);
			this->textBox1->TabIndex = 20;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(225, 140);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 34);
			this->textBox2->TabIndex = 21;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(342, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 34);
			this->textBox3->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(460, 140);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 34);
			this->textBox4->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(574, 140);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 34);
			this->textBox5->TabIndex = 24;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(691, 140);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 34);
			this->textBox6->TabIndex = 25;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(810, 140);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 34);
			this->textBox7->TabIndex = 26;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(930, 140);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 34);
			this->textBox8->TabIndex = 27;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(1045, 140);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 34);
			this->textBox9->TabIndex = 28;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(1163, 140);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 34);
			this->textBox10->TabIndex = 29;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(6, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 53);
			this->label8->TabIndex = 30;
			this->label8->Text = L"E1=12V\r\nE2=0V";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(110, 271);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(100, 34);
			this->textBox30->TabIndex = 42;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(225, 271);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(100, 34);
			this->textBox29->TabIndex = 43;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(342, 271);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(100, 34);
			this->textBox28->TabIndex = 44;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(460, 271);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(100, 34);
			this->textBox27->TabIndex = 45;
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(574, 271);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 34);
			this->textBox26->TabIndex = 46;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(691, 271);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 34);
			this->textBox25->TabIndex = 47;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(810, 271);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 34);
			this->textBox24->TabIndex = 48;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(930, 271);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 34);
			this->textBox23->TabIndex = 49;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(1045, 271);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 34);
			this->textBox22->TabIndex = 50;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(1163, 271);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 34);
			this->textBox21->TabIndex = 51;
			// 
			// textBox40
			// 
			this->textBox40->Location = System::Drawing::Point(110, 420);
			this->textBox40->Name = L"textBox40";
			this->textBox40->Size = System::Drawing::Size(100, 34);
			this->textBox40->TabIndex = 53;
			// 
			// textBox39
			// 
			this->textBox39->Location = System::Drawing::Point(225, 420);
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(100, 34);
			this->textBox39->TabIndex = 54;
			// 
			// textBox38
			// 
			this->textBox38->Location = System::Drawing::Point(342, 420);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(100, 34);
			this->textBox38->TabIndex = 55;
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(460, 420);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(100, 34);
			this->textBox37->TabIndex = 56;
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(574, 420);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(100, 34);
			this->textBox36->TabIndex = 57;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(691, 420);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(100, 34);
			this->textBox35->TabIndex = 58;
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(810, 420);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(100, 34);
			this->textBox34->TabIndex = 59;
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(930, 420);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(100, 34);
			this->textBox33->TabIndex = 60;
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(1045, 420);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(100, 34);
			this->textBox32->TabIndex = 61;
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(1163, 420);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(100, 34);
			this->textBox31->TabIndex = 62;
			// 
			// textBox50
			// 
			this->textBox50->Location = System::Drawing::Point(110, 567);
			this->textBox50->Name = L"textBox50";
			this->textBox50->Size = System::Drawing::Size(100, 34);
			this->textBox50->TabIndex = 64;
			// 
			// textBox49
			// 
			this->textBox49->Location = System::Drawing::Point(225, 567);
			this->textBox49->Name = L"textBox49";
			this->textBox49->Size = System::Drawing::Size(100, 34);
			this->textBox49->TabIndex = 65;
			// 
			// textBox48
			// 
			this->textBox48->Location = System::Drawing::Point(342, 567);
			this->textBox48->Name = L"textBox48";
			this->textBox48->Size = System::Drawing::Size(100, 34);
			this->textBox48->TabIndex = 66;
			// 
			// textBox47
			// 
			this->textBox47->Location = System::Drawing::Point(460, 567);
			this->textBox47->Name = L"textBox47";
			this->textBox47->Size = System::Drawing::Size(100, 34);
			this->textBox47->TabIndex = 67;
			// 
			// textBox46
			// 
			this->textBox46->Location = System::Drawing::Point(574, 567);
			this->textBox46->Name = L"textBox46";
			this->textBox46->Size = System::Drawing::Size(100, 34);
			this->textBox46->TabIndex = 68;
			// 
			// textBox45
			// 
			this->textBox45->Location = System::Drawing::Point(691, 567);
			this->textBox45->Name = L"textBox45";
			this->textBox45->Size = System::Drawing::Size(100, 34);
			this->textBox45->TabIndex = 69;
			// 
			// textBox44
			// 
			this->textBox44->Location = System::Drawing::Point(810, 567);
			this->textBox44->Name = L"textBox44";
			this->textBox44->Size = System::Drawing::Size(100, 34);
			this->textBox44->TabIndex = 70;
			// 
			// textBox43
			// 
			this->textBox43->Location = System::Drawing::Point(930, 567);
			this->textBox43->Name = L"textBox43";
			this->textBox43->Size = System::Drawing::Size(100, 34);
			this->textBox43->TabIndex = 71;
			// 
			// textBox42
			// 
			this->textBox42->Location = System::Drawing::Point(1045, 567);
			this->textBox42->Name = L"textBox42";
			this->textBox42->Size = System::Drawing::Size(100, 34);
			this->textBox42->TabIndex = 72;
			// 
			// textBox41
			// 
			this->textBox41->Location = System::Drawing::Point(1163, 567);
			this->textBox41->Name = L"textBox41";
			this->textBox41->Size = System::Drawing::Size(100, 34);
			this->textBox41->TabIndex = 73;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(1226, 654);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 39);
			this->button3->TabIndex = 108;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->MouseEnter += gcnew System::EventHandler(this, &叠加原理实验内容::button3_MouseEnter);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电压表1", L"电压表2" });
			this->comboBox1->Location = System::Drawing::Point(110, 93);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 26);
			this->comboBox1->TabIndex = 109;
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电压表1", L"电压表2" });
			this->comboBox2->Location = System::Drawing::Point(225, 93);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 26);
			this->comboBox2->TabIndex = 110;
			// 
			// comboBox3
			// 
			this->comboBox3->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox3->Location = System::Drawing::Point(342, 93);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(100, 26);
			this->comboBox3->TabIndex = 111;
			// 
			// comboBox4
			// 
			this->comboBox4->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox4->Location = System::Drawing::Point(460, 93);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(100, 26);
			this->comboBox4->TabIndex = 112;
			// 
			// comboBox5
			// 
			this->comboBox5->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox5->Location = System::Drawing::Point(574, 93);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(100, 26);
			this->comboBox5->TabIndex = 113;
			// 
			// comboBox6
			// 
			this->comboBox6->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox6->Location = System::Drawing::Point(691, 93);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(100, 26);
			this->comboBox6->TabIndex = 114;
			// 
			// comboBox7
			// 
			this->comboBox7->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox7->Location = System::Drawing::Point(810, 93);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(100, 26);
			this->comboBox7->TabIndex = 115;
			// 
			// comboBox8
			// 
			this->comboBox8->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox8->FormattingEnabled = true;
			this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox8->Location = System::Drawing::Point(930, 93);
			this->comboBox8->Name = L"comboBox8";
			this->comboBox8->Size = System::Drawing::Size(100, 26);
			this->comboBox8->TabIndex = 116;
			// 
			// comboBox9
			// 
			this->comboBox9->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox9->FormattingEnabled = true;
			this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox9->Location = System::Drawing::Point(1045, 93);
			this->comboBox9->Name = L"comboBox9";
			this->comboBox9->Size = System::Drawing::Size(100, 26);
			this->comboBox9->TabIndex = 117;
			// 
			// comboBox10
			// 
			this->comboBox10->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox10->FormattingEnabled = true;
			this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"电流表1", L"电流表2" });
			this->comboBox10->Location = System::Drawing::Point(1163, 93);
			this->comboBox10->Name = L"comboBox10";
			this->comboBox10->Size = System::Drawing::Size(100, 26);
			this->comboBox10->TabIndex = 118;
			// 
			// button21
			// 
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(110, 180);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(100, 28);
			this->button21->TabIndex = 129;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &叠加原理实验内容::button21_Click);
			// 
			// button20
			// 
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(225, 180);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(100, 28);
			this->button20->TabIndex = 130;
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(342, 180);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 28);
			this->button19->TabIndex = 131;
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(460, 180);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 28);
			this->button18->TabIndex = 132;
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(574, 180);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 28);
			this->button17->TabIndex = 133;
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.Image")));
			this->button16->Location = System::Drawing::Point(691, 180);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(100, 28);
			this->button16->TabIndex = 134;
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(810, 180);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(100, 28);
			this->button15->TabIndex = 135;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(930, 180);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 28);
			this->button14->TabIndex = 136;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(1045, 180);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 28);
			this->button13->TabIndex = 137;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(1163, 180);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 28);
			this->button12->TabIndex = 138;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.Image")));
			this->button31->Location = System::Drawing::Point(110, 307);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(100, 28);
			this->button31->TabIndex = 139;
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button30.Image")));
			this->button30->Location = System::Drawing::Point(225, 307);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(100, 28);
			this->button30->TabIndex = 140;
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button29.Image")));
			this->button29->Location = System::Drawing::Point(342, 307);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(100, 28);
			this->button29->TabIndex = 141;
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button28.Image")));
			this->button28->Location = System::Drawing::Point(460, 307);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(100, 28);
			this->button28->TabIndex = 142;
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.Image")));
			this->button27->Location = System::Drawing::Point(574, 307);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(100, 28);
			this->button27->TabIndex = 143;
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button26.Image")));
			this->button26->Location = System::Drawing::Point(691, 307);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(100, 28);
			this->button26->TabIndex = 144;
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(810, 307);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(100, 28);
			this->button25->TabIndex = 145;
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(930, 307);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(100, 28);
			this->button24->TabIndex = 146;
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(1045, 307);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(100, 28);
			this->button23->TabIndex = 147;
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(1163, 307);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(100, 28);
			this->button22->TabIndex = 148;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button41.Image")));
			this->button41->Location = System::Drawing::Point(110, 456);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(100, 28);
			this->button41->TabIndex = 149;
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button40.Image")));
			this->button40->Location = System::Drawing::Point(225, 456);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(100, 28);
			this->button40->TabIndex = 150;
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button39.Image")));
			this->button39->Location = System::Drawing::Point(342, 456);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(100, 28);
			this->button39->TabIndex = 151;
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button38.Image")));
			this->button38->Location = System::Drawing::Point(460, 456);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(100, 28);
			this->button38->TabIndex = 152;
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button37.Image")));
			this->button37->Location = System::Drawing::Point(574, 456);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(100, 28);
			this->button37->TabIndex = 153;
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button36.Image")));
			this->button36->Location = System::Drawing::Point(691, 456);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(100, 28);
			this->button36->TabIndex = 154;
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button35.Image")));
			this->button35->Location = System::Drawing::Point(810, 456);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(100, 28);
			this->button35->TabIndex = 155;
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button34.Image")));
			this->button34->Location = System::Drawing::Point(930, 456);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(100, 28);
			this->button34->TabIndex = 156;
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.Image")));
			this->button33->Location = System::Drawing::Point(1045, 456);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(100, 28);
			this->button33->TabIndex = 157;
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.Image")));
			this->button32->Location = System::Drawing::Point(1163, 456);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(100, 28);
			this->button32->TabIndex = 158;
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button51.Image")));
			this->button51->Location = System::Drawing::Point(110, 607);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(100, 28);
			this->button51->TabIndex = 159;
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button50.Image")));
			this->button50->Location = System::Drawing::Point(225, 607);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(100, 28);
			this->button50->TabIndex = 160;
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button49.Image")));
			this->button49->Location = System::Drawing::Point(342, 607);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(100, 28);
			this->button49->TabIndex = 161;
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button48.Image")));
			this->button48->Location = System::Drawing::Point(460, 607);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(100, 28);
			this->button48->TabIndex = 162;
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button47.Image")));
			this->button47->Location = System::Drawing::Point(574, 607);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(100, 28);
			this->button47->TabIndex = 163;
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button46.Image")));
			this->button46->Location = System::Drawing::Point(691, 607);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(100, 28);
			this->button46->TabIndex = 164;
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button45.Image")));
			this->button45->Location = System::Drawing::Point(810, 607);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(100, 28);
			this->button45->TabIndex = 165;
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.Image")));
			this->button44->Location = System::Drawing::Point(930, 607);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(100, 28);
			this->button44->TabIndex = 166;
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button43.Image")));
			this->button43->Location = System::Drawing::Point(1045, 607);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(100, 28);
			this->button43->TabIndex = 167;
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button42.Image")));
			this->button42->Location = System::Drawing::Point(1163, 607);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(100, 28);
			this->button42->TabIndex = 168;
			this->button42->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(6, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 53);
			this->label1->TabIndex = 199;
			this->label1->Text = L"E1=0V\r\nE2=6V";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(6, 423);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 53);
			this->label4->TabIndex = 202;
			this->label4->Text = L"E1=12V\r\nE2=6V";
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(0, 570);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(88, 53);
			this->label5->TabIndex = 203;
			this->label5->Text = L"E1=0V\r\nE2=12V";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button42);
			this->groupBox1->Controls->Add(this->button43);
			this->groupBox1->Controls->Add(this->button44);
			this->groupBox1->Controls->Add(this->button45);
			this->groupBox1->Controls->Add(this->button46);
			this->groupBox1->Controls->Add(this->button47);
			this->groupBox1->Controls->Add(this->button48);
			this->groupBox1->Controls->Add(this->button49);
			this->groupBox1->Controls->Add(this->button50);
			this->groupBox1->Controls->Add(this->button51);
			this->groupBox1->Controls->Add(this->button32);
			this->groupBox1->Controls->Add(this->button33);
			this->groupBox1->Controls->Add(this->button34);
			this->groupBox1->Controls->Add(this->button35);
			this->groupBox1->Controls->Add(this->button36);
			this->groupBox1->Controls->Add(this->button37);
			this->groupBox1->Controls->Add(this->button38);
			this->groupBox1->Controls->Add(this->button39);
			this->groupBox1->Controls->Add(this->button40);
			this->groupBox1->Controls->Add(this->button41);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->button23);
			this->groupBox1->Controls->Add(this->button24);
			this->groupBox1->Controls->Add(this->button25);
			this->groupBox1->Controls->Add(this->button26);
			this->groupBox1->Controls->Add(this->button27);
			this->groupBox1->Controls->Add(this->button28);
			this->groupBox1->Controls->Add(this->button29);
			this->groupBox1->Controls->Add(this->button30);
			this->groupBox1->Controls->Add(this->button31);
			this->groupBox1->Controls->Add(this->button12);
			this->groupBox1->Controls->Add(this->button13);
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button15);
			this->groupBox1->Controls->Add(this->button16);
			this->groupBox1->Controls->Add(this->button17);
			this->groupBox1->Controls->Add(this->button18);
			this->groupBox1->Controls->Add(this->button19);
			this->groupBox1->Controls->Add(this->button20);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->comboBox10);
			this->groupBox1->Controls->Add(this->comboBox9);
			this->groupBox1->Controls->Add(this->comboBox8);
			this->groupBox1->Controls->Add(this->comboBox7);
			this->groupBox1->Controls->Add(this->comboBox6);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox41);
			this->groupBox1->Controls->Add(this->textBox42);
			this->groupBox1->Controls->Add(this->textBox43);
			this->groupBox1->Controls->Add(this->textBox44);
			this->groupBox1->Controls->Add(this->textBox45);
			this->groupBox1->Controls->Add(this->textBox46);
			this->groupBox1->Controls->Add(this->textBox47);
			this->groupBox1->Controls->Add(this->textBox48);
			this->groupBox1->Controls->Add(this->textBox49);
			this->groupBox1->Controls->Add(this->textBox50);
			this->groupBox1->Controls->Add(this->textBox31);
			this->groupBox1->Controls->Add(this->textBox32);
			this->groupBox1->Controls->Add(this->textBox33);
			this->groupBox1->Controls->Add(this->textBox34);
			this->groupBox1->Controls->Add(this->textBox35);
			this->groupBox1->Controls->Add(this->textBox36);
			this->groupBox1->Controls->Add(this->textBox37);
			this->groupBox1->Controls->Add(this->textBox38);
			this->groupBox1->Controls->Add(this->textBox39);
			this->groupBox1->Controls->Add(this->textBox40);
			this->groupBox1->Controls->Add(this->textBox21);
			this->groupBox1->Controls->Add(this->textBox22);
			this->groupBox1->Controls->Add(this->textBox23);
			this->groupBox1->Controls->Add(this->textBox24);
			this->groupBox1->Controls->Add(this->textBox25);
			this->groupBox1->Controls->Add(this->textBox26);
			this->groupBox1->Controls->Add(this->textBox27);
			this->groupBox1->Controls->Add(this->textBox28);
			this->groupBox1->Controls->Add(this->textBox29);
			this->groupBox1->Controls->Add(this->textBox30);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->label21);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1273, 714);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"实验数据";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &叠加原理实验内容::groupBox1_Enter);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->ledWatch4);
			this->panel2->Controls->Add(this->ledWatch3);
			this->panel2->Controls->Add(this->ledWatch2);
			this->panel2->Controls->Add(this->ledWatch1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(1291, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(483, 693);
			this->panel2->TabIndex = 34;
			// 
			// ledWatch4
			// 
			this->ledWatch4->Location = System::Drawing::Point(24, 525);
			this->ledWatch4->Name = L"ledWatch4";
			this->ledWatch4->Size = System::Drawing::Size(413, 129);
			this->ledWatch4->TabIndex = 22;
			// 
			// ledWatch3
			// 
			this->ledWatch3->Location = System::Drawing::Point(24, 350);
			this->ledWatch3->Name = L"ledWatch3";
			this->ledWatch3->Size = System::Drawing::Size(413, 129);
			this->ledWatch3->TabIndex = 21;
			// 
			// ledWatch2
			// 
			this->ledWatch2->Location = System::Drawing::Point(24, 180);
			this->ledWatch2->Name = L"ledWatch2";
			this->ledWatch2->Size = System::Drawing::Size(413, 129);
			this->ledWatch2->TabIndex = 20;
			// 
			// ledWatch1
			// 
			this->ledWatch1->Location = System::Drawing::Point(24, 17);
			this->ledWatch1->Name = L"ledWatch1";
			this->ledWatch1->Size = System::Drawing::Size(413, 129);
			this->ledWatch1->TabIndex = 19;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1110, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 54);
			this->button1->TabIndex = 18;
			this->button1->Text = L"开始计数";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// 叠加原理实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1785, 921);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"叠加原理实验内容";
			this->Text = L"叠加原理实验内容";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &叠加原理实验内容::叠加原理实验内容_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button3_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
	ToolTip ^p = gcnew ToolTip();
	p->ShowAlways = true;
	p->SetToolTip(this->button3, "上传成绩");
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	global::SetDV(textBox1->Text);

}



private: System::Void 叠加原理实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
	comboBox1->SelectedIndex = 0;
	comboBox2->SelectedIndex = 0;
	comboBox3->SelectedIndex = 0;
	comboBox4->SelectedIndex = 0;
	comboBox5->SelectedIndex = 0;
	comboBox6->SelectedIndex = 0;
	comboBox7->SelectedIndex = 0;
	comboBox8->SelectedIndex = 0;
	comboBox9->SelectedIndex = 0;
	comboBox10->SelectedIndex = 0;
	ledWatch1->SetTitle("电压表1");
	ledWatch2->SetTitle("电压表2");
	ledWatch3->SetTitle("电流表1");
	ledWatch4->SetTitle("电流表2");
}
};
}
