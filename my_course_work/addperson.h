#pragma once
#include "whattocheck.h"
#include "Error.h"
#include <ctime>
namespace mycoursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для addperson
	/// </summary>
	public ref class addperson : public System::Windows::Forms::Form
	{
	//private: System::Windows::Forms::Form ^mainForm;
	public:
		/*addperson(System::Windows::Forms::Form ^ o)
		{
			mainForm = o;
		
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}*/

		addperson(void)
		{
			//mainForm = o;

			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~addperson()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DateTimePicker^  chose_birth;
	private: System::Windows::Forms::MaskedTextBox^  putname;
	private: System::Windows::Forms::MaskedTextBox^  putphone;




	private: System::Windows::Forms::MaskedTextBox^  putpatronymic;

	private: System::Windows::Forms::MaskedTextBox^  putsurname;



	private: System::Windows::Forms::RadioButton^  male;
	private: System::Windows::Forms::RadioButton^  female;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(addperson::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chose_birth = (gcnew System::Windows::Forms::DateTimePicker());
			this->putname = (gcnew System::Windows::Forms::MaskedTextBox());
			this->putphone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->putpatronymic = (gcnew System::Windows::Forms::MaskedTextBox());
			this->putsurname = (gcnew System::Windows::Forms::MaskedTextBox());
			this->male = (gcnew System::Windows::Forms::RadioButton());
			this->female = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(57, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(294, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Сохранить данные";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &addperson::button1_Click);
			// 
			// chose_birth
			// 
			this->chose_birth->Location = System::Drawing::Point(195, 144);
			this->chose_birth->MaxDate = System::DateTime(2019, 5, 11, 0, 0, 0, 0);
			this->chose_birth->MinDate = System::DateTime(1873, 1, 1, 0, 0, 0, 0);
			this->chose_birth->Name = L"chose_birth";
			this->chose_birth->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->chose_birth->Size = System::Drawing::Size(156, 20);
			this->chose_birth->TabIndex = 5;
			this->chose_birth->Value = System::DateTime(2019, 5, 6, 1, 40, 43, 0);
			// 
			// putname
			// 
			this->putname->Location = System::Drawing::Point(195, 70);
			this->putname->Mask = L"LLLLLLLLLLLLLLLLLLLLLLLL";
			this->putname->Name = L"putname";
			this->putname->Size = System::Drawing::Size(156, 20);
			this->putname->TabIndex = 7;
			this->putname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// putphone
			// 
			this->putphone->Location = System::Drawing::Point(195, 180);
			this->putphone->Mask = L"+7 (000) 000-0000";
			this->putphone->Name = L"putphone";
			this->putphone->Size = System::Drawing::Size(156, 20);
			this->putphone->TabIndex = 9;
			this->putphone->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// putpatronymic
			// 
			this->putpatronymic->Location = System::Drawing::Point(195, 107);
			this->putpatronymic->Mask = L"LLLLLLLLLLLLLLLLLLLLLLLL";
			this->putpatronymic->Name = L"putpatronymic";
			this->putpatronymic->Size = System::Drawing::Size(156, 20);
			this->putpatronymic->TabIndex = 10;
			this->putpatronymic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// putsurname
			// 
			this->putsurname->Location = System::Drawing::Point(195, 32);
			this->putsurname->Mask = L"LLLLLLLLLLLLLLLLLLLLLLLL";
			this->putsurname->Name = L"putsurname";
			this->putsurname->Size = System::Drawing::Size(156, 20);
			this->putsurname->TabIndex = 11;
			this->putsurname->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// male
			// 
			this->male->AutoSize = true;
			this->male->Checked = true;
			this->male->Location = System::Drawing::Point(0, 8);
			this->male->Name = L"male";
			this->male->Size = System::Drawing::Size(69, 17);
			this->male->TabIndex = 14;
			this->male->TabStop = true;
			this->male->Text = L"мужчина";
			this->male->UseVisualStyleBackColor = true;
			// 
			// female
			// 
			this->female->AutoSize = true;
			this->female->Location = System::Drawing::Point(75, 8);
			this->female->Name = L"female";
			this->female->Size = System::Drawing::Size(72, 17);
			this->female->TabIndex = 15;
			this->female->TabStop = true;
			this->female->Text = L"женщина";
			this->female->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Фамилия";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(54, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Имя";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(54, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Отчество";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(54, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"Дата рождения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(54, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(93, 13);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Номер телефона";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(54, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Пол";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->male);
			this->groupBox1->Controls->Add(this->female);
			this->groupBox1->Location = System::Drawing::Point(195, 218);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(156, 36);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &addperson::groupBox1_Enter);
			// 
			// addperson
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(383, 323);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->putsurname);
			this->Controls->Add(this->putpatronymic);
			this->Controls->Add(this->putphone);
			this->Controls->Add(this->putname);
			this->Controls->Add(this->chose_birth);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"addperson";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Инициализация пользователя";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		int day = chose_birth->Value.Day;
		int month = chose_birth->Value.Month;
		int pyear = chose_birth->Value.Year;
		//yourage you( day , month, year);
		//textBox1->Text = Convert::ToString(you.patient_age());
		//int ye= chose_birth.
		//int sex = 
		
		
		//textBox1->Text =onvert::ToString(year + 1970);

		int gender;
		if (male->Checked == true) gender = 0;
		else  gender = 1;

		using namespace System::IO;

		try
		{
			//StreamWriter ^file = gcnew StreamWriter("pulserates.csv", true);
			StreamWriter ^file = gcnew StreamWriter("pulserates.txt");

			file->Close();
		}
		catch (...) {
			MessageBox::Show("Ошибка. данная запись не может быть создана");
		}

		try
		{
			
			StreamWriter ^file = gcnew StreamWriter("dateofbirth.txt");

					file->Close();
		}
		catch (...) {
			MessageBox::Show("Ошибка. данная запись не может быть создана");
		}
		if (putsurname->Text != ""
			&& putname->Text != ""
			&& putpatronymic->Text != ""
			&& putphone->Text != "")
		{
			try
			{

				StreamWriter ^file = gcnew StreamWriter("aboutperson.txt");
				file->WriteLine("Фамилия: " + putsurname->Text);
				file->WriteLine("Имя: " + putname->Text);
				file->WriteLine("Отчество: " + putpatronymic->Text);
				file->WriteLine("Дата рождения: " + day + "." + month + "." + pyear);
				file->WriteLine("Мобильный телефон: " + putphone->Text);
				if (male->Checked == true) file->WriteLine("Пол: Мужской");
				else  file->WriteLine("Пол: Женский");
				file->Close();
			}
			catch (...) {
				MessageBox::Show("Ошибка. данная запись не может быть создана");
			}

			try
			{

				StreamWriter ^file = gcnew StreamWriter("dateofbirth.txt", true);

				file->WriteLine(gender);
				file->WriteLine(day);
				file->WriteLine(month);
				file->WriteLine(pyear);


				file->Close();
			}
			catch (...) {
				MessageBox::Show("Ошибка. данная запись не может быть создана");
			}

			this->Hide();
			whattocheck^ f2 = gcnew whattocheck();
			f2->ShowDialog();
		}
		else
		{
			//this->Hide();
			Error^ f2 = gcnew Error();
			f2->ShowDialog();
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
		/*this->Hide();
		whattocheck^ f2 = gcnew whattocheck();
		f2->ShowDialog();*/
		/*this->Hide();               // Скрываем Форму2
		whattocheck^ form = this->Owner;  // Получаем указатель на владельца 
		form->Show(); //  Показываем владельца*/
	}
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
