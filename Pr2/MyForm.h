#pragma once
#include "math.h"

namespace Pr2{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;


	private: System::Windows::Forms::RichTextBox^ resultBox;
	private: System::Windows::Forms::Button^ submitButton;
	private: System::Windows::Forms::Button^ clearButton;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->resultBox = (gcnew System::Windows::Forms::RichTextBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"ma", L"ba", L"ha" });
			this->comboBox1->Location = System::Drawing::Point(369, 35);
			this->comboBox1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(199, 33);
			this->comboBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label1->Location = System::Drawing::Point(125, 115);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(156, 111);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 27);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label2->Location = System::Drawing::Point(125, 189);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"b";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(156, 185);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 27);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label3->Location = System::Drawing::Point(125, 271);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"c";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(156, 260);
			this->textBox3->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 27);
			this->textBox3->TabIndex = 6;
			// 
			// resultBox
			// 
			this->resultBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultBox->ForeColor = System::Drawing::Color::Purple;
			this->resultBox->Location = System::Drawing::Point(624, 115);
			this->resultBox->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->resultBox->Name = L"resultBox";
			this->resultBox->Size = System::Drawing::Size(368, 245);
			this->resultBox->TabIndex = 9;
			this->resultBox->Text = L"";
			// 
			// submitButton
			// 
			this->submitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->submitButton->ForeColor = System::Drawing::Color::Blue;
			this->submitButton->Location = System::Drawing::Point(129, 456);
			this->submitButton->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(246, 64);
			this->submitButton->TabIndex = 10;
			this->submitButton->Text = L"Обчислити";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &MyForm::submitButton_Click);
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearButton->ForeColor = System::Drawing::Color::DarkGreen;
			this->clearButton->Location = System::Drawing::Point(624, 456);
			this->clearButton->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(230, 64);
			this->clearButton->TabIndex = 11;
			this->clearButton->Text = L"Очистити";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 606);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->resultBox);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::DarkMagenta;
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		resultBox->Clear();
		float a, b, c, p, ma, ba, ha;
		int n = comboBox1->SelectedIndex;

		a = System::Convert::ToDouble(textBox1->Text);
		b = System::Convert::ToDouble(textBox2->Text);
		c = System::Convert::ToDouble(textBox3->Text);

		switch (n)
		{
		case 0:
			ma = (0.5) * sqrt(2 * (pow(b, 2) + pow(c, 2)) - pow(a, 2));
			resultBox->AppendText(comboBox1->Text + "=" + Convert::ToString(ma));
			break;
		case 1:
			ba = ((sqrt(b * c * pow((b + c), 2) - (a * a))) / (b + c));
			resultBox->AppendText(comboBox1->Text + "=" + Convert::ToString(ba));
			break;
		case 2:
			p = (a + b + c) / 2;
			ha = (2 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
			resultBox->AppendText("p=" + Convert::ToString(p) + "\n" + comboBox1->Text + "=" + Convert::ToString(ha));
			break;
		};
	}
	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
		resultBox->Clear();
	}
	};
}