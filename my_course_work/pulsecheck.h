#pragma once
#include "Patient.h"
//#include "whattocheck.h"
#include "Error.h"
#include <vector>
//#include "cmath"
namespace mycoursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для pulsecheck
	/// </summary>
	public ref class pulsecheck : public System::Windows::Forms::Form
	{
	public:
	private: System::Windows::Forms::Form ^mainForm;
	public:

		pulsecheck( System::Windows::Forms::Form ^o )
		{
			mainForm = o;/*System::Windows::Forms::Form ^ o*/

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~pulsecheck()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  knowpulse;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::MaskedTextBox^  getpulse;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  deviation;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(pulsecheck::typeid));
			this->knowpulse = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->getpulse = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->deviation = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// knowpulse
			// 
			this->knowpulse->Location = System::Drawing::Point(250, 277);
			this->knowpulse->Name = L"knowpulse";
			this->knowpulse->Size = System::Drawing::Size(123, 23);
			this->knowpulse->TabIndex = 2;
			this->knowpulse->Text = L"Проверить пульс";
			this->knowpulse->UseVisualStyleBackColor = true;
			this->knowpulse->Click += gcnew System::EventHandler(this, &pulsecheck::knowpulse_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(106, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Показатель пульса";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox1->Location = System::Drawing::Point(11, 187);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(362, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			// 
			// getpulse
			// 
			this->getpulse->Location = System::Drawing::Point(233, 93);
			this->getpulse->Mask = L"000";
			this->getpulse->Name = L"getpulse";
			this->getpulse->Size = System::Drawing::Size(123, 20);
			this->getpulse->TabIndex = 7;
			this->getpulse->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &pulsecheck::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(403, 351);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->deviation);
			this->tabPage1->Controls->Add(this->knowpulse);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->getpulse);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(395, 325);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ввод данных";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(241, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"уд./с";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 233);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Отклонение от нормы на";
			this->label3->Visible = false;
			// 
			// deviation
			// 
			this->deviation->Enabled = false;
			this->deviation->Location = System::Drawing::Point(181, 226);
			this->deviation->Name = L"deviation";
			this->deviation->Size = System::Drawing::Size(54, 20);
			this->deviation->TabIndex = 10;
			this->deviation->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->deviation->Visible = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->chart1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(395, 325);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График изменения показателей";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(302, 292);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 27);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &pulsecheck::button2_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 3);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SemiTransparent;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Пульс";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(389, 319);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// pulsecheck
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 357);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"pulsecheck";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Проверка пульса";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void knowpulse_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace System::IO;
		StreamReader^ stream = gcnew StreamReader("dateofbirth.txt");
		int sex = Convert::ToInt32(stream->ReadLine());
		int date =Convert::ToInt32(stream->ReadLine());
		int month = Convert::ToInt32(stream->ReadLine());
		int year = Convert::ToInt32(stream->ReadLine());

		label3->Visible = false;
		label4->Visible = false;
		deviation->Visible = false;

		if (((getpulse->Text != ""))  && ((Convert::ToInt32(getpulse->Text) )<= 300))
		{
			Patient person(date, month, year, Convert::ToInt32( getpulse->Text));
			//getage->Text = Convert::ToString( person.your_age());
			person.your_age();
			String^ bakastring = gcnew System::String(person.is_pulse_normal().c_str());
			
			using namespace System::IO;

			try
			{
				StreamWriter ^file = gcnew StreamWriter("pulserates.txt",true);
				//StreamWriter ^file = gcnew StreamWriter("database.csv", true);
				//StreamWriter ^file = gcnew StreamWriter("database.csv");
				//file->Write("Имя: ");
				file->WriteLine(getpulse->Text);
				file->Close();
			}
			catch (...) {
				MessageBox::Show("Ошибка. данная запись не может быть создана");
			}
			textBox1->Visible = true;
			textBox1->Text = bakastring;

		if (bakastring == "Показатели не в норме")
			{	
				label3->Visible = true;
				label4->Visible = true;
				deviation->Visible = true;
			textBox1->ForeColor  = System::Drawing::Color::Red;
			label3->ForeColor = System::Drawing::Color::Red;
			label4->ForeColor = System::Drawing::Color::Red;
				
				//String^ newstring = gcnew System::String(person.deviant().c_str());
				deviation->Text = Convert::ToString(person.deviant());
			}
		else
		{
			textBox1->ForeColor = System::Drawing::Color::Green;
		}

		}
		else
		{
		
			Error^ f2 = gcnew Error();
			f2->ShowDialog();
			
		}
		//getage->Text = "";
		getpulse->Text = "";
		
	}
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Hide();
		whattocheck^ f2 = gcnew whattocheck();
		f2->ShowDialog();
	}*/


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	std::vector <int> pulses;
	using namespace System::IO;
	chart1->Series["Пульс"]->Points->Clear();
	StreamReader^ stream = gcnew StreamReader("pulserates.txt");
	while (String^ s = stream->ReadLine())
	{
		pulses.push_back(Convert::ToInt32(s));
	}
	int i = 1;
	if (pulses.size() != 0)
	{
		for (auto now : pulses)
		{
			chart1->Series["Пульс"]->Points->AddXY(i, now);
			i++;
		}
	}
	else
	{
		//this->Hide();
		Error^ f2 = gcnew Error();
		f2->ShowDialog();
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	mainForm->Show();
}
};
}
