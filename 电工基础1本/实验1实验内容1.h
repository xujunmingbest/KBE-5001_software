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
	using namespace System::Threading;
	/// <summary>
	/// 实验1实验内容1 摘要
	/// </summary>
	public ref class 实验1实验内容1 : public System::Windows::Forms::Form
	{
	public:
		实验1实验内容1(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			实验1实验内容1IsOpened = true;
			dataGridView1Load();
			/*
			listView2Load();
			listView3Load();
			listView4Load();
			listView5Load();
			listView6Load();
			*/
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			//this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		cli::array<Label^>^ a;

		void WaverInit() {
			label31->Visible = false;
			label15->Visible = false;
			label28->Visible = false;
			label29->Visible = false;
			label16->Visible = false;
			label25->Visible = false;
			label30->Visible = false;
		}

		void dataGridView1Load() {
			chart1->Titles->Add("  元件伏安特性");

			dataGridView1->Rows->Add();
			dataGridView1->Rows[0]->HeaderCell->Value = "U(v)";
			dataGridView1->Rows[0]->Cells[0]->Value = "0";
			dataGridView1->Rows[0]->Cells[1]->Value = "2";
			dataGridView1->Rows[0]->Cells[2]->Value = "4";
			dataGridView1->Rows[0]->Cells[3]->Value = "6";
			dataGridView1->Rows[0]->Cells[4]->Value = "8";
			dataGridView1->Rows[0]->Cells[5]->Value = "10";

			dataGridView1->Rows[1]->HeaderCell->Value = "I(mA)";
			dataGridView1->RowHeadersWidth = 100;
		}

		/*
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


		*/






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

	private: System::Windows::Forms::TabControl^  实验2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TabPage^  tabPage4;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label9;



private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
private: System::Windows::Forms::PictureBox^  pictureBox4;










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
private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  黏贴ToolStripMenuItem;
private: System::Windows::Forms::Button^  button7;

private: System::Windows::Forms::DataGridView^  dataGridView1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  添加;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;








private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Button^  button2;






private: System::ComponentModel::IContainer^  components;


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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(实验1实验内容1::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
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
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->黏贴ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->实验2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->添加 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1->SuspendLayout();
			this->实验2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
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
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->黏贴ToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(109, 28);
			// 
			// 黏贴ToolStripMenuItem
			// 
			this->黏贴ToolStripMenuItem->Name = L"黏贴ToolStripMenuItem";
			this->黏贴ToolStripMenuItem->Size = System::Drawing::Size(108, 24);
			this->黏贴ToolStripMenuItem->Text = L"黏贴";
			this->黏贴ToolStripMenuItem->Click += gcnew System::EventHandler(this, &实验1实验内容1::黏贴ToolStripMenuItem_Click);
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
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->label31);
			this->tabPage1->Controls->Add(this->label30);
			this->tabPage1->Controls->Add(this->label29);
			this->tabPage1->Controls->Add(this->label28);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->groupBox5);
			this->tabPage1->Controls->Add(this->label25);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1697, 778);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"实验1";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &实验1实验内容1::tabPage1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(662, 724);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 46);
			this->button2->TabIndex = 29;
			this->button2->Text = L"曲线闪动";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &实验1实验内容1::button2_Click);
			// 
			// label31
			// 
			this->label31->Location = System::Drawing::Point(86, 177);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(10, 135);
			this->label31->TabIndex = 28;
			// 
			// label30
			// 
			this->label30->Location = System::Drawing::Point(554, 365);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(10, 105);
			this->label30->TabIndex = 27;
			// 
			// label29
			// 
			this->label29->Location = System::Drawing::Point(554, 177);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(10, 105);
			this->label29->TabIndex = 26;
			// 
			// label28
			// 
			this->label28->Location = System::Drawing::Point(451, 167);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(113, 10);
			this->label28->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->Location = System::Drawing::Point(89, 470);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(475, 10);
			this->label16->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(89, 167);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(252, 10);
			this->label15->TabIndex = 23;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label26);
			this->groupBox5->Controls->Add(this->textBox13);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->textBox14);
			this->groupBox5->Controls->Add(this->label27);
			this->groupBox5->Location = System::Drawing::Point(920, 600);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(360, 141);
			this->groupBox5->TabIndex = 22;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"伏安特性实验数据";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 33);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(113, 15);
			this->label26->TabIndex = 11;
			this->label26->Text = L"电压(单位伏特)";
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox13->Location = System::Drawing::Point(125, 26);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(228, 30);
			this->textBox13->TabIndex = 10;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(153, 63);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 30);
			this->button8->TabIndex = 12;
			this->button8->Text = L"获取";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox14->Location = System::Drawing::Point(125, 100);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(228, 30);
			this->textBox14->TabIndex = 13;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 107);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(67, 15);
			this->label27->TabIndex = 14;
			this->label27->Text = L"结果电流";
			// 
			// label25
			// 
			this->label25->Location = System::Drawing::Point(86, 423);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(10, 54);
			this->label25->TabIndex = 21;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(20, 62);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(777, 430);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->添加, this->Column2,
					this->Column1, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(32, 579);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(705, 122);
			this->dataGridView1->TabIndex = 12;
			this->dataGridView1->ColumnHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &实验1实验内容1::dataGridView1_ColumnHeaderMouseClick);
			// 
			// 添加
			// 
			this->添加->HeaderText = L"添加";
			this->添加->Name = L"添加";
			this->添加->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"添加";
			this->Column2->Name = L"Column2";
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"添加";
			this->Column1->Name = L"Column1";
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"添加";
			this->Column3->Name = L"Column3";
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"添加";
			this->Column4->Name = L"Column4";
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"添加";
			this->Column5->Name = L"Column5";
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(755, 579);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 46);
			this->button7->TabIndex = 11;
			this->button7->Text = L"曲线生成";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &实验1实验内容1::button7_Click);
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
			this->chart1->Click += gcnew System::EventHandler(this, &实验1实验内容1::chart1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBox6);
			this->tabPage2->Controls->Add(this->chart3);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->pictureBox2);
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
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label4);
			this->groupBox6->Controls->Add(this->textBox1);
			this->groupBox6->Controls->Add(this->button1);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->label14);
			this->groupBox6->Location = System::Drawing::Point(997, 608);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(360, 141);
			this->groupBox6->TabIndex = 23;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"伏安特性实验数据";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 33);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"电压(单位伏特)";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(125, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(228, 30);
			this->textBox1->TabIndex = 10;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(153, 63);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 12;
			this->button1->Text = L"获取";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox2->Location = System::Drawing::Point(125, 100);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(228, 30);
			this->textBox2->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 107);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(67, 15);
			this->label14->TabIndex = 14;
			this->label14->Text = L"结果电流";
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
			// button3
			// 
			this->button3->Location = System::Drawing::Point(153, 63);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 12;
			this->button3->Text = L"获取";
			this->button3->UseVisualStyleBackColor = true;
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
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(6, 107);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 15);
			this->label17->TabIndex = 14;
			this->label17->Text = L"结果电流";
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->textBox9);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->textBox10);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Location = System::Drawing::Point(497, 517);
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
			// 实验1实验内容1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1705, 807);
			this->Controls->Add(this->实验2);
			this->Name = L"实验1实验内容1";
			this->Text = L"bel";
			this->Load += gcnew System::EventHandler(this, &实验1实验内容1::实验1实验内容1_Load);
			this->contextMenuStrip1->ResumeLayout(false);
			this->实验2->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void 实验1实验内容1_Load(System::Object^  sender, System::EventArgs^  e) {
		chart1Init();
		WaverInit();
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
private: System::Void listView1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	
	/*if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{
		contextMenuStrip1->Show(e->Location);
		ListViewItem ^li = listView1->GetItemAt(e->X, e->Y);//获得所在行
		if (li != nullptr)
		{
			ListViewItem::ListViewSubItem^ lii = li->GetSubItemAt(e->X, e->Y);//获得所在行的所在列
			if (lii != nullptr)
			{
				System::Windows::Forms::IDataObject^ iData = Clipboard::GetDataObject(); 
				lii->Text = (String^)iData->GetData(DataFormats::Text);
			}
		}
	}
	*/
}
private: System::Void tabPage1_Click_1(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void listView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Right)
	{
		contextMenuStrip1->Show(e->Location);
		ml = e;
	}
}
		 System::Windows::Forms::MouseEventArgs ^ml;
private: System::Void 黏贴ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Series ^s = chart1->Series[0];
	s->Points->Clear();
	//chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "HH:mm:ss";
	chart1->ChartAreas[0]->AxisX->Interval = 2;
	chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;
	chart1->ChartAreas[0]->AxisX->ScrollBar->Enabled = true;
	chart1->ChartAreas[0]->AxisX->Title = "电压";
	chart1->ChartAreas[0]->AxisY->Title = "电流";
	chart1->ChartAreas[0]->AxisY->TextOrientation = TextOrientation::Horizontal;
	for (int i = 0; i <= 5; i++) {
		s->Points->AddXY(dataGridView1->Rows[0]->Cells[i]->Value, dataGridView1->Rows[1]->Cells[i]->Value);
	}
}
private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	/*
	Waver ^w = gcnew Waver;
	w->ArrayInit(2,0);
	w->Add(label15);
	w->Add(label31);
	w->LabelWaver();*/
	return;
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_ColumnHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
	MessageBox::Show(e->ColumnIndex.ToString());

}
};
}
