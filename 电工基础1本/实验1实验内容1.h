#pragma once
extern bool 实验1实验内容1IsOpened ;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	/// <summary>
	/// 实验1实验内容1 摘要
	/// </summary>
	public ref class 实验1实验内容1 : public System::Windows::Forms::Form
	{
	public:
		实验1实验内容1(void)
		{
			InitializeComponent();
			实验1实验内容1IsOpened = true;
			listView1Load();
			listView2Load();
			listView3Load();
			listView4Load();
			listView5Load();
			listView6Load();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  在此处添加构造函数代码
			//
		}
		void listView1Load() {
			listView1->Columns->Add("");
			listView1->Columns->Add("获取");
			listView1->Columns->Add("获取");
			listView1->Columns->Add("获取");
			listView1->Columns->Add("获取");
			listView1->Columns->Add("获取");
			listView1->Columns->Add("获取");

			listView1->Items->Add("U(v)");
			listView1->Items[0]->SubItems->Add("0");
			listView1->Items[0]->SubItems->Add("2");
			listView1->Items[0]->SubItems->Add("4");
			listView1->Items[0]->SubItems->Add("6");
			listView1->Items[0]->SubItems->Add("8");
			listView1->Items[0]->SubItems->Add("10");

			listView1->Items->Add("I(mA)");
			listView1->Items[1]->SubItems->Add("");
			listView1->Items[1]->SubItems->Add("");
			listView1->Items[1]->SubItems->Add("");
			listView1->Items[1]->SubItems->Add("");
			listView1->Items[1]->SubItems->Add("");
			listView1->Items[1]->SubItems->Add("");
		}

		void listView2Load() {
			listView2->Columns->Add("");
			listView2->Columns->Add("获取");
			listView2->Columns->Add("获取");
			listView2->Columns->Add("获取");
			listView2->Columns->Add("获取");
			listView2->Columns->Add("获取");
			listView2->Columns->Add("获取");

			listView2->Items->Add("U(v)");
			listView2->Items[0]->SubItems->Add("0");
			listView2->Items[0]->SubItems->Add("2");
			listView2->Items[0]->SubItems->Add("4");
			listView2->Items[0]->SubItems->Add("6");
			listView2->Items[0]->SubItems->Add("8");
			listView2->Items[0]->SubItems->Add("10");

			listView2->Items->Add("I(mA)");
			listView2->Items[1]->SubItems->Add("");
			listView2->Items[1]->SubItems->Add("");
			listView2->Items[1]->SubItems->Add("");
			listView2->Items[1]->SubItems->Add("");
			listView2->Items[1]->SubItems->Add("");
			listView2->Items[1]->SubItems->Add("");
		}

		void listView3Load() {
			listView3->Columns->Add("");
			listView3->Columns->Add("获取");
			listView3->Columns->Add("获取");
			listView3->Columns->Add("获取");
			listView3->Columns->Add("获取");
			listView3->Columns->Add("获取");
			listView3->Columns->Add("获取");

			listView3->Items->Add("U(v)");
			listView3->Items[0]->SubItems->Add("0");
			listView3->Items[0]->SubItems->Add("0.2");
			listView3->Items[0]->SubItems->Add("0.4");
			listView3->Items[0]->SubItems->Add("0.5");
			listView3->Items[0]->SubItems->Add("0.55");
			listView3->Items[0]->SubItems->Add("……0.75");

			listView3->Items->Add("I(mA)");
			listView3->Items[1]->SubItems->Add("");
			listView3->Items[1]->SubItems->Add("");
			listView3->Items[1]->SubItems->Add("");
			listView3->Items[1]->SubItems->Add("");
			listView3->Items[1]->SubItems->Add("");
			listView3->Items[1]->SubItems->Add("");
		}

		void listView4Load() {
			listView4->Columns->Add("");
			listView4->Columns->Add("获取");
			listView4->Columns->Add("获取");
			listView4->Columns->Add("获取");
			listView4->Columns->Add("获取");
			listView4->Columns->Add("获取");
			listView4->Columns->Add("获取");
			listView4->Columns->Add("获取");

			listView4->Items->Add("U(v)");
			listView4->Items[0]->SubItems->Add("0");
			listView4->Items[0]->SubItems->Add("-5");
			listView4->Items[0]->SubItems->Add("-10");
			listView4->Items[0]->SubItems->Add("-15");
			listView4->Items[0]->SubItems->Add("-20");
			listView4->Items[0]->SubItems->Add("-25");
			listView4->Items[0]->SubItems->Add("-30");


			listView4->Items->Add("I(mA)");
			listView4->Items[1]->SubItems->Add("");
			listView4->Items[1]->SubItems->Add("");
			listView4->Items[1]->SubItems->Add("");
			listView4->Items[1]->SubItems->Add("");
			listView4->Items[1]->SubItems->Add("");
			listView4->Items[1]->SubItems->Add("");
			listView4->Items[1]->SubItems->Add("");
		}

		void listView5Load() {
			listView5->Columns->Add("");
			listView5->Columns->Add("获取");
			listView5->Columns->Add("获取");
			listView5->Columns->Add("获取");
			listView5->Columns->Add("获取");
			listView5->Columns->Add("获取");
			listView5->Columns->Add("获取");

			listView5->Items->Add("U(v)");
			listView5->Items[0]->SubItems->Add("0");
			listView5->Items[0]->SubItems->Add("2");
			listView5->Items[0]->SubItems->Add("4");
			listView5->Items[0]->SubItems->Add("6");
			listView5->Items[0]->SubItems->Add("8");
			listView5->Items[0]->SubItems->Add("10");


			listView5->Items->Add("I(mA)");
			listView5->Items[1]->SubItems->Add("");
			listView5->Items[1]->SubItems->Add("");
			listView5->Items[1]->SubItems->Add("");
			listView5->Items[1]->SubItems->Add("");
			listView5->Items[1]->SubItems->Add("");
			listView5->Items[1]->SubItems->Add("");
		}

		void listView6Load() {
			listView6->Columns->Add("");
			listView6->Columns->Add("获取");
			listView6->Columns->Add("获取");
			listView6->Columns->Add("获取");
			listView6->Columns->Add("获取");
			listView6->Columns->Add("获取");
			listView6->Columns->Add("获取");

			listView6->Items->Add("U(v)");
			listView6->Items[0]->SubItems->Add("0");
			listView6->Items[0]->SubItems->Add("2");
			listView6->Items[0]->SubItems->Add("4");
			listView6->Items[0]->SubItems->Add("6");
			listView6->Items[0]->SubItems->Add("8");
			listView6->Items[0]->SubItems->Add("10");


			listView6->Items->Add("I(mA)");
			listView6->Items[1]->SubItems->Add("");
			listView6->Items[1]->SubItems->Add("");
			listView6->Items[1]->SubItems->Add("");
			listView6->Items[1]->SubItems->Add("");
			listView6->Items[1]->SubItems->Add("");
			listView6->Items[1]->SubItems->Add("");
		}









	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~实验1实验内容1()
		{
			实验1实验内容1IsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::TabControl^  实验2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ListView^  listView2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListView^  listView4;
	private: System::Windows::Forms::ListView^  listView3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::ListView^  listView6;
private: System::Windows::Forms::ListView^  listView5;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::GroupBox^  groupBox4;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBox9;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::TextBox^  textBox10;
private: System::Windows::Forms::Label^  label22;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1实验内容1::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->实验2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->listView6 = (gcnew System::Windows::Forms::ListView());
			this->listView5 = (gcnew System::Windows::Forms::ListView());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->实验2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(29, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(418, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1．测定线性电阻器的伏安特性";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(29, 508);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(708, 59);
			this->label2->TabIndex = 1;
			this->label2->Text = L"按图25-2接线，调节稳压电源的输出电压U，从0伏开始缓慢地增加，一直到10V，记下相应的电压表和电流表的读数。";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// listView1
			// 
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(33, 579);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(681, 118);
			this->listView1->TabIndex = 2;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &实验1实验内容1::listView1_ColumnClick);
			// 
			// 实验2
			// 
			this->实验2->Controls->Add(this->tabPage1);
			this->实验2->Controls->Add(this->tabPage2);
			this->实验2->Controls->Add(this->tabPage3);
			this->实验2->Controls->Add(this->tabPage4);
			this->实验2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->实验2->Location = System::Drawing::Point(0, 0);
			this->实验2->Name = L"实验2";
			this->实验2->SelectedIndex = 0;
			this->实验2->Size = System::Drawing::Size(1705, 807);
			this->实验2->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->listView1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1697, 778);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"实验1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(907, 702);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 15);
			this->label14->TabIndex = 9;
			this->label14->Text = L"结果电流";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(1026, 695);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 30);
			this->textBox2->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1054, 658);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 7;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(907, 628);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 15);
			this->label4->TabIndex = 6;
			this->label4->Text = L"电压(单位伏特)";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(1026, 621);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 30);
			this->textBox1->TabIndex = 5;
			// 
			// chart1
			// 
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(920, 62);
			this->chart1->Name = L"chart1";
			series1->BorderColor = System::Drawing::Color::White;
			series1->BorderWidth = 10;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(551, 532);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(32, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(777, 430);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label15);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->textBox4);
			this->tabPage2->Controls->Add(this->chart3);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->listView2);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1697, 778);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"实验2";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &实验1实验内容1::tabPage2_Click);
			// 
			// chart3
			// 
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			chartArea2->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart3->Legends->Add(legend2);
			this->chart3->Location = System::Drawing::Point(939, 32);
			this->chart3->Name = L"chart3";
			series2->BorderWidth = 10;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart3->Series->Add(series2);
			this->chart3->Size = System::Drawing::Size(618, 553);
			this->chart3->TabIndex = 6;
			this->chart3->Text = L"chart3";
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label13->Location = System::Drawing::Point(49, 540);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(435, 52);
			this->label13->TabIndex = 5;
			this->label13->Text = L"将图25－2中的RL换成一只12V的汽车灯泡，重复1的步骤。";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(33, 108);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(747, 417);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// listView2
			// 
			this->listView2->FullRowSelect = true;
			this->listView2->GridLines = true;
			this->listView2->Location = System::Drawing::Point(53, 608);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(590, 99);
			this->listView2->TabIndex = 3;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &实验1实验内容1::listView2_ColumnClick);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(66, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(339, 63);
			this->label3->TabIndex = 1;
			this->label3->Text = L"2．测定非线性白炽灯泡的伏安特性";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Controls->Add(this->groupBox1);
			this->tabPage3->Controls->Add(this->chart2);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->listView4);
			this->tabPage3->Controls->Add(this->listView3);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label5);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1697, 778);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"实验3";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &实验1实验内容1::tabPage3_Click);
			// 
			// chart2
			// 
			chartArea3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(940, 108);
			this->chart2->Name = L"chart2";
			series3->BorderWidth = 10;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::Red;
			series3->Legend = L"Legend1";
			series3->Name = L"Series1";
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(604, 483);
			this->chart2->TabIndex = 9;
			this->chart2->Text = L"chart2";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(37, 141);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(726, 407);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->Location = System::Drawing::Point(45, 669);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(190, 23);
			this->label8->TabIndex = 7;
			this->label8->Text = L"反向特性实验数据";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->Location = System::Drawing::Point(45, 553);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(190, 23);
			this->label7->TabIndex = 6;
			this->label7->Text = L"正向特性实验数据";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// listView4
			// 
			this->listView4->FullRowSelect = true;
			this->listView4->GridLines = true;
			this->listView4->Location = System::Drawing::Point(48, 695);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(590, 83);
			this->listView4->TabIndex = 5;
			this->listView4->UseCompatibleStateImageBehavior = false;
			this->listView4->View = System::Windows::Forms::View::Details;
			this->listView4->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &实验1实验内容1::listView4_ColumnClick);
			// 
			// listView3
			// 
			this->listView3->FullRowSelect = true;
			this->listView3->GridLines = true;
			this->listView3->Location = System::Drawing::Point(48, 579);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(590, 87);
			this->listView3->TabIndex = 4;
			this->listView3->UseCompatibleStateImageBehavior = false;
			this->listView3->View = System::Windows::Forms::View::Details;
			this->listView3->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &实验1实验内容1::listView3_ColumnClick);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->Location = System::Drawing::Point(60, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(703, 100);
			this->label6->TabIndex = 3;
			this->label6->Text = L"按图25－3接线，R为限流电阻器，测二极管的正向特性时，其正向电流不得超过25mA，二极管D的正向压降可在0～0.75V之间取值。特别是在0.5～0.75之间更应"
				L"多取几个测量点。作反向特性实验时，只需将图25－3中的二极管D反接，且其反向电压可加到30V。";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(60, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(340, 23);
			this->label5->TabIndex = 2;
			this->label5->Text = L"3．测定半导体二极管的伏安特性";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->groupBox4);
			this->tabPage4->Controls->Add(this->groupBox3);
			this->tabPage4->Controls->Add(this->chart4);
			this->tabPage4->Controls->Add(this->pictureBox4);
			this->tabPage4->Controls->Add(this->listView6);
			this->tabPage4->Controls->Add(this->listView5);
			this->tabPage4->Controls->Add(this->label12);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->label9);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1697, 778);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"实验4";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &实验1实验内容1::tabPage4_Click);
			// 
			// chart4
			// 
			chartArea4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			chartArea4->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart4->Legends->Add(legend4);
			this->chart4->Location = System::Drawing::Point(931, 67);
			this->chart4->Name = L"chart4";
			series4->BorderWidth = 10;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Red;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart4->Series->Add(series4);
			this->chart4->Size = System::Drawing::Size(674, 528);
			this->chart4->TabIndex = 7;
			this->chart4->Text = L"chart4";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(34, 80);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(739, 428);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			// 
			// listView6
			// 
			this->listView6->FullRowSelect = true;
			this->listView6->GridLines = true;
			this->listView6->Location = System::Drawing::Point(68, 672);
			this->listView6->Name = L"listView6";
			this->listView6->Size = System::Drawing::Size(497, 98);
			this->listView6->TabIndex = 5;
			this->listView6->UseCompatibleStateImageBehavior = false;
			this->listView6->View = System::Windows::Forms::View::Details;
			this->listView6->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &实验1实验内容1::listView6_ColumnClick);
			// 
			// listView5
			// 
			this->listView5->FullRowSelect = true;
			this->listView5->GridLines = true;
			this->listView5->Location = System::Drawing::Point(68, 543);
			this->listView5->Name = L"listView5";
			this->listView5->Size = System::Drawing::Size(497, 89);
			this->listView5->TabIndex = 4;
			this->listView5->UseCompatibleStateImageBehavior = false;
			this->listView5->View = System::Windows::Forms::View::Details;
			this->listView5->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &实验1实验内容1::listView5_ColumnClick);
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label12->Location = System::Drawing::Point(65, 646);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(305, 23);
			this->label12->TabIndex = 3;
			this->label12->Text = L"反向特性实验数据";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label11->Location = System::Drawing::Point(65, 517);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(305, 23);
			this->label11->TabIndex = 2;
			this->label11->Text = L"正向特性实验数据";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label10->Location = System::Drawing::Point(31, 35);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(673, 42);
			this->label10->TabIndex = 1;
			this->label10->Text = L"只要将图25-3中的二极管换成稳压二极管，重复实验内容3的测量。";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label9->Location = System::Drawing::Point(30, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(393, 23);
			this->label9->TabIndex = 0;
			this->label9->Text = L"4．测定稳压二极管的伏安特性";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(978, 689);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 15);
			this->label15->TabIndex = 14;
			this->label15->Text = L"结果电流";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox3->Location = System::Drawing::Point(1097, 682);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(228, 30);
			this->textBox3->TabIndex = 13;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1125, 645);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 30);
			this->button2->TabIndex = 12;
			this->button2->Text = L"获取";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(978, 615);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(113, 15);
			this->label16->TabIndex = 11;
			this->label16->Text = L"电压(单位伏特)";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox4->Location = System::Drawing::Point(1097, 608);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(228, 30);
			this->textBox4->TabIndex = 10;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 107);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 15);
			this->label17->TabIndex = 14;
			this->label17->Text = L"结果电流";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox5->Location = System::Drawing::Point(125, 100);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(228, 30);
			this->textBox5->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(153, 63);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 12;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(6, 33);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(113, 15);
			this->label18->TabIndex = 11;
			this->label18->Text = L"电压(单位伏特)";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox6->Location = System::Drawing::Point(125, 26);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(228, 30);
			this->textBox6->TabIndex = 10;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label18);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Location = System::Drawing::Point(645, 598);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(360, 141);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"正向特性实验数据";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Location = System::Drawing::Point(1041, 598);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(360, 141);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"反向特性实验数据";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(6, 33);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(113, 15);
			this->label19->TabIndex = 11;
			this->label19->Text = L"电压(单位伏特)";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox7->Location = System::Drawing::Point(125, 26);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(228, 30);
			this->textBox7->TabIndex = 10;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(153, 63);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 30);
			this->button4->TabIndex = 12;
			this->button4->Text = L"获取";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox8->Location = System::Drawing::Point(125, 100);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(228, 30);
			this->textBox8->TabIndex = 13;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(6, 107);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(67, 15);
			this->label20->TabIndex = 14;
			this->label20->Text = L"结果电流";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Location = System::Drawing::Point(604, 579);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(360, 141);
			this->groupBox3->TabIndex = 21;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"真实设备检测";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 33);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(113, 15);
			this->label21->TabIndex = 11;
			this->label21->Text = L"电压(单位伏特)";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox9->Location = System::Drawing::Point(125, 26);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(228, 30);
			this->textBox9->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(153, 63);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 30);
			this->button5->TabIndex = 12;
			this->button5->Text = L"获取";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox10->Location = System::Drawing::Point(125, 100);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(228, 30);
			this->textBox10->TabIndex = 13;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(6, 107);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(67, 15);
			this->label22->TabIndex = 14;
			this->label22->Text = L"结果电流";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->textBox11);
			this->groupBox4->Controls->Add(this->button6);
			this->groupBox4->Controls->Add(this->textBox12);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Location = System::Drawing::Point(1056, 579);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(360, 141);
			this->groupBox4->TabIndex = 22;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"真实设备检测";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(6, 33);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(113, 15);
			this->label23->TabIndex = 11;
			this->label23->Text = L"电压(单位伏特)";
			// 
			// textBox11
			// 
			this->textBox11->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox11->Location = System::Drawing::Point(125, 26);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(228, 30);
			this->textBox11->TabIndex = 10;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(153, 63);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 30);
			this->button6->TabIndex = 12;
			this->button6->Text = L"获取";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox12
			// 
			this->textBox12->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox12->Location = System::Drawing::Point(125, 100);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(228, 30);
			this->textBox12->TabIndex = 13;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 107);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(67, 15);
			this->label24->TabIndex = 14;
			this->label24->Text = L"结果电流";
			// 
			// 实验1实验内容1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1705, 807);
			this->Controls->Add(this->实验2);
			this->Name = L"实验1实验内容1";
			this->Text = L"bel";
			this->Load += gcnew System::EventHandler(this, &实验1实验内容1::实验1实验内容1_Load);
			this->实验2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1实验内容1_Load(System::Object^  sender, System::EventArgs^  e) {
		chart1Init();
	}
	private: System::Void tabPage2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void tabPage3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 void chart1Init() {
			 DateTime ^t = DateTime::Now;
			 Series ^s = chart1->Series[0];
			 chart1->Titles->Add("线性电阻器的伏安特性");
			 //chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "HH:mm:ss";
			 chart1->ChartAreas[0]->AxisX->Interval = 5;
			 chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;
			 chart1->ChartAreas[0]->AxisX->ScrollBar->Enabled = true;
			 chart1->ChartAreas[0]->AxisX->Title = "电压";
			 chart1->ChartAreas[0]->AxisY->Title = "电流";
			 chart1->ChartAreas[0]->AxisY->TextOrientation = TextOrientation::Horizontal;
		 }
private: System::Void listView1_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
	switch (e->Column) {
	case 1: MessageBox::Show(e->Column.ToString()); break;
	case 2: MessageBox::Show(e->Column.ToString()); break;
	case 3: MessageBox::Show(e->Column.ToString()); break;
	case 4: MessageBox::Show(e->Column.ToString()); break;
	case 5: MessageBox::Show(e->Column.ToString()); break;
	case 6: MessageBox::Show(e->Column.ToString()); break;
	default: break;
	}

}
private: System::Void listView2_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
	MessageBox::Show(e->Column.ToString());
}
private: System::Void listView3_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
	MessageBox::Show(e->Column.ToString());
}
private: System::Void listView4_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
	MessageBox::Show(e->Column.ToString());
}
private: System::Void listView5_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
	MessageBox::Show(e->Column.ToString());
}
private: System::Void listView6_ColumnClick(System::Object^  sender, System::Windows::Forms::ColumnClickEventArgs^  e) {
	MessageBox::Show(e->Column.ToString());
}
};
}
