#pragma once
extern bool ʵ��1ʵ��ע������IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ʵ��1ʵ��ע������ ժҪ
	/// </summary>
	public ref class ʵ��1ʵ��ע������ : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ʵ��ע������(void)
		{
			InitializeComponent();
			ʵ��1ʵ��ע������IsOpened = true;
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
		~ʵ��1ʵ��ע������()
		{
			if (t != nullptr) t->Abort();
			ʵ��1ʵ��ע������IsOpened = false;
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(3, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�塢ʵ��ע������";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(3, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(667, 55);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1�����������������ʱ����ѹ��Դ���Ӧ��С���������ӣ�Ӧʱ��ע�������������ó���25mA����ѹԴ������������߶�·��";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(3, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(667, 54);
			this->label3->TabIndex = 2;
			this->label3->Text = L"2�����в�ͬʵ��ʱ��Ӧ�ȹ����ѹ�͵���ֵ������ѡ���Ǳ�����̣���ʹ�Ǳ����̣��Ǳ�ļ����಻�ɽӴ�";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 55);
			this->button1->TabIndex = 3;
			this->button1->Text = L"�ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��1ʵ��ע������::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(30, 73);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(696, 350);
			this->panel1->TabIndex = 4;
			// 
			// ʵ��1ʵ��ע������
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 477);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Name = L"ʵ��1ʵ��ע������";
			this->Text = L"ʵ��1ʵ��ע������";
			this->Load += gcnew System::EventHandler(this, &ʵ��1ʵ��ע������::ʵ��1ʵ��ע������_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1ʵ��ע������_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		VoiceControl();
	}
			 Thread^t;
			 void VoiceControl()
			 {
				 if (t == nullptr) {
					 t = gcnew Thread(gcnew ThreadStart(this, &ʵ��1ʵ��ע������::Speek));
					 t->Start();
					 t->IsBackground = true;
					 return;
				 }
				 if (t->ThreadState.ToString()->Contains("Background"))
				 {
					 �ײ�^ �ײ�wnd = gcnew �ײ�("��ȴ��ʶ����");
					 �ײ�wnd->ShowDialog();
					 return;
				 }
				 t = gcnew Thread(gcnew ThreadStart(this, &ʵ��1ʵ��ע������::Speek));
				 t->Start();
				 t->IsBackground = true;
				 return;
			 }
			 void Speek() {
				 voice_speek(label1->Text);
				 voice_speek(label2->Text);
				 voice_speek(label3->Text);
			 }
};
}
