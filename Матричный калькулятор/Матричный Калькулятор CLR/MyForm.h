#pragma once

namespace МатричныйКалькуляторCLR {

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
	private: System::Windows::Forms::DataGridView^ VvodMatrixOne;
	protected:

	private: System::Windows::Forms::Button^ upL;
	private: System::Windows::Forms::DataGridView^ VvodMatrixTwo;
	private: System::Windows::Forms::DataGridView^ VvodMatrixEqually;

	protected:



	private: System::Windows::Forms::Button^ upR;

	private: System::Windows::Forms::Button^ downL;
	private: System::Windows::Forms::Button^ downR;
	private: System::Windows::Forms::Button^ btnMnog;



	private: System::Windows::Forms::Button^ btnMinus;

	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnEqually;
	private: System::Windows::Forms::Button^ narrowingR;
	private: System::Windows::Forms::Button^ widerR;




	private: System::Windows::Forms::Button^ narrowingL;
	private: System::Windows::Forms::Button^ widerL;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->VvodMatrixOne = (gcnew System::Windows::Forms::DataGridView());
			this->upL = (gcnew System::Windows::Forms::Button());
			this->VvodMatrixTwo = (gcnew System::Windows::Forms::DataGridView());
			this->VvodMatrixEqually = (gcnew System::Windows::Forms::DataGridView());
			this->upR = (gcnew System::Windows::Forms::Button());
			this->downL = (gcnew System::Windows::Forms::Button());
			this->downR = (gcnew System::Windows::Forms::Button());
			this->btnMnog = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnEqually = (gcnew System::Windows::Forms::Button());
			this->narrowingR = (gcnew System::Windows::Forms::Button());
			this->widerR = (gcnew System::Windows::Forms::Button());
			this->narrowingL = (gcnew System::Windows::Forms::Button());
			this->widerL = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VvodMatrixOne))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VvodMatrixTwo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VvodMatrixEqually))->BeginInit();
			this->SuspendLayout();
			// 
			// VvodMatrixOne
			// 
			this->VvodMatrixOne->AllowUserToAddRows = false;
			this->VvodMatrixOne->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->VvodMatrixOne->ColumnHeadersVisible = false;
			this->VvodMatrixOne->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->VvodMatrixOne->Location = System::Drawing::Point(12, 13);
			this->VvodMatrixOne->Name = L"VvodMatrixOne";
			this->VvodMatrixOne->RowHeadersVisible = false;
			this->VvodMatrixOne->RowHeadersWidth = 51;
			this->VvodMatrixOne->RowTemplate->Height = 24;
			this->VvodMatrixOne->Size = System::Drawing::Size(464, 255);
			this->VvodMatrixOne->TabIndex = 0;
			// 
			// upL
			// 
			this->upL->Location = System::Drawing::Point(482, 13);
			this->upL->Name = L"upL";
			this->upL->Size = System::Drawing::Size(49, 48);
			this->upL->TabIndex = 2;
			this->upL->Text = L"up";
			this->upL->UseVisualStyleBackColor = true;
			this->upL->Click += gcnew System::EventHandler(this, &MyForm::upL_Click);
			// 
			// VvodMatrixTwo
			// 
			this->VvodMatrixTwo->AllowUserToAddRows = false;
			this->VvodMatrixTwo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->VvodMatrixTwo->ColumnHeadersVisible = false;
			this->VvodMatrixTwo->Location = System::Drawing::Point(592, 13);
			this->VvodMatrixTwo->Name = L"VvodMatrixTwo";
			this->VvodMatrixTwo->RowHeadersVisible = false;
			this->VvodMatrixTwo->RowHeadersWidth = 51;
			this->VvodMatrixTwo->RowTemplate->Height = 24;
			this->VvodMatrixTwo->Size = System::Drawing::Size(464, 255);
			this->VvodMatrixTwo->TabIndex = 0;
			// 
			// VvodMatrixEqually
			// 
			this->VvodMatrixEqually->AllowUserToAddRows = false;
			this->VvodMatrixEqually->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->VvodMatrixEqually->ColumnHeadersVisible = false;
			this->VvodMatrixEqually->Location = System::Drawing::Point(302, 340);
			this->VvodMatrixEqually->Name = L"VvodMatrixEqually";
			this->VvodMatrixEqually->RowHeadersVisible = false;
			this->VvodMatrixEqually->RowHeadersWidth = 51;
			this->VvodMatrixEqually->RowTemplate->Height = 24;
			this->VvodMatrixEqually->Size = System::Drawing::Size(464, 263);
			this->VvodMatrixEqually->TabIndex = 0;
			// 
			// upR
			// 
			this->upR->Location = System::Drawing::Point(537, 13);
			this->upR->Name = L"upR";
			this->upR->Size = System::Drawing::Size(49, 48);
			this->upR->TabIndex = 2;
			this->upR->Text = L"up";
			this->upR->UseVisualStyleBackColor = true;
			this->upR->Click += gcnew System::EventHandler(this, &MyForm::upR_Click);
			// 
			// downL
			// 
			this->downL->Location = System::Drawing::Point(482, 220);
			this->downL->Name = L"downL";
			this->downL->Size = System::Drawing::Size(49, 48);
			this->downL->TabIndex = 2;
			this->downL->Text = L"down";
			this->downL->UseVisualStyleBackColor = true;
			this->downL->Click += gcnew System::EventHandler(this, &MyForm::downL_Click);
			// 
			// downR
			// 
			this->downR->Location = System::Drawing::Point(537, 220);
			this->downR->Name = L"downR";
			this->downR->Size = System::Drawing::Size(49, 48);
			this->downR->TabIndex = 2;
			this->downR->Text = L"down";
			this->downR->UseVisualStyleBackColor = true;
			this->downR->Click += gcnew System::EventHandler(this, &MyForm::downR_Click);
			// 
			// btnMnog
			// 
			this->btnMnog->Location = System::Drawing::Point(482, 165);
			this->btnMnog->Name = L"btnMnog";
			this->btnMnog->Size = System::Drawing::Size(104, 49);
			this->btnMnog->TabIndex = 3;
			this->btnMnog->Text = L"*";
			this->btnMnog->UseVisualStyleBackColor = true;
			this->btnMnog->Click += gcnew System::EventHandler(this, &MyForm::btnMnog_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(482, 110);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(104, 49);
			this->btnMinus->TabIndex = 3;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(482, 67);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(104, 37);
			this->btnPlus->TabIndex = 3;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btnEqually
			// 
			this->btnEqually->Location = System::Drawing::Point(1062, 12);
			this->btnEqually->Name = L"btnEqually";
			this->btnEqually->Size = System::Drawing::Size(46, 596);
			this->btnEqually->TabIndex = 4;
			this->btnEqually->Text = L"=";
			this->btnEqually->UseVisualStyleBackColor = true;
			this->btnEqually->Click += gcnew System::EventHandler(this, &MyForm::btnEqually_Click);
			// 
			// narrowingR
			// 
			this->narrowingR->Location = System::Drawing::Point(592, 274);
			this->narrowingR->Name = L"narrowingR";
			this->narrowingR->Size = System::Drawing::Size(229, 50);
			this->narrowingR->TabIndex = 5;
			this->narrowingR->Text = L"narrowing";
			this->narrowingR->UseVisualStyleBackColor = true;
			this->narrowingR->Click += gcnew System::EventHandler(this, &MyForm::narrowingR_Click);
			// 
			// widerR
			// 
			this->widerR->Location = System::Drawing::Point(827, 274);
			this->widerR->Name = L"widerR";
			this->widerR->Size = System::Drawing::Size(229, 50);
			this->widerR->TabIndex = 5;
			this->widerR->Text = L"wider";
			this->widerR->UseVisualStyleBackColor = true;
			this->widerR->Click += gcnew System::EventHandler(this, &MyForm::widerR_Click);
			// 
			// narrowingL
			// 
			this->narrowingL->Location = System::Drawing::Point(12, 277);
			this->narrowingL->Name = L"narrowingL";
			this->narrowingL->Size = System::Drawing::Size(218, 50);
			this->narrowingL->TabIndex = 5;
			this->narrowingL->Text = L"narrowing";
			this->narrowingL->UseVisualStyleBackColor = true;
			this->narrowingL->Click += gcnew System::EventHandler(this, &MyForm::narrowingL_Click);
			// 
			// widerL
			// 
			this->widerL->Location = System::Drawing::Point(236, 277);
			this->widerL->Name = L"widerL";
			this->widerL->Size = System::Drawing::Size(240, 47);
			this->widerL->TabIndex = 5;
			this->widerL->Text = L"wider";
			this->widerL->UseVisualStyleBackColor = true;
			this->widerL->Click += gcnew System::EventHandler(this, &MyForm::widerL_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1020, 371);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"_";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1114, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 595);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1203, 620);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->widerL);
			this->Controls->Add(this->widerR);
			this->Controls->Add(this->narrowingL);
			this->Controls->Add(this->narrowingR);
			this->Controls->Add(this->btnEqually);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnMnog);
			this->Controls->Add(this->downR);
			this->Controls->Add(this->upR);
			this->Controls->Add(this->downL);
			this->Controls->Add(this->upL);
			this->Controls->Add(this->VvodMatrixEqually);
			this->Controls->Add(this->VvodMatrixTwo);
			this->Controls->Add(this->VvodMatrixOne);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VvodMatrixOne))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VvodMatrixTwo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VvodMatrixEqually))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//=================================================================================
	int deistvie = 0; // для функций
//=================================================================================

	void Slogenie(int n1,int m1,int n2,int m2) {
		if (n1 != n2 || m1 != m2)
			MessageBox::Show("Размеры матриц должны быть одинаковыми");
		else {
			VvodMatrixEqually->RowCount = n1;
			VvodMatrixEqually->ColumnCount = m1;
			for (int i = 0; i < n1; i++)
				for (int j = 0; j < m1; j++)
				{
					double a = Convert::ToDouble(VvodMatrixOne[j, i]->Value);
					double b = Convert::ToDouble(VvodMatrixTwo[j, i]->Value);
					double sum = a + b;
					VvodMatrixEqually[j, i]->Value = Convert::ToString(sum);
				}
		}
		
	}

	void Raznost(int n1, int m1, int n2, int m2) {
		if (n1 != n2 || m1 != m2)
			MessageBox::Show("Размеры матриц должны быть одинаковыми");
		else {
			VvodMatrixEqually->RowCount = n1;
			VvodMatrixEqually->ColumnCount = m1;
			for (int i = 0; i < n1; i++)
				for (int j = 0; j < m1; j++)
				{
					double a = Convert::ToDouble(VvodMatrixOne[j, i]->Value);
					double b = Convert::ToDouble(VvodMatrixTwo[j, i]->Value);
					double s = a - b;
					VvodMatrixEqually[j, i]->Value = Convert::ToString(s);
				}
		}
	}

	void Umnogenie(int n1, int m1, int n2, int m2) {
		if (m1 != n2)
			MessageBox::Show("Количество столбцов первой матрицы должно быть равно колличеству строк второй ");
		else {
			int const N = 100;
			VvodMatrixEqually->RowCount = n1;
			VvodMatrixEqually->ColumnCount = m2;
			double A[N][N];

			for (int i = 0; i < n1; i++)
				for (int j = 0; j < m1; j++)
					A[i][j] = Convert::ToDouble(VvodMatrixOne[j, i]->Value);

			double B[N][N];

			for (int i = 0; i < n2; i++)
				for (int j = 0; j < m2; j++)
					B[i][j] = Convert::ToDouble(VvodMatrixTwo[j, i]->Value);

			double C[N][N];

			for (int i = 0; i < n1; i++)
			{
				for (int j = 0; j < m2; j++)
				{
					C[i][j] = 0;
					for (int k = 0; k < m1; k++) {
						C[i][j] += A[i][k] * B[k][j];
					}
				}
			}
			for (int i = 0; i < n1; i++) {
				for (int j = 0; j < m2; j++) {
					VvodMatrixEqually[j, i]->Value = Convert::ToString(C[i][j]);
				}
			}

		}	
	}

//=================================================================================
//Увеличение секторв матрицы
    private: System::Void upL_Click(System::Object^ sender, System::EventArgs^ e) {
			VvodMatrixOne->RowCount++;
    }
    private: System::Void downL_Click(System::Object^ sender, System::EventArgs^ e) {
		if (VvodMatrixOne->RowCount != 1)
			VvodMatrixOne->RowCount--;
    }
    private: System::Void widerL_Click(System::Object^ sender, System::EventArgs^ e) {
		VvodMatrixOne->ColumnCount++;
    }
    private: System::Void narrowingL_Click(System::Object^ sender, System::EventArgs^ e) {
		if (VvodMatrixOne->ColumnCount != 1)
		VvodMatrixOne->ColumnCount--;
    }
    private: System::Void upR_Click(System::Object^ sender, System::EventArgs^ e) {
		VvodMatrixTwo->RowCount++;
    }
    private: System::Void downR_Click(System::Object^ sender, System::EventArgs^ e) {
		if (VvodMatrixTwo->RowCount != 1)
			VvodMatrixTwo->RowCount--;
    }
    private: System::Void widerR_Click(System::Object^ sender, System::EventArgs^ e) {
		VvodMatrixTwo->ColumnCount++;
    }
    private: System::Void narrowingR_Click(System::Object^ sender, System::EventArgs^ e) {
		if (VvodMatrixTwo->ColumnCount != 1)
			VvodMatrixTwo->ColumnCount--;
    }
//=================================================================================
//Операции 
    private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		deistvie = 1;
		label1->Text = "+";
    }
    private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		deistvie = 2;
		label1->Text = "-";
    }
    private: System::Void btnMnog_Click(System::Object^ sender, System::EventArgs^ e) {
		deistvie = 3; 
		label1->Text = "*";
    }
//=================================================================================
    private: System::Void btnEqually_Click(System::Object^ sender, System::EventArgs^ e) {
		int n1 = VvodMatrixOne->RowCount; // высота
		int m1 = VvodMatrixOne->ColumnCount; // ширина
		int n2 = VvodMatrixTwo->RowCount;
		int m2 = VvodMatrixTwo->ColumnCount;
		if(!deistvie==0)
			switch (deistvie)
			{
			case 1:
				Slogenie(n1, m1, n2, m2); 
				break;
			case 2:
				Raznost(n1, m1, n2, m2);
				break;
			case 3:
				Umnogenie(n1, m1, n2, m2);
				break;
			}
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
    }

};
}
