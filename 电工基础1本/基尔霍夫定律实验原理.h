#pragma once

extern bool ����������ʵ��ԭ��IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	/// <summary>
	/// ����������ʵ��ԭ�� ժҪ
	/// </summary>
	public ref class ����������ʵ��ԭ�� : public System::Windows::Forms::Form
	{
	public:
		����������ʵ��ԭ��(void)
		{
			InitializeComponent(); 
			CheckForIllegalCrossThreadCalls = false;
			����������ʵ��ԭ��IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("����", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
			Thread^ t = gcnew Thread(gcnew ThreadStart(this,&����������ʵ��ԭ��::adjustvideo));
		//	t->Start();
		}

		void adjustvideo() {
			Sleep(1000);
			axWindowsMediaPlayer1->Width = 900;
			axWindowsMediaPlayer1->Height = 900;
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~����������ʵ��ԭ��()
		{
			����������ʵ��ԭ��IsOpened = false;
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
	private: System::Windows::Forms::Panel^  panel1;
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::Button^  button1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(����������ʵ��ԭ��::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(3, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ԭ��˵��";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(3, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(542, 139);
			this->label2->TabIndex = 2;
			this->label2->Text = L"�����������ǵ�·�Ļ������ɡ�����ĳ��·�ĸ�֧·���������Ԫ�����˵ĵ�ѹ��Ӧ�ֱܷ������������������ɺ͵�ѹ���ɡ����Ե�·�е���һ���ڵ���ԣ�Ӧ�Ц�I��0�����κ�"
				L"һ���պϻ�·���ԣ�Ӧ�Ц�U��0��";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"����", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(3, 206);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(542, 55);
			this->label3->TabIndex = 3;
			this->label3->Text = L"������������ʱ����ע������������򣬴˷����Ԥ�������趨��";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(616, 341);
			this->panel1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(474, 257);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"�����ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &����������ʵ��ԭ��::button1_Click);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(699, 12);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(512, 314);
			this->axWindowsMediaPlayer1->TabIndex = 5;
			// 
			// ����������ʵ��ԭ��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1731, 838);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->panel1);
			this->Name = L"����������ʵ��ԭ��";
			this->Text = L"����������ʵ��ԭ��";
			this->Load += gcnew System::EventHandler(this, &����������ʵ��ԭ��::����������ʵ��ԭ��_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ����������ʵ��ԭ��_Load(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->Width = 1000;
		axWindowsMediaPlayer1->Height = 850;
	}
			 Voice ^v = gcnew Voice;
	
	private: void VideoClick(System::Object^  sender, AxWMPLib::_WMPOCXEvents_ClickEvent ^) {
		
	}
 
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		v->Speak( label1->Text + label2->Text + label3->Text);
	}
};
}
