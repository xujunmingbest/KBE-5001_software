#pragma once

namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ����ԭ��ʵ������ ժҪ
	/// </summary>
	public ref class ����ԭ��ʵ������ : public System::Windows::Forms::Form
	{
	public:
		����ԭ��ʵ������(void)
		{
			InitializeComponent();
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			listView1Load();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

		void listView1Load() {
			listView1->Columns->Add("���");
			listView1->Columns->Add("����");
			listView1->Columns->Add("�ͺ�����");
			listView1->Columns->Add("��ע");

			listView1->Items->Add("1");
			listView1->Items[0]->SubItems->Add("�����Ǳ����");
			listView1->Items[0]->SubItems->Add("CL01");
			listView1->Items[0]->SubItems->Add("ѡ��");

			listView1->Items->Add("2");
			listView1->Items[1]->SubItems->Add("�ɵ�ֱ����ѹ��Դ");
			listView1->Items[1]->SubItems->Add("0��30V  ˫��");
			listView1->Items[1]->SubItems->Add("��Դ��");

			listView1->Items->Add("3");
			listView1->Items[2]->SubItems->Add("���Ӷ���");
			listView1->Items[2]->SubItems->Add("");
			listView1->Items[2]->SubItems->Add("DG01");

			listView1->Items->Add("4");
			listView1->Items[3]->SubItems->Add("���������");
			listView1->Items[3]->SubItems->Add("");
			listView1->Items[3]->SubItems->Add("���");

			for (int i = 0; i < 4; i++) {
				listView1->Columns[i]->Width = -2;
			}
		}


	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~����ԭ��ʵ������()
		{
			voice->Close();
			if (t != nullptr) t->Abort();
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// ����������������
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(����ԭ��ʵ������::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->FullRowSelect = true;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(12, 22);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(1285, 247);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &����ԭ��ʵ������::listView1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(94, 879);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"�����Ǳ����CL01";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(516, 879);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"�ɵ�ֱ����ѹ��Դ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(966, 879);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DG1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(1387, 879);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"���������";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 338);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(390, 520);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &����ԭ��ʵ������::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(809, 390);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(351, 468);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &����ԭ��ʵ������::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(428, 390);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(351, 468);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &����ԭ��ʵ������::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1196, 566);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(390, 292);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &����ԭ��ʵ������::pictureBox4_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"������", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(12, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 42);
			this->button1->TabIndex = 10;
			this->button1->Text = L"��ʾ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &����ԭ��ʵ������::button1_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &����ԭ��ʵ������::toolTip1_Popup);
			// 
			// ����ԭ��ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1730, 940);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Name = L"����ԭ��ʵ������";
			this->Text = L"����ԭ��ʵ������";
			this->Load += gcnew System::EventHandler(this, &����ԭ��ʵ������::����ԭ��ʵ������_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����ԭ��ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
		toolTip1->SetToolTip(pictureBox1, label1->Text);
		toolTip1->SetToolTip(pictureBox3, label2->Text);
		toolTip1->SetToolTip(pictureBox2, label3->Text);
		toolTip1->SetToolTip(pictureBox4, label4->Text);
	}
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		voice->Speak(label2->Text);
	}
			 Thread^ t;
			 Voice^voice = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (t != nullptr) t->Abort();
		t = gcnew Thread(gcnew ThreadStart(this, &����ԭ��ʵ������::display));
		t->Start();
	}

			 void ListViewChangeColor(int Itemindex) {
				 for (int i = 0; i < 4; i++) {
					 if (i == Itemindex) {
						 listView1->Items[i]->BackColor = Color::Red;
						 continue;
					 }
					 listView1->Items[i]->BackColor = Color::White;
				 }
			 }
			 void display() {
				 pictureBox1->Visible = false;
				 label1->Visible = false;

				 pictureBox3->Visible = false;
				 label2->Visible = false;

				 pictureBox2->Visible = false;
				 label3->Visible = false;

				 pictureBox4->Visible = false;
				 label4->Visible = false;

				 ListViewChangeColor(0);
				 voice->Speak("�����Ǳ����CL01");
				 pictureBox1->Visible = true;
				 label1->Visible = true;
				 Sleep(5000);

				 ListViewChangeColor(1);
				 voice->Speak("�ɵ�ֱ����ѹ��Դ0��30V˫��");
				 pictureBox3->Visible = true;
				 label2->Visible = true;
				 Thread::Sleep(6000);

				 ListViewChangeColor(2);
				 voice->Speak("DG01");
				 pictureBox2->Visible = true;
				 label3->Visible = true;
				 Thread::Sleep(3000);

				 ListViewChangeColor(3);
				 voice->Speak("���������");
				 pictureBox4->Visible = true;
				 label4->Visible = true;
				 Thread::Sleep(2000);

				 ListViewChangeColor(-1);
			 }
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

		voice->Speak(label1->Text);
	}
	private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {


	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		voice->Speak(label3->Text);

	}
	private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
		voice->Speak(label4->Text);
	}
	};
};

