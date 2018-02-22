#pragma once
#include "Name2.h"
namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Name1
	/// </summary>
	public ref class Name1 : public System::Windows::Forms::Form
	{
	public:
		Name1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Name1(bool &is_start)
		{
			InitializeComponent();
			is_start = true;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Name1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  btnname1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
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
			this->btnname1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnname1
			// 
			this->btnname1->Location = System::Drawing::Point(101, 64);
			this->btnname1->Name = L"btnname1";
			this->btnname1->Size = System::Drawing::Size(88, 23);
			this->btnname1->TabIndex = 0;
			this->btnname1->Text = L"Продолжить";
			this->btnname1->UseVisualStyleBackColor = true;
			this->btnname1->Click += gcnew System::EventHandler(this, &Name1::btnname1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 25);
			this->textBox1->MaxLength = 13;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Name1::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Name1::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Введите имя первого игрока :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(257, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(20, 20);
			this->button1->TabIndex = 3;
			this->button1->Text = L"\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Name1::button1_Click);
			// 
			// Name1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 102);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnname1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Name1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ввод имени";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnname1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ Name1 = textBox1->Text;
		if (Name1->Length > 0) {
			for (int i = 0; i < Name1->Length; i++) {
				if (((int)Name1[i] < 1040 || (int)Name1[i] > 1103) && (int)Name1[i] != 8 && (int)Name1[i] != 1025 && (int)Name1[i] != 1105 && (int)Name[i] != 45) {
					MessageBox::Show("Введите свое имя используя кириллицу",
						"Ошибка", MessageBoxButtons::OK,
						MessageBoxIcon::Error);
					return;
				}
			}
			Name2^ f2 = gcnew Name2(Name1);
			f2->Show();
			this->Close();
		}
		else {
			MessageBox::Show("\t Вы ничего не ввели!\n Введите свое имя используя кириллицу",
				"Ошибка", MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}
	private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (((int)e->KeyChar < 1040 || (int)e->KeyChar > 1103) && (int)e->KeyChar != 8
			&& (int)e->KeyChar != 1025 && (int)e->KeyChar != 1105 && (int)e->KeyChar != 45) {  
			e->KeyChar = Char(0);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("Для ввода имени используйте только символы кириллицы. 13 символов - максимум.",
			"Правила ввода", MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
