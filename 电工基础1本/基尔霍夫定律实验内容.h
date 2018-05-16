#pragma once
#include "tool.h"

extern bool 基尔霍夫定律实验内容IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基尔霍夫定律实验内容 摘要
	/// </summary>
	public ref class 基尔霍夫定律实验内容 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律实验内容(void)
		{
			InitializeComponent();
			基尔霍夫定律实验内容IsOpened = true;
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
		~基尔霍夫定律实验内容()
		{
			基尔霍夫定律实验内容IsOpened = false;
			v->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;










	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


















	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;














	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label6;
	private: System::ComponentModel::IContainer^  components;















	protected:





	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定律实验内容::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 787);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1655, 182);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &基尔霍夫定律实验内容::dataGridView1_CellContentClick);
			this->dataGridView1->ColumnHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &基尔霍夫定律实验内容::dataGridView1_ColumnHeaderMouseClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"获取";
			this->Column1->Name = L"Column1";
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"获取";
			this->Column2->Name = L"Column2";
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"获取";
			this->Column3->Name = L"Column3";
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"获取";
			this->Column4->Name = L"Column4";
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"获取";
			this->Column5->Name = L"Column5";
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"获取";
			this->Column6->Name = L"Column6";
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"获取";
			this->Column7->Name = L"Column7";
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"获取";
			this->Column8->Name = L"Column8";
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"获取";
			this->Column9->Name = L"Column9";
			this->Column9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"获取";
			this->Column10->Name = L"Column10";
			this->Column10->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"楷体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(814, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(803, 329);
			this->panel1->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(546, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 32;
			this->button2->Text = L"停止";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button2_Click);
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(3, 245);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(747, 23);
			this->label19->TabIndex = 7;
			this->label19->Text = L"5．用万用表分别测量两路电源及电阻元件上的电压值，并记录。";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(3, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(777, 51);
			this->label5->TabIndex = 5;
			this->label5->Text = L"4．将电流插头分别插入三条支路的三个电流插座中，读出并记录电流值。";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(3, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(793, 52);
			this->label4->TabIndex = 4;
			this->label4->Text = L"3．熟悉电流插头的结构，将电流插头的两端接至万用表的“＋、－”两端。";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"实验内容";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"楷体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(681, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"点我朗读";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button1_Click_1);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(3, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(793, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1．实验前先任意设定三条支路的电流参考方向，如图中的I1、I2、I3所示，并熟悉线路结构，掌握各开关的操作使用方法。";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(3, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(793, 48);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2．将开关向上拔，即电阻接入电路中。分别将两路直流稳压源接入电路，令E1＝12V，E2＝6V。";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(796, 647);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(595, 505);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 10);
			this->label18->TabIndex = 31;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(183, 505);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 10);
			this->label14->TabIndex = 28;
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(595, 322);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(28, 10);
			this->label16->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(183, 322);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(28, 10);
			this->label12->TabIndex = 30;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(183, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 10);
			this->label8->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(183, 99);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 10);
			this->label10->TabIndex = 26;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(12, 665);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(796, 117);
			this->groupBox1->TabIndex = 32;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"数据类型设置";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(521, 54);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 28);
			this->button3->TabIndex = 2;
			this->button3->Text = L"设置";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"设置", L"获取" });
			this->comboBox2->Location = System::Drawing::Point(288, 54);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(172, 28);
			this->comboBox2->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"I1", L"I2", L"I3", L"E1", L"E2", L"UFA", L"UAB",
					L"UAD", L"UCD", L"UDE"
			});
			this->comboBox1->Location = System::Drawing::Point(81, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(172, 28);
			this->comboBox1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Location = System::Drawing::Point(814, 362);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(803, 420);
			this->panel2->TabIndex = 33;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(489, 330);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 57);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(489, 108);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 57);
			this->textBox1->TabIndex = 2;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(9, 234);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(474, 155);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(9, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(474, 152);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(350, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 28);
			this->label6->TabIndex = 4;
			this->label6->Text = L"电压表:V";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(335, 351);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 28);
			this->label7->TabIndex = 5;
			this->label7->Text = L"安培表:mA";
			// 
			// 基尔霍夫定律实验内容
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1655, 969);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"基尔霍夫定律实验内容";
			this->Text = L"基尔霍夫定律实验内容";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律实验内容::基尔霍夫定律实验内容_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 基尔霍夫定律实验内容_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1Load();
		dataGridView1->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(134)));
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
			 
			 void dataGridView1Load() {

				 dataGridView1->Rows->Add();
				 dataGridView1->Rows[0]->HeaderCell->Value = "被测量";
				 dataGridView1->Rows[0]->Cells[0]->Value = "I1（mA）";
				 dataGridView1->Rows[0]->Cells[1]->Value = "I2（mA）";
				 dataGridView1->Rows[0]->Cells[2]->Value = "I3（mA）";
				 dataGridView1->Rows[0]->Cells[3]->Value = "E1（v）";
				 dataGridView1->Rows[0]->Cells[4]->Value = "E2（v）";
				 dataGridView1->Rows[0]->Cells[5]->Value = "UFA（v）";
				 dataGridView1->Rows[0]->Cells[6]->Value = "UAB（v）";
				 dataGridView1->Rows[0]->Cells[7]->Value = "UAD（v）";
				 dataGridView1->Rows[0]->Cells[8]->Value = "UCD（v）";
				 dataGridView1->Rows[0]->Cells[9]->Value = "UDE（v）";

				 dataGridView1->Rows->Add();
				 dataGridView1->Rows[1]->HeaderCell->Value = "计算值";

				 dataGridView1->Rows->Add();
				 dataGridView1->Rows[2]->HeaderCell->Value = "测量值";
				 
				 
				 dataGridView1->Rows[3]->HeaderCell->Value = "相对误差";

				 dataGridView1->RowHeadersWidth = 200;

			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}

private: System::Void dataGridView1_ColumnHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {


	int index = e->ColumnIndex;
	//列Header的背景色为黄色
	dataGridView1->EnableHeadersVisualStyles = false;
	for each (DataGridViewColumn^ var in dataGridView1->Columns)
	{
		var->HeaderCell->Style->ForeColor = Color::Black;
	}

	dataGridView1->Columns[index]->HeaderCell->Style->ForeColor = Color::Red;
	String ^VolumnHeadtext = dataGridView1->Columns[index]->HeaderText;
	if (VolumnHeadtext == "获取") {
		S_PLCRecv spr;
		spr = global::sh->GetliKongData();
		switch (e->ColumnIndex) {
		case 0: 
		case 1: 
		case 2:textBox2->Text = spr.I.ToString(); break;
		case 3:;
		case 4:;
		case 5:;
		case 6:;
		case 7:textBox1->Text = spr.U.ToString(); break;
		}
	}
	else if (VolumnHeadtext == "设置") {

		switch (e->ColumnIndex) {
		case 0:
		case 1:
		case 2:break;
		//case 3:global::scs->SetDirectVoltage(String_to_Int(dataGridView1->Rows[2]->Cells[index]->Value->ToString())); break;
		case 3:	global::scs->SetDirectVoltage(10);
			MessageBox::Show("123");
			break;
		//case 4:global::scs->SetDirectVoltage(String_to_Int(dataGridView1->Rows[2]->Cells[index]->Value->ToString())); break;
		case 5:;
		case 6:;
		case 7:;
		}
	
	
	}
	else {
	
		return;
	}

}
		 Voice^ v = gcnew Voice;
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	v->Speak(label1->Text + label2->Text + label3->Text
		+ label4->Text + label5->Text + label19->Text);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	v->Close();
}

private: System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
	
}


private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	DataGridViewColumn ^ dgvc;
	if (comboBox1->SelectedIndex < 0) return;
	if (comboBox2->SelectedIndex < 0) return;
	dgvc = dataGridView1->Columns[comboBox1->SelectedIndex];
	dgvc->HeaderText = comboBox2->Items[comboBox2->SelectedIndex]->ToString();

}

};
}
