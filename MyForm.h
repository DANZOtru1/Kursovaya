#pragma once
#include "Game.h"
#include <iostream>
#include <string>
#include <fstream>

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Game *game = new Game();
		bool run;
		int b1, b2, b3, b4, b5, b6, b7, b8, b9, draw, d;
		int score1 = 0, score2 = 0;
		bool c1 = true;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
			 String^ Name2;
			 String^ Name1;
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
		MyForm(String^ name1, String^ name2)
		{
			InitializeComponent();
			this->Name1 = name1;
			this->Name2 = name2;
			ofstream fout;
			fout.open("Score.txt");
			fout << "0 0";
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;

	public:

	public:
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Игрок 1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Игрок 2:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 150);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(168, 400);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 150);
			this->button2->TabIndex = 5;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(324, 400);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 150);
			this->button3->TabIndex = 6;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 244);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(150, 150);
			this->button4->TabIndex = 7;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(168, 244);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 150);
			this->button5->TabIndex = 8;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(324, 244);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 150);
			this->button6->TabIndex = 9;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 88);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 150);
			this->button7->TabIndex = 10;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(168, 88);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 150);
			this->button8->TabIndex = 11;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Tahoma", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(324, 88);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 150);
			this->button9->TabIndex = 12;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(168, 31);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 36);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Обновить поле";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(67, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 15;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(67, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 16;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(411, 31);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(411, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(321, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Очки игрока 2:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(321, 31);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(84, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Очки игрока 1:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 562);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Крестики-нолики";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		label3->Text = Name1;
		label4->Text = Name2;
		label5->Text = "0";
		label6->Text = "0";
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button1->Text = "Х";
			run = true;
			button1->Enabled = false;
			b1 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button1->Text = "O";
			run = false;
			button1->Enabled = false;
			b1 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button2->Text = "Х";
			run = true;
			button2->Enabled = false;
			b2 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button2->Text = "O";
			run = false;
			button2->Enabled = false;
			b2 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button3->Text = "Х";
			run = true;
			button3->Enabled = false;
			b3 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button3->Text = "O";
			run = false;
			button3->Enabled = false;
			b3 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button4->Text = "Х";
			run = true;
			button4->Enabled = false;
			b4 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button4->Text = "O";
			run = false;
			button4->Enabled = false;
			b4 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button5->Text = "Х";
			run = true;
			button5->Enabled = false;
			b5 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button5->Text = "O";
			run = false;
			button5->Enabled = false;
			b5 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button6->Text = "Х";
			run = true;
			button6->Enabled = false;
			b6 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button6->Text = "O";
			run = false;
			button6->Enabled = false;
			b6 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button7->Text = "Х";
			run = true;
			button7->Enabled = false;
			b7 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button7->Text = "O";
			run = false;
			button7->Enabled = false;
			b7 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button8->Text = "Х";
			run = true;
			button8->Enabled = false;
			b8 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button8->Text = "O";
			run = false;
			button8->Enabled = false;
			b8 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((run == false) && (c1 == true)) {
			button9->Text = "Х";
			run = true;
			button9->Enabled = false;
			b9 = 1;
		}
		else if ((run == true) && (c1 == true)) {
			button9->Text = "O";
			run = false;
			button9->Enabled = false;
			b9 = 2;
		}
		draw += 1;
		Check();
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		c1 = true;
		run = false;
		b1 = 0;
		b2 = 0;
		b3 = 0;
		b4 = 0;
		b5 = 0;
		b6 = 0;
		b7 = 0;
		b8 = 0;
		b9 = 0;
		draw = 0;
		d = 0;
		button1->Enabled = true;
		button1->Text = " ";
		button2->Enabled = true;
		button2->Text = " ";
		button3->Enabled = true;
		button3->Text = " ";
		button4->Enabled = true;
		button4->Text = " ";
		button5->Enabled = true;
		button5->Text = " ";
		button6->Enabled = true;
		button6->Text = " ";
		button7->Enabled = true;
		button7->Text = " ";
		button8->Enabled = true;
		button8->Text = " ";
		button9->Enabled = true;
		button9->Text = " ";

	}
	private: void Check() {
		int gamer = game->Result(b1, b2, b3, b4, b5, b6, b7, b8, b9, draw, d, Name1, Name2, c1);
		if (gamer >= 0) {
			c1 = false;
		}
		score1 += gamer == 1 ? 100 : gamer == 0 ? 50 : 0;
		score2 += gamer == 2 ? 100 : gamer == 0 ? 50 : 0;
		label5->Text = Convert::ToString(score1);
		label6->Text = Convert::ToString(score2);
		game->Save_Score(score1, score2);
		if (gamer >= 1) {
			MessageBox::Show((gamer == 1 ? Name1 : Name2) + ", ты выиграл!",
				"Поздравление", MessageBoxButtons::OK,
				MessageBoxIcon::Asterisk);
		}
		else if (gamer == 0) {
			System::Windows::Forms::MessageBox::Show("Ничья!",
				"Оповещение", System::Windows::Forms::MessageBoxButtons::OK,
				System::Windows::Forms::MessageBoxIcon::Asterisk);
		}
	}
	};
}