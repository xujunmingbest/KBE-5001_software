#pragma once
#include "tool.h"

extern bool ʵ��1ʵ�鱨��IsOpened;
namespace �繤����1�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Threading;
	using namespace Microsoft::Speech::Synthesis;
	using namespace System::Media;
	/// <summary>
	/// ʵ��1ʵ�鱨�� ժҪ
	/// </summary>
	public ref class ʵ��1ʵ�鱨�� : public System::Windows::Forms::Form
	{
	public:
		ʵ��1ʵ�鱨��(void)
		{
			InitializeComponent();
			CheckForIllegalCrossThreadCalls = false;
			ʵ��1ʵ�鱨��IsOpened = true;
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, ((byte)(134)));
		}
		Voice^ v = gcnew Voice;
	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~ʵ��1ʵ�鱨��()
		{
			ʵ��1ʵ�鱨��IsOpened = false;
			v->Close();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::ComponentModel::IContainer^  components;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(16, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(288, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"�ߡ�ʵ�鱨��";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(3, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 87);
			this->label1->TabIndex = 5;
			this->label1->Text = L"1�����ݸ�ʵ�������ݣ��ֱ��ڷ���ֽ�ϻ��Ƴ�ƽ���ķ����������ߡ������ж����ܺ���ѹ�ܵ������������Ծ�Ҫ����ͬһ��ͼ�У����������ѹ��ȡΪ��ͬ�ı����ߣ���";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(3, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(288, 54);
			this->label2->TabIndex = 6;
			this->label2->Text = L"2������ʵ�������ܽᡢ���ɱ����Ԫ�������ԡ�";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(3, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(288, 54);
			this->label4->TabIndex = 7;
			this->label4->Text = L"3����Ҫ����������";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(3, 315);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(288, 54);
			this->label5->TabIndex = 8;
			this->label5->Text = L"4���ĵ���ἰ������";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(115, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(77, 58);
			this->button1->TabIndex = 10;
			this->button1->Text = L"�����ʶ�";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ʵ��1ʵ�鱨��::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &ʵ��1ʵ�鱨��::timer1_Tick);
			// 
			// chart1
			// 
			chartArea2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(629, 41);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"random";
			series2->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Int32;
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(501, 507);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->panel1->Location = System::Drawing::Point(115, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(494, 553);
			this->panel1->TabIndex = 11;
			// 
			// ʵ��1ʵ�鱨��
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1210, 669);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"ʵ��1ʵ�鱨��";
			this->Text = L"ʵ��1ʵ�鱨��";
			this->Load += gcnew System::EventHandler(this, &ʵ��1ʵ�鱨��::ʵ��1ʵ�鱨��_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ʵ��1ʵ�鱨��_Load(System::Object^  sender, System::EventArgs^  e) {
		chartInit();

	}

			 void chartInit() {
				 DateTime ^t = DateTime::Now;
				 Series ^s = chart1->Series[0]; 
				 chart1->Titles->Add("  Ԫ����������");
				 //chart1->ChartAreas[0]->AxisX->LabelStyle->Format = "HH:mm:ss";
				 chart1->ChartAreas[0]->AxisX->Interval = 5;
				 chart1->ChartAreas[0]->AxisX->ScrollBar->IsPositionedInside = true;
				 chart1->ChartAreas[0]->AxisX->ScrollBar->Enabled = true;
				 chart1->ChartAreas[0]->AxisX->Title = "��ѹ";
				 chart1->ChartAreas[0]->AxisY->Title = "����";
				 chart1->ChartAreas[0]->AxisY->TextOrientation = TextOrientation::Horizontal;
			 }
			 int a = 0;
			 
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	Random^ r = gcnew Random;
	Series ^s = chart1->Series[0];
	s->Points->AddXY(a++, a++);
}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		v->Speak(label3->Text+
			label1->Text+ label2->Text+ label4->Text+ label5->Text);
	}
};
}
