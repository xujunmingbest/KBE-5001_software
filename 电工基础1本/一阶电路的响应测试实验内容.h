#pragma once

namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// һ�׵�·����Ӧ����ʵ������ ժҪ
	/// </summary>
	public ref class һ�׵�·����Ӧ����ʵ������ : public System::Windows::Forms::Form
	{
	public:
		һ�׵�·����Ӧ����ʵ������(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~һ�׵�·����Ӧ����ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: _LogBox::LogBox^  logBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->logBox1 = (gcnew _LogBox::LogBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"R��30K����C��1000PF��K2��K11�պϣ������Ͽ���,Um��3V��F��1KHz",
					L"R��10K����C��0.1��F��K1��K16�պϣ������Ͽ���,Um��3V��F��1KHz", L"C��0.01��F��R��100������K4��K6�պϣ������Ͽ���,��Um��2V��F =1KHz��"
			});
			this->comboBox1->Location = System::Drawing::Point(33, 33);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(598, 26);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"��ѡ���·����";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->logBox1);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->groupBox1->Location = System::Drawing::Point(22, 24);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1623, 672);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ʵ���������";
			// 
			// logBox1
			// 
			this->logBox1->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->logBox1->Location = System::Drawing::Point(885, 113);
			this->logBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->logBox1->Name = L"logBox1";
			this->logBox1->Size = System::Drawing::Size(689, 456);
			this->logBox1->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(33, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(822, 456);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(673, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"��ȡ���ν�ͼ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(736, 601);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 34);
			this->button2->TabIndex = 4;
			this->button2->Text = L"�ɼ��ϴ�";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button2_Click);
			// 
			// һ�׵�·����Ӧ����ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1700, 1000);
			this->Controls->Add(this->groupBox1);
			this->Name = L"һ�׵�·����Ӧ����ʵ������";
			this->Text = L"һ�׵�·����Ӧ����ʵ������";
			this->Load += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::һ�׵�·����Ӧ����ʵ������_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void һ�׵�·����Ӧ����ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^FileName = gcnew String(Grades[6].c_str()) + "-" + comboBox1->SelectedIndex + "-" + global::userName + ".bmp";
	if (oscillograph::GetOscilloscopePrtScnBmp(T_to_string(FileName))) {
		logBox1->LogInfo( FileName + " ��ͼ�ɹ�");
		pictureBox1->ImageLocation = "bmp/" + FileName;
	}
	else {
		logBox1->LogErr(comboBox1->Text + "��ͼʧ��");
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
