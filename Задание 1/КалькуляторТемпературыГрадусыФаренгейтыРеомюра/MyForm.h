#pragma once

namespace КалькуляторТемпературыГрадусыФаренгейтыРеомюра {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnF;
	private: System::Windows::Forms::Button^ btnK;
	private: System::Windows::Forms::Button^ btnR;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblRead;
	private: System::Windows::Forms::TextBox^ textIn;
	private: System::Windows::Forms::TextBox^ textOut;
	private: System::Windows::Forms::Button^ btnExit;
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
			this->btnF = (gcnew System::Windows::Forms::Button());
			this->btnK = (gcnew System::Windows::Forms::Button());
			this->btnR = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblRead = (gcnew System::Windows::Forms::Label());
			this->textIn = (gcnew System::Windows::Forms::TextBox());
			this->textOut = (gcnew System::Windows::Forms::TextBox());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnF
			// 
			this->btnF->Location = System::Drawing::Point(12, 71);
			this->btnF->Name = L"btnF";
			this->btnF->Size = System::Drawing::Size(105, 47);
			this->btnF->TabIndex = 0;
			this->btnF->Text = L"Фаренгейты";
			this->btnF->UseVisualStyleBackColor = true;
			this->btnF->Click += gcnew System::EventHandler(this, &MyForm::btnF_Click);
			// 
			// btnK
			// 
			this->btnK->Location = System::Drawing::Point(123, 71);
			this->btnK->Name = L"btnK";
			this->btnK->Size = System::Drawing::Size(112, 47);
			this->btnK->TabIndex = 1;
			this->btnK->Text = L"Кельвины";
			this->btnK->UseVisualStyleBackColor = true;
			this->btnK->Click += gcnew System::EventHandler(this, &MyForm::btnK_Click);
			// 
			// btnR
			// 
			this->btnR->Location = System::Drawing::Point(241, 71);
			this->btnR->Name = L"btnR";
			this->btnR->Size = System::Drawing::Size(106, 47);
			this->btnR->TabIndex = 2;
			this->btnR->Text = L"Реомюра";
			this->btnR->UseVisualStyleBackColor = true;
			this->btnR->Click += gcnew System::EventHandler(this, &MyForm::btnR_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(285, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Введите температуру в градусах Цельсия";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->label2->Location = System::Drawing::Point(12, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Результат в ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->lblRead->AutoSize = true;
			this->lblRead->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->lblRead->Location = System::Drawing::Point(109, 131);
			this->lblRead->Name = L"lblRead";
			this->lblRead->Size = System::Drawing::Size(20, 17);
			this->lblRead->TabIndex = 5;
			this->lblRead->Text = L"...";
			this->lblRead->Click += gcnew System::EventHandler(this, &MyForm::lblRead_Click);
			// 
			// textIn
			// 
			this->textIn->Location = System::Drawing::Point(15, 43);
			this->textIn->Name = L"textIn";
			this->textIn->Size = System::Drawing::Size(332, 22);
			this->textIn->TabIndex = 7;
			this->textIn->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textOut
			// 
			this->textOut->Location = System::Drawing::Point(15, 163);
			this->textOut->Name = L"textOut";
			this->textOut->Size = System::Drawing::Size(332, 22);
			this->textOut->TabIndex = 8;
			this->textOut->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(241, 191);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(106, 40);
			this->btnExit->TabIndex = 9;
			this->btnExit->Text = L"Выход";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 243);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->textOut);
			this->Controls->Add(this->textIn);
			this->Controls->Add(this->lblRead);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnR);
			this->Controls->Add(this->btnK);
			this->Controls->Add(this->btnF);
			this->Name = L"MyForm";
			this->Text = L"Вычислитель t";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool Protect() { // функция защиты от неверного ввода
			if (textIn->Text->Length == 0) { return false; } // проверка есть ли вообще текст в текстбоксе
			for (int i = 0; i < textIn->Text->Length; i++) { // цикл для проверки
				if ((textIn->Text[i] >= '0') && (textIn->Text[i] <= '9') || (textIn->Text[i] == ',') || (textIn->Text[i] == '-')) {} // проверка введено ли число 
				else { return false; } // если кроме цифр что то еще есть выдает ошибку
			}
			return true;
	}

	private: System::Void btnF_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Protect()) { // Проверка того что собираемся преобразовать спомощью функции
			double C, F; // Ввводим переменные
			C = System::Convert::ToDouble(textIn->Text); // Наименнуем переменные
			F = (1.8 * C) + 32;
			lblRead->Text = L"Френгейтах"; // меняем "Табличку"
			textOut->Text = System::Convert::ToString(F); // вывод значения
		}
		else { // вывод ошибки
			lblRead->Text = L"ОШИБКА ВВОДА";
			textOut->Text = System::Convert::ToString(" ");
		}
	} // коментарий анологичен для следующих трех кнопок
	
    private: System::Void btnK_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Protect()) {
			double C, K;
			C = System::Convert::ToDouble(textIn->Text);
			K = C + 273;
			lblRead->Text = L"Кельвинах";
			textOut->Text = System::Convert::ToString(K);
		}
		else {
			lblRead->Text = L"ОШИБКА ВВОДА";
			textOut->Text = System::Convert::ToString(" ");
		}
	} // см коментарий к Фаренгейиам 
	 
    private: System::Void btnR_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Protect()) {
			double C, R;
			C = System::Convert::ToDouble(textIn->Text);
			R = C / 1.25;
			lblRead->Text = L"Реомюарах";
			textOut->Text = System::Convert::ToString(R);
		}
		else {
			lblRead->Text = L"ОШИБКА ВВОДА";
			textOut->Text = System::Convert::ToString(" ");
		}
	} // см коментарий к Фаренгейиам 
	
    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit(); // прекращает программу
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) { } //
    private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) { } //
    private: System::Void lblRead_Click(System::Object^ sender, System::EventArgs^ e) { } //
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) { } //
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) { } //
    };
}
