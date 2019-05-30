#pragma once
//include "addperson.h"
#include "pulsecheck.h"
#include "PE.h"
#include <string>

namespace mycoursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для whattocheck
	/// </summary>
	public ref class whattocheck : public System::Windows::Forms::Form
	{
	
	private: System::Windows::Forms::Form ^mainForm;
	public:

		whattocheck(void)
		{
			//mainForm = o;

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		whattocheck(System::Windows::Forms::Form ^ o)
		{
			mainForm = o;

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~whattocheck()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  topulse;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton1;



	protected:

	protected:





	protected:

	protected:



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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->topulse = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(58, 188);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 57);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выбрать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &whattocheck::button3_Click);
			// 
			// topulse
			// 
			this->topulse->AutoSize = true;
			this->topulse->Checked = true;
			this->topulse->Location = System::Drawing::Point(12, 90);
			this->topulse->Name = L"topulse";
			this->topulse->Size = System::Drawing::Size(116, 17);
			this->topulse->TabIndex = 4;
			this->topulse->TabStop = true;
			this->topulse->Text = L"Проверка пульса.";
			this->topulse->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(94, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Выберите вид проверки";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(12, 125);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(311, 17);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Проверка приспособленности к физическим нагрузкам";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &whattocheck::radioButton1_CheckedChanged);
			// 
			// whattocheck
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(333, 257);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->topulse);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"whattocheck";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string kk;
		using namespace System::IO;
		//int date = dateTimePicker1->Value.Day;
		//textBox1->Text = Convert::ToString(date);
		//int month = dateTimePicker1->Value.Month;
		//textBox1->Text = Convert::ToString(month);
		//kk = gcnew System::String(dateTimePicker1).c_str()); ;
		//std::string date1 = dateTimePicker1.Value.ToString("dd.MM.yyyy");
	//	StreamWriter ^file = gcnew StreamWriter("database.csv", true);
		//file->WriteLine(textBox1->Text, textBox2->Text, textBox3->Text);

		//DateTime theDate = dateTimePicker1.Value.Date;
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}*/
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		/*this->Hide();
		addperson^ form = gcnew addperson(this);
		form->ShowDialog();*/
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		/*this->Hide();
		mainForm->Show();*/
		if (topulse->Checked)
		{
			this->Hide();
			pulsecheck^ form = gcnew pulsecheck(this);
			form->ShowDialog();
		}
		else
		{
			this->Hide();
			PE^ form = gcnew PE(this);
			form->ShowDialog();
		}

	}
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	//label1->WordWrap = true;//"Проверка приспособленности\n сердечно-сосудистой системы к физическим нагрузкам"
}
};
}
