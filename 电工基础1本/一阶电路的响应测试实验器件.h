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
		~һ�׵�·����Ӧ����ʵ������()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button3;
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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listView1->Font = (gcnew System::Drawing::Font(L"����", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listView1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(725, 234);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(606, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 40);
			this->button1->TabIndex = 8;
			this->button1->Text = L"�ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Location = System::Drawing::Point(479, 265);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 40);
			this->button3->TabIndex = 7;
			this->button3->Text = L"ֹͣ";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// һ�׵�·����Ӧ����ʵ������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(749, 470);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listView1);
			this->Name = L"һ�׵�·����Ӧ����ʵ������";
			this->Text = L"һ�׵�·����Ӧ����ʵ������";
			this->Load += gcnew System::EventHandler(this, &һ�׵�·����Ӧ����ʵ������::һ�׵�·����Ӧ����ʵ������_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void һ�׵�·����Ӧ����ʵ������_Load(System::Object^  sender, System::EventArgs^  e) {
		listView1->Columns->Add("���");
		listView1->Columns->Add("����");
		listView1->Columns->Add("�ͺ�����");
		listView1->Columns->Add("��ע");
		listView1->Items->Add("1");
		listView1->Items[0]->SubItems->Add("�����źŷ�����");
		listView1->Items[0]->SubItems->Add("");
		listView1->Items[0]->SubItems->Add("��Դ��");
		listView1->Items->Add("2");
		listView1->Items[1]->SubItems->Add("˫��ʾ����");
		listView1->Items[1]->SubItems->Add("");
		listView1->Items[1]->SubItems->Add("ѡ��");
		listView1->Items->Add("3");
		listView1->Items[2]->SubItems->Add("һ��/���׶�̬��·");
		listView1->Items[2]->SubItems->Add("");
		listView1->Items[2]->SubItems->Add("DG01");
		for (int i = 0; i < 4; i++) {
			listView1->Columns[i]->Width = -2;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		global::voice->Speak(listView1->Items[0]->SubItems[0]->Text+ listView1->Items[0]->SubItems[1]->Text + listView1->Items[0]->SubItems[2]->Text + listView1->Items[0]->SubItems[3]->Text
		+"��" +listView1->Items[1]->SubItems[0]->Text + listView1->Items[1]->SubItems[1]->Text + listView1->Items[1]->SubItems[2]->Text + listView1->Items[1]->SubItems[3]->Text
			+"��" + listView1->Items[2]->SubItems[0]->Text + listView1->Items[2]->SubItems[1]->Text + listView1->Items[2]->SubItems[2]->Text + listView1->Items[2]->SubItems[3]->Text
		);

	}
};
}
