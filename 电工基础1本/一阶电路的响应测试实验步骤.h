#pragma once

namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// һ�׵�·����Ӧ����ʵ�鲽�� ժҪ
	/// </summary>
	public ref class һ�׵�·����Ӧ����ʵ�鲽�� : public System::Windows::Forms::Form
	{
	public:
		һ�׵�·����Ӧ����ʵ�鲽��(void)
		{
			InitializeComponent();
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
		~һ�׵�·����Ӧ����ʵ�鲽��()
		{
			global::voice->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(һ�׵�·����Ӧ����ʵ�鲽��::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(816, 298);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(837, 237);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(816, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(788, 269);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(798, 724);
			this->panel1->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->Location = System::Drawing::Point(19, 434);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(731, 157);
			this->label5->TabIndex = 9;
			this->label5->Text = L"3��ѡ��̬���ϵ�R��CԪ���������ͼ6-2��a����ʾ��΢�ֵ�·����C��0.01��F��R��100������K4��K6�պϣ������Ͽ���\r\n��ͬ���ķ��������źţ�Um��2"
				L"V��F =1KHz�������£��۲Ⲣ��漤������Ӧ�Ĳ��Ρ�\r\n����Rֵ֮�����Եع۲����Ӧ��Ӱ�죬������¼����R����1M��ʱ��������������кα����ϵ�����\r\n";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(19, 353);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(731, 67);
			this->label4->TabIndex = 8;
			this->label4->Text = L"2. ��R��10K����C��0.1��F��K1��K16�պϣ������Ͽ������۲첢�����Ӧ�Ĳ��Σ���������Cֵ֮�����Եع۲����Ӧ��Ӱ�졣\r\n\r\n";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(19, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(747, 234);
			this->label3->TabIndex = 7;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(660, 668);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 40);
			this->button1->TabIndex = 6;
			this->button1->Text = L"�ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ�鲽��::button1_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(533, 668);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 40);
			this->button3->TabIndex = 5;
			this->button3->Text = L"ֹͣ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ�鲽��::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ʵ�鲽��";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(19, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(763, 57);
			this->label2->TabIndex = 1;
			this->label2->Text = L"ʵ����·��Ľṹ��ͼ6��3��ʾ������R��CԪ���Ĳ��ּ�����ֵ�������ص�ͨ��λ�õȵȡ�";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(1212, 547);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"ͼ6-3";
			// 
			// һ�׵�·����Ӧ����ʵ�鲽��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1727, 879);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"һ�׵�·����Ӧ����ʵ�鲽��";
			this->Text = L"һ�׵�·����Ӧ����ʵ�鲽��";
			this->Load += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ�鲽��::һ�׵�·����Ӧ����ʵ�鲽��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		global::voice->Speak(label1->Text+
			label2->Text + label3->Text + label4->Text + label5->Text  );
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	global::voice->Close();
}
private: System::Void һ�׵�·����Ӧ����ʵ�鲽��_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
