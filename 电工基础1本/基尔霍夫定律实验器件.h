#pragma once


extern bool 基尔霍夫定律实验器件IsOpened;
namespace 电工基础1本 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// 基尔霍夫定律实验器件 摘要
	/// </summary>
	public ref class 基尔霍夫定律实验器件 : public System::Windows::Forms::Form
	{
	public:
		基尔霍夫定律实验器件(void)
		{
			InitializeComponent();
			基尔霍夫定律实验器件IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("宋体", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			listView1Load();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

		void listView1Load() {
			listView1->Columns->Add("序号");
			listView1->Columns->Add("名称");
			listView1->Columns->Add("型号与规格");
			listView1->Columns->Add("备注");

			listView1->Items->Add("1");
			listView1->Items[0]->SubItems->Add("测量仪表挂箱");
			listView1->Items[0]->SubItems->Add("CL01");
			listView1->Items[0]->SubItems->Add("选配");

			listView1->Items->Add("2");
			listView1->Items[1]->SubItems->Add("可调直流稳压电源");
			listView1->Items[1]->SubItems->Add("0～30V  双组");
			listView1->Items[1]->SubItems->Add("电源屏");

			listView1->Items->Add("3");
			listView1->Items[2]->SubItems->Add("基尔霍夫定理");
			listView1->Items[2]->SubItems->Add("");
			listView1->Items[2]->SubItems->Add("DG01");

			listView1->Items->Add("4");
			listView1->Items[3]->SubItems->Add("电流检测线");
			listView1->Items[3]->SubItems->Add("");
			listView1->Items[3]->SubItems->Add("配件");

			for (int i = 0; i < 4; i++) {
				listView1->Columns[i]->Width = -2;
			}
		}


	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~基尔霍夫定律实验器件()
		{
			基尔霍夫定律实验器件IsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(基尔霍夫定律实验器件::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->listView1->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1730, 247);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(196, 851);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"测量仪表挂箱CL01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(618, 851);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"可调直流稳压电源";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(1068, 851);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DG1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"楷体", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1489, 851);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"电流检测线";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(114, 310);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(390, 520);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(911, 362);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(351, 468);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(530, 362);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(351, 468);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &基尔霍夫定律实验器件::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1298, 538);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(390, 292);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			// 
			// 基尔霍夫定律实验器件
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1730, 940);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"基尔霍夫定律实验器件";
			this->Text = L"基尔霍夫定律实验器件";
			this->Load += gcnew System::EventHandler(this, &基尔霍夫定律实验器件::基尔霍夫定律实验器件_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void 基尔霍夫定律实验器件_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
