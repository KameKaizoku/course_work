#pragma once
#include "Patient.h"
namespace mycoursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PE
	/// </summary>
	public ref class PE : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form ^mainForm;
	public:

		PE(System::Windows::Forms::Form ^o)
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
		~PE()
		{
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
	private: System::Windows::Forms::MaskedTextBox^  pulse_b;
	private: System::Windows::Forms::MaskedTextBox^  sul_b;
	private: System::Windows::Forms::MaskedTextBox^  dial_b;
	private: System::Windows::Forms::MaskedTextBox^  dial_f;
	private: System::Windows::Forms::MaskedTextBox^  cil_f;
	private: System::Windows::Forms::MaskedTextBox^  a;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pulse_b = (gcnew System::Windows::Forms::MaskedTextBox());
			this->sul_b = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dial_b = (gcnew System::Windows::Forms::MaskedTextBox());
			this->dial_f = (gcnew System::Windows::Forms::MaskedTextBox());
			this->cil_f = (gcnew System::Windows::Forms::MaskedTextBox());
			this->a = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(130, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Показатели до нагрузки";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(130, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(231, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Показатели после нагрузки(20 приседаний)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Пульс";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Систолическое давление";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(143, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Диастолическое давление";
			// 
			// pulse_b
			// 
			this->pulse_b->Location = System::Drawing::Point(196, 31);
			this->pulse_b->Mask = L"999";
			this->pulse_b->Name = L"pulse_b";
			this->pulse_b->Size = System::Drawing::Size(28, 20);
			this->pulse_b->TabIndex = 5;
			// 
			// sul_b
			// 
			this->sul_b->Location = System::Drawing::Point(196, 57);
			this->sul_b->Mask = L"999";
			this->sul_b->Name = L"sul_b";
			this->sul_b->Size = System::Drawing::Size(28, 20);
			this->sul_b->TabIndex = 6;
			// 
			// dial_b
			// 
			this->dial_b->Location = System::Drawing::Point(196, 87);
			this->dial_b->Mask = L"999";
			this->dial_b->Name = L"dial_b";
			this->dial_b->Size = System::Drawing::Size(28, 20);
			this->dial_b->TabIndex = 7;
			// 
			// dial_f
			// 
			this->dial_f->Location = System::Drawing::Point(199, 223);
			this->dial_f->Mask = L"999";
			this->dial_f->Name = L"dial_f";
			this->dial_f->Size = System::Drawing::Size(28, 20);
			this->dial_f->TabIndex = 13;
			// 
			// cil_f
			// 
			this->cil_f->Location = System::Drawing::Point(199, 193);
			this->cil_f->Mask = L"999";
			this->cil_f->Name = L"cil_f";
			this->cil_f->Size = System::Drawing::Size(28, 20);
			this->cil_f->TabIndex = 12;
			// 
			// a
			// 
			this->a->Location = System::Drawing::Point(199, 167);
			this->a->Mask = L"999";
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(28, 20);
			this->a->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 230);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(143, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Диастолическое давление";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 13);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Систолическое давление";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 174);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Пульс";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(321, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Узнать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PE::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(44, 278);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(317, 20);
			this->textBox1->TabIndex = 15;
			this->textBox1->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(44, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PE::button2_Click);
			// 
			// PE
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 360);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dial_f);
			this->Controls->Add(this->cil_f);
			this->Controls->Add(this->a);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->dial_b);
			this->Controls->Add(this->sul_b);
			this->Controls->Add(this->pulse_b);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"PE";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" Приспособленность к физическим нагрузкам";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if ((pulse_b->Text!="") && (sul_b->Text!="")&& (dial_b->Text)!=""&& (a->Text!=""), (cil_f->Text!="")&& (dial_f->Text!=""))
		{
			Patient person(Convert::ToInt32(pulse_b->Text), Convert::ToInt32(sul_b->Text), Convert::ToInt32(dial_b->Text), Convert::ToInt32(a->Text), Convert::ToInt32(cil_f->Text), Convert::ToInt32(dial_f->Text));
			int res = person.is_pressure_normal();
			textBox1->Visible = true;
			if (res < 1 && res >= 0)
			{
				textBox1->ForeColor = System::Drawing::Color::Green;
				textBox1->Text = "Ваши показатели свидельствуют о благоприятной реакции сердечно сосудистой системы";
			}
			else
			{
				textBox1->ForeColor = System::Drawing::Color::Red;
				textBox1->Text = "Ваши показатели свидельствуют о неблагоприятной реакции сердечно сосудистой системы";
			}


		}

	};
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		mainForm->Show();
	}
};
}