#pragma once
#include "tool.h"

extern bool ����������ʵ������IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ����������ʵ������ ժҪ
	/// </summary>
	public ref class ����������ʵ������ : public System::Windows::Forms::Form
	{
	public:
		����������ʵ������(void)
		{
			InitializeComponent();
			����������ʵ������IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
	
			
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~����������ʵ������()
		{
			����������ʵ������IsOpened = false;
			v->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBoxI1;
	private: System::Windows::Forms::TextBox^  textBoxI2;
	private: System::Windows::Forms::TextBox^  textBoxI3;
	private: System::Windows::Forms::TextBox^  textBoxE1;




	private: System::Windows::Forms::TextBox^  textBoxUAF;

	private: System::Windows::Forms::TextBox^  textBoxUAB;

	private: System::Windows::Forms::TextBox^  textBoxUAD;
	private: System::Windows::Forms::TextBox^  textBoxUCD;


	private: System::Windows::Forms::TextBox^  textBoxUDE;
	private: System::Windows::Forms::TextBox^  textBoxE2;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button2;




	protected:





	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(����������ʵ������::typeid));
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
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxI1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxI3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxE1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUAF = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUAB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUAD = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUCD = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUDE = (gcnew System::Windows::Forms::TextBox());
			this->textBoxE2 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->dataGridView1->Location = System::Drawing::Point(0, 665);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 27;
			this->dataGridView1->Size = System::Drawing::Size(1655, 182);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &����������ʵ������::dataGridView1_CellContentClick);
			this->dataGridView1->ColumnHeaderMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &����������ʵ������::dataGridView1_ColumnHeaderMouseClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"��ȡ";
			this->Column1->Name = L"Column1";
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"��ȡ";
			this->Column2->Name = L"Column2";
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"��ȡ";
			this->Column3->Name = L"Column3";
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"��ȡ";
			this->Column4->Name = L"Column4";
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"��ȡ";
			this->Column5->Name = L"Column5";
			this->Column5->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"��ȡ";
			this->Column6->Name = L"Column6";
			this->Column6->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"��ȡ";
			this->Column7->Name = L"Column7";
			this->Column7->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"��ȡ";
			this->Column8->Name = L"Column8";
			this->Column8->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"��ȡ";
			this->Column9->Name = L"Column9";
			this->Column9->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"��ȡ";
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
			this->panel1->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(814, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(803, 329);
			this->panel1->TabIndex = 7;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->Location = System::Drawing::Point(3, 245);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(747, 23);
			this->label19->TabIndex = 7;
			this->label19->Text = L"5�������ñ�ֱ������·��Դ������Ԫ���ϵĵ�ѹֵ������¼��";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(3, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(777, 51);
			this->label5->TabIndex = 5;
			this->label5->Text = L"4����������ͷ�ֱ��������֧·���������������У���������¼����ֵ��";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(3, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(793, 52);
			this->label4->TabIndex = 4;
			this->label4->Text = L"3����Ϥ������ͷ�Ľṹ����������ͷ�����˽������ñ�ġ������������ˡ�";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(3, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ʵ������";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(681, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"�����ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &����������ʵ������::button1_Click_1);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(3, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(793, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1��ʵ��ǰ�������趨����֧·�ĵ����ο�������ͼ�е�I1��I2��I3��ʾ������Ϥ��·�ṹ�����ո����صĲ���ʹ�÷�����";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(3, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(793, 48);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2�����������ϰΣ�����������·�С��ֱ���·ֱ����ѹԴ�����·����E1��12V��E2��6V��";
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
			// textBoxI1
			// 
			this->textBoxI1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxI1->Location = System::Drawing::Point(218, 20);
			this->textBoxI1->Name = L"textBoxI1";
			this->textBoxI1->Size = System::Drawing::Size(100, 30);
			this->textBoxI1->TabIndex = 10;
			// 
			// textBoxI2
			// 
			this->textBoxI2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxI2->Location = System::Drawing::Point(539, 20);
			this->textBoxI2->Name = L"textBoxI2";
			this->textBoxI2->Size = System::Drawing::Size(100, 30);
			this->textBoxI2->TabIndex = 11;
			// 
			// textBoxI3
			// 
			this->textBoxI3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxI3->Location = System::Drawing::Point(331, 193);
			this->textBoxI3->Name = L"textBoxI3";
			this->textBoxI3->Size = System::Drawing::Size(100, 30);
			this->textBoxI3->TabIndex = 12;
			// 
			// textBoxE1
			// 
			this->textBoxE1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxE1->Location = System::Drawing::Point(77, 366);
			this->textBoxE1->Name = L"textBoxE1";
			this->textBoxE1->Size = System::Drawing::Size(100, 30);
			this->textBoxE1->TabIndex = 13;
			// 
			// textBoxUAF
			// 
			this->textBoxUAF->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxUAF->Location = System::Drawing::Point(479, 598);
			this->textBoxUAF->Name = L"textBoxUAF";
			this->textBoxUAF->Size = System::Drawing::Size(100, 30);
			this->textBoxUAF->TabIndex = 14;
			// 
			// textBoxUAB
			// 
			this->textBoxUAB->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxUAB->Location = System::Drawing::Point(256, 598);
			this->textBoxUAB->Name = L"textBoxUAB";
			this->textBoxUAB->Size = System::Drawing::Size(100, 30);
			this->textBoxUAB->TabIndex = 15;
			// 
			// textBoxUAD
			// 
			this->textBoxUAD->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxUAD->Location = System::Drawing::Point(331, 311);
			this->textBoxUAD->Name = L"textBoxUAD";
			this->textBoxUAD->Size = System::Drawing::Size(100, 30);
			this->textBoxUAD->TabIndex = 16;
			// 
			// textBoxUCD
			// 
			this->textBoxUCD->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxUCD->Location = System::Drawing::Point(77, 70);
			this->textBoxUCD->Name = L"textBoxUCD";
			this->textBoxUCD->Size = System::Drawing::Size(100, 30);
			this->textBoxUCD->TabIndex = 17;
			// 
			// textBoxUDE
			// 
			this->textBoxUDE->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxUDE->Location = System::Drawing::Point(630, 193);
			this->textBoxUDE->Name = L"textBoxUDE";
			this->textBoxUDE->Size = System::Drawing::Size(100, 30);
			this->textBoxUDE->TabIndex = 18;
			// 
			// textBoxE2
			// 
			this->textBoxE2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBoxE2->Location = System::Drawing::Point(630, 366);
			this->textBoxE2->Name = L"textBoxE2";
			this->textBoxE2->Size = System::Drawing::Size(100, 30);
			this->textBoxE2->TabIndex = 19;
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
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(546, 288);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 35);
			this->button2->TabIndex = 32;
			this->button2->Text = L"ֹͣ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &����������ʵ������::button2_Click);
			// 
			// ����������ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1655, 847);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBoxE2);
			this->Controls->Add(this->textBoxUDE);
			this->Controls->Add(this->textBoxUCD);
			this->Controls->Add(this->textBoxUAD);
			this->Controls->Add(this->textBoxUAB);
			this->Controls->Add(this->textBoxUAF);
			this->Controls->Add(this->textBoxE1);
			this->Controls->Add(this->textBoxI3);
			this->Controls->Add(this->textBoxI2);
			this->Controls->Add(this->textBoxI1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"����������ʵ������";
			this->Text = L"����������ʵ������";
			this->Load += gcnew System::EventHandler(this, &����������ʵ������::����������ʵ������_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����������ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
		dataGridView1Load();
		dataGridView1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(134)));
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
			 
			 void dataGridView1Load() {

				 dataGridView1->Rows->Add();
				 dataGridView1->Rows[0]->HeaderCell->Value = "������";
				 dataGridView1->Rows[0]->Cells[0]->Value = "I1��mA��";
				 dataGridView1->Rows[0]->Cells[1]->Value = "I2��mA��";
				 dataGridView1->Rows[0]->Cells[2]->Value = "I3��mA��";
				 dataGridView1->Rows[0]->Cells[3]->Value = "E1��v��";
				 dataGridView1->Rows[0]->Cells[4]->Value = "E2��v��";
				 dataGridView1->Rows[0]->Cells[5]->Value = "UFA��v��";
				 dataGridView1->Rows[0]->Cells[6]->Value = "UAB��v��";
				 dataGridView1->Rows[0]->Cells[7]->Value = "UAD��v��";
				 dataGridView1->Rows[0]->Cells[8]->Value = "UCD��v��";
				 dataGridView1->Rows[0]->Cells[9]->Value = "UDE��v��";

				 dataGridView1->Rows->Add();
				 dataGridView1->Rows[1]->HeaderCell->Value = "����ֵ";

				 dataGridView1->Rows->Add();
				 dataGridView1->Rows[2]->HeaderCell->Value = "����ֵ";
				 
				 
				 dataGridView1->Rows[3]->HeaderCell->Value = "������";

				 dataGridView1->RowHeadersWidth = 200;

			 }
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
private: System::Void dataGridView1_ColumnHeaderMouseClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {


	textBoxI1->ForeColor = Color::Black;
	textBoxI2->ForeColor = Color::Black;
	textBoxI3->ForeColor = Color::Black;
	textBoxE1->ForeColor = Color::Black;
	textBoxE2->ForeColor = Color::Black;
	textBoxUAF->ForeColor = Color::Black;
	textBoxUAB->ForeColor = Color::Black;
	textBoxUAD->ForeColor = Color::Black;
	textBoxUCD->ForeColor = Color::Black;
	textBoxUDE->ForeColor = Color::Black;

	switch (e->ColumnIndex)
	{
	case 0:
		S_PLCRecv Spr1 = global::sh->GetliKongData();
		textBoxI1->Text = global::IntToFormatFloatString(Spr1.I); 
		textBoxI1->ForeColor = Color::Red; 
		break;
	case 1:
		S_PLCRecv Spr2 = global::sh->GetliKongData();
		textBoxI2->Text = global::IntToFormatFloatString(Spr2.I);
		textBoxI2->ForeColor = Color::Red; break;
	case 2:
		S_PLCRecv Spr3 = global::sh->GetliKongData();
		textBoxI3->Text = global::IntToFormatFloatString(Spr3.I); 
		textBoxI3->ForeColor = Color::Red; break;
	case 3:
		S_PLCRecv Spr4 = global::sh->GetliKongData();
		textBoxE1->Text = global::IntToFormatFloatString(Spr4.U); 
		textBoxE1->ForeColor = Color::Red; break;
	case 4:
		S_PLCRecv Spr5 = global::sh->GetliKongData();
		textBoxE2->Text = global::IntToFormatFloatString(Spr5.U);
		textBoxE2->ForeColor = Color::Red; break;
	case 5:
		S_PLCRecv Spr6 = global::sh->GetliKongData();
		textBoxUAF->Text = global::IntToFormatFloatString(Spr6.U); 
		textBoxUAF->ForeColor = Color::Red; break;
	case 6:
		S_PLCRecv Spr7 = global::sh->GetliKongData();
		textBoxUAB->Text = global::IntToFormatFloatString(Spr7.U);
		textBoxUAB->ForeColor = Color::Red; break;
	case 7:
		S_PLCRecv Spr8 = global::sh->GetliKongData();
		textBoxUAD->Text = global::IntToFormatFloatString(Spr8.U);
		textBoxUAD->ForeColor = Color::Red; break;
	case 8:
		S_PLCRecv Spr9 = global::sh->GetliKongData();
		textBoxUCD->Text = global::IntToFormatFloatString(Spr9.U); 
		textBoxUCD->ForeColor = Color::Red; break;
	case 9:
		S_PLCRecv Spr10 = global::sh->GetliKongData();
		textBoxUDE->Text = global::IntToFormatFloatString(Spr10.U); 
		textBoxUDE->ForeColor = Color::Red; break;
	default:;
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
};
}
