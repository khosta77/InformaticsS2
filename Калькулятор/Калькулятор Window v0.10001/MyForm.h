#pragma once


namespace КалькуляторWindowv010001 {

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
	private: System::Windows::Forms::Button^ btn9;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnDivision;
	private: System::Windows::Forms::Button^ btnMultiplication;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnEqually;
	private: System::Windows::Forms::Button^ btnZnak;
	private: System::Windows::Forms::Button^ btnDecimal;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ MSave;
	private: System::Windows::Forms::Button^ MRead;
	private: System::Windows::Forms::Button^ MClear;
	private: System::Windows::Forms::Button^ MMinus;
	private: System::Windows::Forms::Button^ MPlus;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnEqually = (gcnew System::Windows::Forms::Button());
			this->btnZnak = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnC = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->MSave = (gcnew System::Windows::Forms::Button());
			this->MRead = (gcnew System::Windows::Forms::Button());
			this->MClear = (gcnew System::Windows::Forms::Button());
			this->MMinus = (gcnew System::Windows::Forms::Button());
			this->MPlus = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(412, 34);
			this->textBox1->TabIndex = 1;
			// 
			// btn9
			// 
			this->btn9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(12, 92);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(76, 62);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"7";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn8
			// 
			this->btn8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(94, 92);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(74, 62);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn7
			// 
			this->btn7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(174, 92);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(84, 62);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"9";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn6
			// 
			this->btn6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(12, 160);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(76, 63);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"4";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn5
			// 
			this->btn5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(94, 160);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(74, 63);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn4
			// 
			this->btn4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(174, 160);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(84, 63);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"6";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn3
			// 
			this->btn3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(12, 229);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(76, 66);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"1";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn2
			// 
			this->btn2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(94, 229);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(74, 66);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn1
			// 
			this->btn1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(174, 229);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(84, 66);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"3";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btn0
			// 
			this->btn0->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(94, 301);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(74, 66);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDivision->Location = System::Drawing::Point(264, 92);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(74, 62);
			this->btnDivision->TabIndex = 0;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &MyForm::btnDivision_Click);
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMultiplication->Location = System::Drawing::Point(264, 160);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(74, 63);
			this->btnMultiplication->TabIndex = 0;
			this->btnMultiplication->Text = L"*";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &MyForm::btnMultiplication_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPlus->Location = System::Drawing::Point(264, 229);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(74, 66);
			this->btnPlus->TabIndex = 0;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMinus->Location = System::Drawing::Point(264, 301);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(74, 66);
			this->btnMinus->TabIndex = 0;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// btnEqually
			// 
			this->btnEqually->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnEqually->Location = System::Drawing::Point(344, 301);
			this->btnEqually->Name = L"btnEqually";
			this->btnEqually->Size = System::Drawing::Size(80, 66);
			this->btnEqually->TabIndex = 0;
			this->btnEqually->Text = L"=";
			this->btnEqually->UseVisualStyleBackColor = true;
			this->btnEqually->Click += gcnew System::EventHandler(this, &MyForm::btnEqually_Click);
			// 
			// btnZnak
			// 
			this->btnZnak->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnZnak->Location = System::Drawing::Point(11, 301);
			this->btnZnak->Name = L"btnZnak";
			this->btnZnak->Size = System::Drawing::Size(77, 66);
			this->btnZnak->TabIndex = 3;
			this->btnZnak->Text = L"+/-";
			this->btnZnak->UseVisualStyleBackColor = true;
			this->btnZnak->Click += gcnew System::EventHandler(this, &MyForm::btnZnak_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDecimal->Location = System::Drawing::Point(174, 301);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(84, 66);
			this->btnDecimal->TabIndex = 4;
			this->btnDecimal->Text = L",";
			this->btnDecimal->UseVisualStyleBackColor = true;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_Click);
			// 
			// btnCE
			// 
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCE->Location = System::Drawing::Point(344, 229);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(80, 66);
			this->btnCE->TabIndex = 5;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::btnCE_Click);
			// 
			// btnC
			// 
			this->btnC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnC->Location = System::Drawing::Point(344, 160);
			this->btnC->Name = L"btnC";
			this->btnC->Size = System::Drawing::Size(80, 63);
			this->btnC->TabIndex = 6;
			this->btnC->Text = L"C";
			this->btnC->UseVisualStyleBackColor = true;
			this->btnC->Click += gcnew System::EventHandler(this, &MyForm::btnC_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnExit->Location = System::Drawing::Point(344, 92);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(80, 62);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// MSave
			// 
			this->MSave->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MSave->Location = System::Drawing::Point(11, 373);
			this->MSave->Name = L"MSave";
			this->MSave->Size = System::Drawing::Size(77, 69);
			this->MSave->TabIndex = 8;
			this->MSave->Text = L"MS";
			this->MSave->UseVisualStyleBackColor = true;
			this->MSave->Click += gcnew System::EventHandler(this, &MyForm::MSave_Click);
			// 
			// MRead
			// 
			this->MRead->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MRead->Location = System::Drawing::Point(94, 373);
			this->MRead->Name = L"MRead";
			this->MRead->Size = System::Drawing::Size(74, 69);
			this->MRead->TabIndex = 9;
			this->MRead->Text = L"MR";
			this->MRead->UseVisualStyleBackColor = true;
			this->MRead->Click += gcnew System::EventHandler(this, &MyForm::MRead_Click);
			// 
			// MClear
			// 
			this->MClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MClear->Location = System::Drawing::Point(174, 373);
			this->MClear->Name = L"MClear";
			this->MClear->Size = System::Drawing::Size(84, 69);
			this->MClear->TabIndex = 10;
			this->MClear->Text = L"MC";
			this->MClear->UseVisualStyleBackColor = true;
			this->MClear->Click += gcnew System::EventHandler(this, &MyForm::MClear_Click);
			// 
			// MMinus
			// 
			this->MMinus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MMinus->Location = System::Drawing::Point(264, 373);
			this->MMinus->Name = L"MMinus";
			this->MMinus->Size = System::Drawing::Size(74, 69);
			this->MMinus->TabIndex = 11;
			this->MMinus->Text = L"M-";
			this->MMinus->UseVisualStyleBackColor = true;
			this->MMinus->Click += gcnew System::EventHandler(this, &MyForm::MMinus_Click);
			// 
			// MPlus
			// 
			this->MPlus->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MPlus->Location = System::Drawing::Point(344, 373);
			this->MPlus->Name = L"MPlus";
			this->MPlus->Size = System::Drawing::Size(80, 69);
			this->MPlus->TabIndex = 12;
			this->MPlus->Text = L"M+";
			this->MPlus->UseVisualStyleBackColor = true;
			this->MPlus->Click += gcnew System::EventHandler(this, &MyForm::MPlus_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 443);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(251, 26);
			this->label1->TabIndex = 13;
			this->label1->Text = L"В памяти: ничего нет \r\n";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(12, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(412, 34);
			this->textBox2->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(436, 480);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->MPlus);
			this->Controls->Add(this->MMinus);
			this->Controls->Add(this->MClear);
			this->Controls->Add(this->MRead);
			this->Controls->Add(this->MSave);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnC);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnZnak);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnEqually);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//=======================================================================================
	// Переменные

	double a = 0; // число а начвальное
	double z = 0; // число z запоминающее
	double Memory; // фича с запоминанием числа 
	double M;
	bool Memoryacctive = false; // ну MC MR M+ M- не должныже работать если нет числа в мемори 
	bool MReads = true; // если в винде вводить число после вставки памяти то оно с нуля начинается 
	bool Equally = false;// для цикличного равно
	bool Znak = false; // 0. чтоб работало 
	bool ZnakZ = false; // ошибка Павла
	bool AntiA= false; // контроль операции
	bool AntiMem = false; // контрольпамяти
	bool AntiChislo = false; // контроль числа
	bool many = false;
	bool AntiError = true; // если происошел мискликлик при выборе действия то в нормальном калькуляторе это не кретично, спомощью этой переменной тоже
	int num = 0; // переменная для ввода числа
	int deistvie = 0; // переменная для математических операций
	int AntiEqually = 1;
	int AntiZero = 1;

	//=======================================================================================
	// Функции
	/*
	Ошибки павел нашел, я хз как их исправить надо подписать еще счто то 
	
	*/
	// ввод числа, предусмотрен ввод дроби и целого числа 
	void chislo(int c) { 
		// проверка если вводим число после равно
		// Если после равно мы начнем ввод числа то все должно сбросится
		if (Equally) { 
			AllSbros();
			z = 0;
			textBox2->Text = System::Convert::ToString("");
			Equally = false;
		}
		AntiError = true; // когда начнем вводить число то чтобы значение ну это как его ну вообще это.
		//проверка чтения памяти 
		if (!MReads) {
			ANUMSbros();
			MReads = true;
		}
		if (AntiChislo) ANUMSbros();
		if (AntiA) ANUMSbros();
		many = false;
		AntiA = false;
		AntiMem = false;
		AntiChislo = false;
        //проверка памяти
		if (MReads) { // Проверка чтения
			// проверка исла что вводим целое или нет
			if (num >= 0) { //ввод положительного числа
				if (c == 0) {
					if (num == 0) {//проверка первого символа
						rabota_chislo(0);//вызов функции проверки введения а 
						num++;
						textBox1->Text = System::Convert::ToString(a);
						
					}
					else {
						num_contrlNoZero();
						rabota_chislo(0);
						num++;
						textBox1->Text = System::Convert::ToString(a);
					}
				}
				if (num == 0) {
					rabota_chislo(c);
					num++;
					textBox1->Text = System::Convert::ToString(a);
				}
				else {
					num_contrlNoZero();
					rabota_chislo(c);
					num++;
					textBox1->Text = System::Convert::ToString(a);
				}
			}
			else {
				if (c == 0) {
					if (num == (-1))
						textBox1->Text = System::Convert::ToString(a + ",0");
					else
						textBox1->Text = System::Convert::ToString(a + "0");
					--num;
				}
				else {
						rabota_chislo(c);
						--num;
						if (ZnakZ) { //
							a *= (-1); //
							ZnakZ = false; // 
						} //
					textBox1->Text = System::Convert::ToString(a);
				}
			}
		}
	} // функция прибавления цифр их запоминания в а ( по плану а должна быть другой длать но пусть будет вводимое число 

	// математические операции до нажатия равно
	void math_operation(int n) {
		if (Equally) a = z;
		if (deistvie != 0 && AntiEqually==1) { // проверка равенства действия операции тк по умолчанию ноль 
			if (AntiError) {// если мы начинаем щелкать по действиям то происходит сброс 
				switch (deistvie) {
				case 1: // Деление  
					z = z / a;
					break;
				case 2: // Умножение
					z = z * a;
					break;
				case 3: // Сложение
					z = z + a;
					break;
				case 4: // Отрицание 
					z = z - a;
					break;
				}
				a = z;
				AntiChislo = true;
				many = true;
				textBox1->Text = System::Convert::ToString(z);
				AntiError++;
			}
			else AntiError = false;
			if (deistvie == 1 && AntiError == 1 && a == 0) { // проверка деления на ноль мне лень думать че до как потом по этому все сброшк 
				textBox1->Text = System::Convert::ToString("На 0 делить нельзя:) Все сброшено");
				ALLSbros();
				Memory = 0;
				Memoryacctive = false;
				label1->Text = L"В памяти: ничего нет ";
				AntiError++;
			}
		}
		else { // если изначально ничего не было 
			if (z == 0) // если мы(кто мы то ?) нажимаем равно то зтс с большой вероятностью не равен ноль 
				z = a;
			AntiChislo = true;
			Equally = false;
			AntiError = false;
			AntiEqually = 1;
			textBox1->Text = System::Convert::ToString(a);
		}
	}
	
	// при нажатии на кнопку равно вызываеится эта функция которая считает равенство
	void Equalle() {
		Equally = true; // для цикличного равно
		if (deistvie == 1 && a == 0) { // проверка на деление на ноль
			textBox1->Text = System::Convert::ToString("На 0 делить нельзя:) Все сброшено");
			Memory = 0;
			Memoryacctive = false;
		    label1->Text = L"В памяти: ничего нет ";
			ALLSbros();
		}
		else {
			switch (deistvie) {
			case 1:
				textBox2->Text = System::Convert::ToString(z + " / " + a);
				z = z / a;
				break;
			case 2:
				textBox2->Text = System::Convert::ToString(z + " * " + a);
				z = z * a;
				break;
			case 3:
				textBox2->Text = System::Convert::ToString(z + " + " + a);
				z = z + a;
				break;
			case 4:
				textBox2->Text = System::Convert::ToString(z + " - " + a);
				z = z - a;
				break;
			}
			textBox1->Text = System::Convert::ToString(z);
			AntiEqually++;
			num = 0;
		}
	}

	// Если чмчло выводится большее нуле 
	void num_contrlNoZero() {
		double mnogitel = 1;
		for (int i = 0; i < num; i++)
			mnogitel *= 10;
		if ((a / mnogitel) > 0) a *= 10;
		if ((a / mnogitel) < 0) a *= 10;
	}

	// если вводится дрробь
	double num_contrlZero() {
		double mnogitel = 1;
		for (int i = 0; i > num; i--)
			mnogitel /= 10;
		return mnogitel;
	}

	//0, проверка
	void znak_control() {
		if (Znak) {
			if (a < 0 || a>-1) {
				a *= (-1);
				Znak = false;
			}
		}
	}

	//суммирование и отрицание числа 
	void rabota_chislo(double x) {
		if (num >= 0) {
			if (a < 0) 
				a -= x;
			else 
				a += x;
		}
		else {
			if (num <= (-2)) {
				if (a < 0)
					a -= (x * num_contrlZero());
				else
					a += (x * num_contrlZero());
			}
			else {
				if (a < 0) { //
					a -= (0.1 * x); // 
				} //
				else //
					a += (0.1 * x);
				znak_control();
			}
		}
	}
	//=======================================================================================
	// цель функции сократить колличество строк
	void easySbros() {
		if (z == 0) // если нажимаем равно то з с большой вероятностью не равен ноль 
			z = a;
		a = 0;
		num = 0;
		AntiError = false;
		AntiEqually = 1;
	}
	
	// сброс всего для экномии строк
	void AllSbros() {
		a = 0;
		num = 0;
		deistvie = 0;
	}

	// СБРОС ВООБЩЕ ВСЕГО в двух моментах используется для экономии строк
	void ALLSbros() {
		a = 0; 
		z = 0;
		Equally = false;
	    Znak = false;
		num = 0;
	    deistvie = 0;
		AntiError = true; 
		textBox2->Text = System::Convert::ToString("Все было сброшено");
	}

	//Экономия строк
	void ANUMSbros() {
		a = 0;
		num = 0;
	}

	// шоб красиво было 
	void krasota() {
		if (deistvie != 0) {
			switch (deistvie)
			{
			case 1:
				textBox2->Text = System::Convert::ToString(z + " /");
				break;
			case 2:
				textBox2->Text = System::Convert::ToString(z + " *");
				break;
			case 3:
				textBox2->Text = System::Convert::ToString(z + " +");
				break;
			case 4:
				textBox2->Text = System::Convert::ToString(z + " -");
				break;
			}
		}
	}

	//=======================================================================================
	// Ввод цифр
	private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int C;
		C = System::Convert::ToDouble(((Button^)sender) -> Text);
		chislo(C);
	}
	//=======================================================================================
    // / * + -
    private: System::Void btnDivision_Click(System::Object^ sender, System::EventArgs^ e) {
			math_operation(1);
			deistvie = 1;
			AntiError = false;
			krasota();
    }
    private: System::Void btnMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
			math_operation(2);
			deistvie = 2;
			AntiError = false;
			krasota();
    }
    private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
			math_operation(3);
			deistvie = 3;
			AntiError = false;
			krasota();
    }
    private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
			math_operation(4);
			deistvie = 4;
			AntiError = false;
			krasota();
    }
    //=======================================================================================
	// =
    private: System::Void btnEqually_Click(System::Object^ sender, System::EventArgs^ e) {
		if (deistvie != 0) {
			Equalle();		
		}
    }
    //=======================================================================================
    // +/-
    private: System::Void btnZnak_Click(System::Object^ sender, System::EventArgs^ e) {

		if (Equally && AntiEqually != 1) { // здесь возможна ошибка
			z = z * (-1);
			textBox1->Text = System::Convert::ToString(z);
		}
		else {
			a = a * (-1);
			Znak = true;
			textBox1->Text = System::Convert::ToString(a);
			if (a != 0 && num == -1) { //
				textBox1->Text = System::Convert::ToString(a + ","); //
				ZnakZ = true; //
			} //
			if (a == 0 && num < 0 && AntiZero != 1) {
				Znak = false;
				textBox1->Text = System::Convert::ToString("0,");
			}
			if (a == 0 && num < 0 && AntiZero == 1) {
				textBox1->Text = System::Convert::ToString("-0,");
				AntiZero++;
			}
			else AntiZero = 1;
		}
    }
    //=======================================================================================
	// ,
    private: System::Void btnDecimal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Equally) {
			AllSbros();
			z = 0;
			textBox2->Text = System::Convert::ToString("");
			Equally = false;
			textBox1->Text = System::Convert::ToString(a + ",");
			num = (-1);
		}
		else {
			if (many) {
				a = 0;
				textBox1->Text = System::Convert::ToString(a + ",");
				num = (-1);
				AntiChislo = false;
			}
			else {
				if (Znak)
					if(a==0) // это добавил
					   textBox1->Text = System::Convert::ToString("-" + a + ",");
					else // это добавил
					   textBox1->Text = System::Convert::ToString(a + ","); // это добавил
				else
					textBox1->Text = System::Convert::ToString(a + ",");
				num = (-1);
			}
		}
    }
    //=======================================================================================
	// CE и C
    private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
		a = 0;
		num = 0;
		textBox1->Text = System::Convert::ToString(a);
    }
    private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
		ALLSbros();
		textBox1->Text = System::Convert::ToString(a);
		textBox2->Text = System::Convert::ToString(" ");
    }
    //=======================================================================================
	// Exit
    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
    }
    //=======================================================================================
	// MS MR MC M- M+
    private: System::Void MSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Equally) {
			Memory = z;
			M = Memory;
			AntiMem = true;
		}
		else
			Memory = a;
		label1->Text = L"В памяти: " + Memory;
		Memoryacctive = true;
		AntiA = true;
    }
    private: System::Void MRead_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Memoryacctive) {
			ANUMSbros();
			a = Memory;
			textBox1->Text = System::Convert::ToString(a);
			MReads = false;
		}
    }
    private: System::Void MClear_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Memoryacctive) {
			Memory = 0;
			Memoryacctive = false;
			label1->Text = L"В памяти: ничего нет ";
		}
    } 
    private: System::Void MMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Memoryacctive) {
			if (AntiMem) 
				Memory -= M;
			else {
				Memory -= a;
			}
				label1->Text = L"В памяти: " + Memory;
		}
    }
    private: System::Void MPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Memoryacctive) {
			if (AntiMem)
				Memory += M;
			else {
				Memory += a;
			}
			label1->Text = L"В памяти: " + Memory;
		}
    }
	//=======================================================================================
};
}
