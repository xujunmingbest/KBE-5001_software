#pragma once
extern bool ʵ��1ԭ��˵��IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ʵ��1ԭ��˵�� ժҪ
	/// </summary>
	public ref class ʵ��1ԭ��˵�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ԭ��˵��(void)
		{
			InitializeComponent();
			ʵ��1ԭ��˵��IsOpened = true;
			CheckForIllegalCrossThreadCalls = false;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));

			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1ԭ��˵��()
		{
			ʵ��1ԭ��˵��IsOpened = false;
			v->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����ԭ��˵��";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(730, 68);
			this->label2->TabIndex = 1;
			this->label2->Text = L"�κ�һ������Ԫ�������Կ��ø�Ԫ���ϵĶ˵�ѹU��ͨ����Ԫ���ĵ���I֮��ĺ�����ϵI=F��V������ʾ������I-Vƽ���ϵ�һ���������������������߳�Ϊ��Ԫ���ķ���������"
				L"�ߡ�";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(3, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(739, 43);
			this->label3->TabIndex = 2;
			this->label3->Text = L" 1�����Ե������ķ�������������һ��ͨ������ԭ���ֱ�ߣ���ͼ25-1��a��ʾ����ֱ�ߵ�б�ʵ��ڸõ������ĵ���ֵ��";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(742, 92);
			this->label4->TabIndex = 3;
			this->label4->Text = L" 2��һ��İ׳���ڹ���ʱ��˿���ڸ���״̬�����˿���������¶ȵ����߶�����ͨ���׳�Ƶĵ���Խ�����¶�Խ�ߣ���ֵҲԽ��һ����ݵġ�����衱�롰�ȵ��衱����ֵ��"
				L"������ʮ�������������ķ���������ͼ25-1��b������ʾ��";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(12, 328);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(712, 107);
			this->label5->TabIndex = 4;
			this->label5->Text = L"3��һ��İ뵼���������һ�������Ե���Ԫ������������ͼ25-l��C���ߡ�����ѹ����С��һ������ԼΪ0.2��0.3V�����ԼΪ0.5��0.7V�����������������ѹ"
				L"�������߶������������������ѹ����һֱ���ӵ�ʮ������ʮ��ʱ���䷴��������Ӻ�С�����Եؿ���Ϊ�㡣�ɼ��������ܾ��е��򵼵��ԣ��������ѹ�ӵù��ߣ��������ӵļ���ֵ"
				L"����ᵼ�¹��ӻ����𻵡�";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(12, 453);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(742, 112);
			this->label6->TabIndex = 5;
			this->label6->Text = L"4����ѹ��������һ������İ뵼������ܣ���������������ͨ���������ƣ����䷴�����Խ��ر���ͼ25-1��d���ߡ��ڷ����ѹ��ʼ����ʱ���䷴���������Ϊ�㣬������ѹ��"
				L"�ӵ�ĳһ��ֵʱ����Ϊ���ӵ���ѹֵ���и��ֲ�ͬ��ѹֵ����ѹ�ܣ�������ͻȻ���ӣ��Ժ����Ķ˵�ѹ��ά�ֺ㶨����������ӵķ����ѹ���߶�����";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(106, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 58);
			this->button1->TabIndex = 12;
			this->button1->Text = L"�����ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��1ԭ��˵��::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(106, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(757, 589);
			this->panel1->TabIndex = 13;
			// 
			// ʵ��1ԭ��˵��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 723);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"ʵ��1ԭ��˵��";
			this->Text = L"ʵ��1ԭ��˵��";
			this->Load += gcnew System::EventHandler(this, &ʵ��1ԭ��˵��::ʵ��1ԭ��˵��_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1ԭ��˵��_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 Voice ^ v = gcnew Voice;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		v->Speak(label1->Text + label2->Text
		+ label3->Text+ label4->Text + label5->Text
		+ label6->Text);
	}
};
}
