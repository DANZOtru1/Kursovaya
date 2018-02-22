#pragma once
#include "MyForm.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Name2
	/// </summary>
	public ref class Name2 : public System::Windows::Forms::Form
	{
	private:
		String^ Name1;
	public:
		Name2(void)
		{
			InitializeComponent();
		}
		Name2(String^ name1)
		{
			InitializeComponent();
			this->Name1 = name1;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Name2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Продолжить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Name2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите имя второго игрока :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->MaxLength = 13;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Name2::textBox1_KeyPress);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(257, 25);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(20, 20);
			this->button2->TabIndex = 4;
			this->button2->Text = L"\?";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Name2::button2_Click);
			// 
			// Name2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 102);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Name2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ввод имени";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Name2 = textBox1->Text;
		if (Name2->Length > 0) {
			for (int i = 0; i < Name2->Length; i++) {
				if (((int)Name2[i] < 1040 || (int)Name2[i] > 1103) && (int)Name2[i] != 8 
					&& (int)Name2[i] != 1025 && (int)Name2[i] != 1105 && (int)Name2[i] != 45) {
					MessageBox::Show("Введите свое имя используя кириллицу",
						"Ошибка", MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}
			}
			MyForm^ f2 = gcnew MyForm(Name1, Name2);
			f2->Show();
			this->Close();
		}
		else {
			MessageBox::Show("\t Вы ничего не ввели! \n Введите свое имя используя кириллицу",
				"Ошибка", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (((int)e->KeyChar < 1040 || (int)e->KeyChar > 1103) && (int)e->KeyChar != 8 && (int)e->KeyChar != 1025 && (int)e->KeyChar != 1105 && (int)e->KeyChar != 45) {
			e->KeyChar = Char(0);
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("Для ввода имени используйте только символы кириллицы. 13 символов - максимум.",
		"Правила ввода", MessageBoxButtons::OK,
		MessageBoxIcon::Information);
}
};
}
