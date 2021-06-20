#pragma once

namespace Ekzamen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(223, 177);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Конвертация";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Рубли", L"Евро", L"Доллары" });
			this->comboBox1->Location = System::Drawing::Point(223, 101);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(220, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите сумму:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(223, 72);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Рубли", L"Евро", L"Доллары" });
			this->comboBox2->Location = System::Drawing::Point(223, 150);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(220, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите валюты конвертации";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(186, 247);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(205, 77);
			this->textBox2->TabIndex = 6;
			this->textBox2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(182, 231);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Количество конвертированной валюты:";
			this->label3->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(247, 331);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"OK";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(610, 419);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ buff = comboBox1->Text;
		String^ res = comboBox2->Text;
		String^ S1 = textBox1->Text;
		double y = Convert::ToDouble(S1);
		
		if (comboBox1->SelectedIndex == 0 && comboBox2->SelectedIndex == 0)
		{
			textBox2->Text = Convert::ToString(y);
		}
		if (comboBox1->SelectedIndex == 0 && comboBox2->SelectedIndex == 1)
		{
			textBox2->Text = Convert::ToString(y/86.66);
		}
		if (comboBox1->SelectedIndex == 0 && comboBox2->SelectedIndex == 2)
		{
			textBox2->Text = Convert::ToString(y*0.014);
		}
		if (comboBox1->SelectedIndex == 1 && comboBox2->SelectedIndex == 0)
		{
			textBox2->Text = Convert::ToString(y*86.66);
		}
		if (comboBox1->SelectedIndex == 1 && comboBox2->SelectedIndex == 1)
		{
			textBox2->Text = Convert::ToString(y);
		}
		if (comboBox1->SelectedIndex == 1 && comboBox2->SelectedIndex == 2)
		{
			textBox2->Text = Convert::ToString(y*1.2);
		}
		if (comboBox1->SelectedIndex == 2 && comboBox2->SelectedIndex == 0)
		{
			textBox2->Text = Convert::ToString(y*72.2);
		}
		if (comboBox1->SelectedIndex == 2 && comboBox2->SelectedIndex == 1)
		{
			textBox2->Text = Convert::ToString(y/1.2);
		}
		if (comboBox1->SelectedIndex == 2 && comboBox2->SelectedIndex == 2)
		{
			textBox2->Text = Convert::ToString(y);
		}
		textBox2->Show();
		label3->Show();
		button2->Show();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Hide();
		label3->Hide();
		button2->Hide();
	}
};
}
