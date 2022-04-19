
#pragma once
#include <cmath>
#include "myfunction.h"

namespace График {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace System::Windows::Forms::

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			pbPlot->Image = gcnew Bitmap(pbPlot->Width, pbPlot->Height);
			br = gcnew SolidBrush(Color::White);
			pn_line = gcnew Pen(Color::Blue, 3);
			pn_OY = gcnew Pen(Color::Red, 4);
			pn_OX = gcnew Pen(Color::Green, 4);
			pn_axeses = gcnew Pen(Color::Gray, 1);
			gr = Graphics::FromImage(pbPlot->Image);
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
	private: System::Windows::Forms::PictureBox^ pbPlot;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbXmin;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbXmax;
	private: System::Windows::Forms::TextBox^ tbYmin;
	private: System::Windows::Forms::TextBox^ tbYmax;
	private: System::Windows::Forms::Button^ btnBuild;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ lbY_5;
	private: System::Windows::Forms::Label^ lbY_4;
	private: System::Windows::Forms::Label^ lbY_3;
	private: System::Windows::Forms::Label^ lbY_2;
	private: System::Windows::Forms::Label^ lbY_1;
	private: System::Windows::Forms::Label^ lbY0;
	private: System::Windows::Forms::Label^ lbY1;
	private: System::Windows::Forms::Label^ lbY2;
	private: System::Windows::Forms::Label^ lbY3;
	private: System::Windows::Forms::Label^ lbY4;
	private: System::Windows::Forms::Label^ lbY5;
	private: System::Windows::Forms::Label^ lbX5;
	private: System::Windows::Forms::Label^ lbX4;
	private: System::Windows::Forms::Label^ lbX3;
	private: System::Windows::Forms::Label^ lbX2;
	private: System::Windows::Forms::Label^ lbX1;
	private: System::Windows::Forms::Label^ lbX0;
	private: System::Windows::Forms::Label^ lbX_1;
	private: System::Windows::Forms::Label^ lbX_2;
	private: System::Windows::Forms::Label^ lbX_3;
	private: System::Windows::Forms::Label^ lbX_4;
	private: System::Windows::Forms::Label^ lbX_5;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ btnUp;
	private: System::Windows::Forms::Button^ btnDown;
	private: System::Windows::Forms::Button^ btnLeft;
	private: System::Windows::Forms::Button^ btnRight;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pbPlot = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbXmin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbXmax = (gcnew System::Windows::Forms::TextBox());
			this->tbYmin = (gcnew System::Windows::Forms::TextBox());
			this->tbYmax = (gcnew System::Windows::Forms::TextBox());
			this->btnBuild = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->lbY_5 = (gcnew System::Windows::Forms::Label());
			this->lbY_4 = (gcnew System::Windows::Forms::Label());
			this->lbY_3 = (gcnew System::Windows::Forms::Label());
			this->lbY_2 = (gcnew System::Windows::Forms::Label());
			this->lbY_1 = (gcnew System::Windows::Forms::Label());
			this->lbY0 = (gcnew System::Windows::Forms::Label());
			this->lbY1 = (gcnew System::Windows::Forms::Label());
			this->lbY2 = (gcnew System::Windows::Forms::Label());
			this->lbY3 = (gcnew System::Windows::Forms::Label());
			this->lbY4 = (gcnew System::Windows::Forms::Label());
			this->lbY5 = (gcnew System::Windows::Forms::Label());
			this->lbX5 = (gcnew System::Windows::Forms::Label());
			this->lbX4 = (gcnew System::Windows::Forms::Label());
			this->lbX3 = (gcnew System::Windows::Forms::Label());
			this->lbX2 = (gcnew System::Windows::Forms::Label());
			this->lbX1 = (gcnew System::Windows::Forms::Label());
			this->lbX0 = (gcnew System::Windows::Forms::Label());
			this->lbX_1 = (gcnew System::Windows::Forms::Label());
			this->lbX_2 = (gcnew System::Windows::Forms::Label());
			this->lbX_3 = (gcnew System::Windows::Forms::Label());
			this->lbX_4 = (gcnew System::Windows::Forms::Label());
			this->lbX_5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnUp = (gcnew System::Windows::Forms::Button());
			this->btnDown = (gcnew System::Windows::Forms::Button());
			this->btnLeft = (gcnew System::Windows::Forms::Button());
			this->btnRight = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->BeginInit();
			this->SuspendLayout();
			// 
			// pbPlot
			// 
			this->pbPlot->Location = System::Drawing::Point(171, 15);
			this->pbPlot->Margin = System::Windows::Forms::Padding(4);
			this->pbPlot->Name = L"pbPlot";
			this->pbPlot->Size = System::Drawing::Size(667, 615);
			this->pbPlot->TabIndex = 0;
			this->pbPlot->TabStop = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(845, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x_min";
			// 
			// tbXmin
			// 
			this->tbXmin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbXmin->Location = System::Drawing::Point(932, 12);
			this->tbXmin->Margin = System::Windows::Forms::Padding(4);
			this->tbXmin->Name = L"tbXmin";
			this->tbXmin->Size = System::Drawing::Size(115, 25);
			this->tbXmin->TabIndex = 2;
			this->tbXmin->Text = L"-10";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(845, 55);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"x_max";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(845, 92);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"y_min";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(845, 134);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"y_max";
			// 
			// tbXmax
			// 
			this->tbXmax->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbXmax->Location = System::Drawing::Point(919, 55);
			this->tbXmax->Margin = System::Windows::Forms::Padding(4);
			this->tbXmax->Name = L"tbXmax";
			this->tbXmax->Size = System::Drawing::Size(128, 25);
			this->tbXmax->TabIndex = 6;
			this->tbXmax->Text = L"10";
			// 
			// tbYmin
			// 
			this->tbYmin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbYmin->Location = System::Drawing::Point(919, 92);
			this->tbYmin->Margin = System::Windows::Forms::Padding(4);
			this->tbYmin->Name = L"tbYmin";
			this->tbYmin->Size = System::Drawing::Size(128, 25);
			this->tbYmin->TabIndex = 7;
			this->tbYmin->Text = L"-10";
			// 
			// tbYmax
			// 
			this->tbYmax->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbYmax->Location = System::Drawing::Point(919, 134);
			this->tbYmax->Margin = System::Windows::Forms::Padding(4);
			this->tbYmax->Name = L"tbYmax";
			this->tbYmax->Size = System::Drawing::Size(128, 25);
			this->tbYmax->TabIndex = 8;
			this->tbYmax->Text = L"10";
			// 
			// btnBuild
			// 
			this->btnBuild->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBuild->Location = System::Drawing::Point(845, 178);
			this->btnBuild->Margin = System::Windows::Forms::Padding(4);
			this->btnBuild->Name = L"btnBuild";
			this->btnBuild->Size = System::Drawing::Size(203, 60);
			this->btnBuild->TabIndex = 9;
			this->btnBuild->Text = L"Построить";
			this->btnBuild->UseVisualStyleBackColor = true;
			this->btnBuild->Click += gcnew System::EventHandler(this, &MyForm::btnBuild_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"1)cos(x)", L"2)x^2 - |x| - 6", L"3)sin(x) - cos(x)",
					L"4)(x-3)^2 - 2", L"5)(x - 2)^3 - 2 * x + 4"
			});
			this->comboBox1->Location = System::Drawing::Point(845, 246);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(201, 25);
			this->comboBox1->TabIndex = 12;
			this->comboBox1->Text = L"График:";
			// 
			// lbY_5
			// 
			this->lbY_5->AutoSize = true;
			this->lbY_5->Location = System::Drawing::Point(133, -1);
			this->lbY_5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY_5->Name = L"lbY_5";
			this->lbY_5->Size = System::Drawing::Size(24, 17);
			this->lbY_5->TabIndex = 13;
			this->lbY_5->Text = L"10";
			// 
			// lbY_4
			// 
			this->lbY_4->AutoSize = true;
			this->lbY_4->Location = System::Drawing::Point(133, 54);
			this->lbY_4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY_4->Name = L"lbY_4";
			this->lbY_4->Size = System::Drawing::Size(16, 17);
			this->lbY_4->TabIndex = 14;
			this->lbY_4->Text = L"8";
			// 
			// lbY_3
			// 
			this->lbY_3->AutoSize = true;
			this->lbY_3->Location = System::Drawing::Point(133, 118);
			this->lbY_3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY_3->Name = L"lbY_3";
			this->lbY_3->Size = System::Drawing::Size(16, 17);
			this->lbY_3->TabIndex = 15;
			this->lbY_3->Text = L"6";
			// 
			// lbY_2
			// 
			this->lbY_2->AutoSize = true;
			this->lbY_2->Location = System::Drawing::Point(133, 178);
			this->lbY_2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY_2->Name = L"lbY_2";
			this->lbY_2->Size = System::Drawing::Size(16, 17);
			this->lbY_2->TabIndex = 16;
			this->lbY_2->Text = L"4";
			// 
			// lbY_1
			// 
			this->lbY_1->AutoSize = true;
			this->lbY_1->Location = System::Drawing::Point(133, 244);
			this->lbY_1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY_1->Name = L"lbY_1";
			this->lbY_1->Size = System::Drawing::Size(16, 17);
			this->lbY_1->TabIndex = 17;
			this->lbY_1->Text = L"2";
			// 
			// lbY0
			// 
			this->lbY0->AutoSize = true;
			this->lbY0->Location = System::Drawing::Point(133, 300);
			this->lbY0->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY0->Name = L"lbY0";
			this->lbY0->Size = System::Drawing::Size(16, 17);
			this->lbY0->TabIndex = 18;
			this->lbY0->Text = L"0";
			// 
			// lbY1
			// 
			this->lbY1->AutoSize = true;
			this->lbY1->Location = System::Drawing::Point(133, 367);
			this->lbY1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY1->Name = L"lbY1";
			this->lbY1->Size = System::Drawing::Size(21, 17);
			this->lbY1->TabIndex = 19;
			this->lbY1->Text = L"-2";
			// 
			// lbY2
			// 
			this->lbY2->AutoSize = true;
			this->lbY2->Location = System::Drawing::Point(133, 427);
			this->lbY2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY2->Name = L"lbY2";
			this->lbY2->Size = System::Drawing::Size(21, 17);
			this->lbY2->TabIndex = 20;
			this->lbY2->Text = L"-4";
			// 
			// lbY3
			// 
			this->lbY3->AutoSize = true;
			this->lbY3->Location = System::Drawing::Point(133, 487);
			this->lbY3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY3->Name = L"lbY3";
			this->lbY3->Size = System::Drawing::Size(21, 17);
			this->lbY3->TabIndex = 21;
			this->lbY3->Text = L"-6";
			// 
			// lbY4
			// 
			this->lbY4->AutoSize = true;
			this->lbY4->Location = System::Drawing::Point(133, 546);
			this->lbY4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY4->Name = L"lbY4";
			this->lbY4->Size = System::Drawing::Size(21, 17);
			this->lbY4->TabIndex = 22;
			this->lbY4->Text = L"-8";
			// 
			// lbY5
			// 
			this->lbY5->AutoSize = true;
			this->lbY5->Location = System::Drawing::Point(133, 614);
			this->lbY5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbY5->Name = L"lbY5";
			this->lbY5->Size = System::Drawing::Size(29, 17);
			this->lbY5->TabIndex = 23;
			this->lbY5->Text = L"-10";
			// 
			// lbX5
			// 
			this->lbX5->AutoSize = true;
			this->lbX5->BackColor = System::Drawing::Color::White;
			this->lbX5->Location = System::Drawing::Point(155, 646);
			this->lbX5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX5->Name = L"lbX5";
			this->lbX5->Size = System::Drawing::Size(29, 17);
			this->lbX5->TabIndex = 24;
			this->lbX5->Text = L"-10";
			// 
			// lbX4
			// 
			this->lbX4->AutoSize = true;
			this->lbX4->Location = System::Drawing::Point(224, 646);
			this->lbX4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX4->Name = L"lbX4";
			this->lbX4->Size = System::Drawing::Size(21, 17);
			this->lbX4->TabIndex = 25;
			this->lbX4->Text = L"-8";
			// 
			// lbX3
			// 
			this->lbX3->AutoSize = true;
			this->lbX3->Location = System::Drawing::Point(285, 646);
			this->lbX3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX3->Name = L"lbX3";
			this->lbX3->Size = System::Drawing::Size(21, 17);
			this->lbX3->TabIndex = 26;
			this->lbX3->Text = L"-6";
			// 
			// lbX2
			// 
			this->lbX2->AutoSize = true;
			this->lbX2->Location = System::Drawing::Point(359, 646);
			this->lbX2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX2->Name = L"lbX2";
			this->lbX2->Size = System::Drawing::Size(21, 17);
			this->lbX2->TabIndex = 27;
			this->lbX2->Text = L"-4";
			// 
			// lbX1
			// 
			this->lbX1->AutoSize = true;
			this->lbX1->Location = System::Drawing::Point(417, 646);
			this->lbX1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX1->Name = L"lbX1";
			this->lbX1->Size = System::Drawing::Size(21, 17);
			this->lbX1->TabIndex = 28;
			this->lbX1->Text = L"-2";
			// 
			// lbX0
			// 
			this->lbX0->AutoSize = true;
			this->lbX0->Location = System::Drawing::Point(496, 646);
			this->lbX0->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX0->Name = L"lbX0";
			this->lbX0->Size = System::Drawing::Size(16, 17);
			this->lbX0->TabIndex = 29;
			this->lbX0->Text = L"0";
			// 
			// lbX_1
			// 
			this->lbX_1->AutoSize = true;
			this->lbX_1->Location = System::Drawing::Point(569, 646);
			this->lbX_1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX_1->Name = L"lbX_1";
			this->lbX_1->Size = System::Drawing::Size(16, 17);
			this->lbX_1->TabIndex = 30;
			this->lbX_1->Text = L"2";
			// 
			// lbX_2
			// 
			this->lbX_2->AutoSize = true;
			this->lbX_2->Location = System::Drawing::Point(633, 646);
			this->lbX_2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX_2->Name = L"lbX_2";
			this->lbX_2->Size = System::Drawing::Size(16, 17);
			this->lbX_2->TabIndex = 31;
			this->lbX_2->Text = L"4";
			// 
			// lbX_3
			// 
			this->lbX_3->AutoSize = true;
			this->lbX_3->Location = System::Drawing::Point(695, 646);
			this->lbX_3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX_3->Name = L"lbX_3";
			this->lbX_3->Size = System::Drawing::Size(16, 17);
			this->lbX_3->TabIndex = 32;
			this->lbX_3->Text = L"6";
			// 
			// lbX_4
			// 
			this->lbX_4->AutoSize = true;
			this->lbX_4->Location = System::Drawing::Point(768, 646);
			this->lbX_4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX_4->Name = L"lbX_4";
			this->lbX_4->Size = System::Drawing::Size(16, 17);
			this->lbX_4->TabIndex = 33;
			this->lbX_4->Text = L"8";
			// 
			// lbX_5
			// 
			this->lbX_5->AutoSize = true;
			this->lbX_5->Location = System::Drawing::Point(825, 646);
			this->lbX_5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbX_5->Name = L"lbX_5";
			this->lbX_5->Size = System::Drawing::Size(24, 17);
			this->lbX_5->TabIndex = 34;
			this->lbX_5->Text = L"10";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(171, 666);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 37;
			this->button1->Text = L"y/m-";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(279, 666);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 38;
			this->button2->Text = L"y/m+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(629, 666);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 39;
			this->button3->Text = L"y/M-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(737, 666);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 40;
			this->button4->Text = L"y/M+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(99, 9);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(27, 113);
			this->button5->TabIndex = 41;
			this->button5->Text = L"y/m |";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(99, 129);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(27, 113);
			this->button6->TabIndex = 42;
			this->button6->Text = L"y/m +";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(99, 517);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(27, 113);
			this->button7->TabIndex = 44;
			this->button7->Text = L"y/M+";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(99, 396);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(27, 113);
			this->button8->TabIndex = 43;
			this->button8->Text = L"y/M |";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// btnUp
			// 
			this->btnUp->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnUp->Location = System::Drawing::Point(16, 15);
			this->btnUp->Margin = System::Windows::Forms::Padding(4);
			this->btnUp->Name = L"btnUp";
			this->btnUp->Size = System::Drawing::Size(73, 313);
			this->btnUp->TabIndex = 45;
			this->btnUp->Text = L"Вверх";
			this->btnUp->UseVisualStyleBackColor = true;
			this->btnUp->Click += gcnew System::EventHandler(this, &MyForm::btnUp_Click);
			// 
			// btnDown
			// 
			this->btnDown->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDown->Location = System::Drawing::Point(16, 335);
			this->btnDown->Margin = System::Windows::Forms::Padding(4);
			this->btnDown->Name = L"btnDown";
			this->btnDown->Size = System::Drawing::Size(73, 295);
			this->btnDown->TabIndex = 46;
			this->btnDown->Text = L"Вниз";
			this->btnDown->UseVisualStyleBackColor = true;
			this->btnDown->Click += gcnew System::EventHandler(this, &MyForm::btnDown_Click);
			// 
			// btnLeft
			// 
			this->btnLeft->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLeft->Location = System::Drawing::Point(171, 702);
			this->btnLeft->Margin = System::Windows::Forms::Padding(4);
			this->btnLeft->Name = L"btnLeft";
			this->btnLeft->Size = System::Drawing::Size(323, 62);
			this->btnLeft->TabIndex = 47;
			this->btnLeft->Text = L"Влево";
			this->btnLeft->UseVisualStyleBackColor = true;
			this->btnLeft->Click += gcnew System::EventHandler(this, &MyForm::btnLeft_Click);
			// 
			// btnRight
			// 
			this->btnRight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRight->Location = System::Drawing::Point(501, 702);
			this->btnRight->Margin = System::Windows::Forms::Padding(4);
			this->btnRight->Name = L"btnRight";
			this->btnRight->Size = System::Drawing::Size(336, 62);
			this->btnRight->TabIndex = 48;
			this->btnRight->Text = L"Вправо";
			this->btnRight->UseVisualStyleBackColor = true;
			this->btnRight->Click += gcnew System::EventHandler(this, &MyForm::btnRight_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(947, 278);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(99, 59);
			this->button9->TabIndex = 49;
			this->button9->Text = L"Увеличение ОХ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(845, 279);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 59);
			this->button10->TabIndex = 50;
			this->button10->Text = L"Уменьшение ОХ";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(845, 344);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 59);
			this->button11->TabIndex = 51;
			this->button11->Text = L"Уменьшение ОУ";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(950, 346);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(99, 59);
			this->button12->TabIndex = 52;
			this->button12->Text = L"Увеличение ОУ";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1061, 785);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btnRight);
			this->Controls->Add(this->btnLeft);
			this->Controls->Add(this->btnDown);
			this->Controls->Add(this->btnUp);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbX_5);
			this->Controls->Add(this->lbX_4);
			this->Controls->Add(this->lbX_3);
			this->Controls->Add(this->lbX_2);
			this->Controls->Add(this->lbX_1);
			this->Controls->Add(this->lbX0);
			this->Controls->Add(this->lbX1);
			this->Controls->Add(this->lbX2);
			this->Controls->Add(this->lbX3);
			this->Controls->Add(this->lbX4);
			this->Controls->Add(this->lbX5);
			this->Controls->Add(this->lbY5);
			this->Controls->Add(this->lbY4);
			this->Controls->Add(this->lbY3);
			this->Controls->Add(this->lbY2);
			this->Controls->Add(this->lbY1);
			this->Controls->Add(this->lbY0);
			this->Controls->Add(this->lbY_1);
			this->Controls->Add(this->lbY_2);
			this->Controls->Add(this->lbY_3);
			this->Controls->Add(this->lbY_4);
			this->Controls->Add(this->lbY_5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->btnBuild);
			this->Controls->Add(this->tbYmax);
			this->Controls->Add(this->tbYmin);
			this->Controls->Add(this->tbXmax);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbXmin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbPlot);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"График";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Brush^ br; 
		Pen^ pn_line, ^ pn_OY, ^pn_OX, ^ pn_axeses;
		Graphics^ gr;

		Point get_origin_pixel(double x_min, double x_max, double y_min, double y_max, Image^ img) {
			double x_scale, y_scale;
			scale(x_max - x_min, y_max - y_min, img->Width, img->Height, x_scale, y_scale);
			return Point(-x_min / x_scale, y_max / y_scale);
		}

		void plot(double (*f)(double), double x_min, double x_max, double y_min, double y_max, Image^ img, Pen^ pn) { // график
			double x_scale, y_scale;
			Point origin = get_origin_pixel(x_min, x_max, y_min, y_max, pbPlot->Image);
			scale(x_max - x_min, y_max - y_min, img->Width, img->Height, x_scale, y_scale);

			String^ YS, ^ XS;
			Graphics^ gr = Graphics::FromImage(img);
			Brush^ brush = gcnew SolidBrush(Color::Black);
			System::Drawing::Font^ Font = gcnew System::Drawing::Font("Times New Roman", 10);
			//int t = 0;
			int y_pix = (y_max - (x_min)) / y_scale;
			double x, y;
			int y_pix1;
			bool one = true, two = true, w =false;		
			for (int x_pix1 = -1; x_pix1 < img->Width; x_pix1++) {
				x = x_min + x_pix1 * x_scale;
				y = f(x);
				y_pix1 = (y_max - y) / y_scale;
			    gr->DrawLine(pn,( x_pix1 - 1), y_pix, x_pix1, y_pix1);

				//if (x_pix1 == origin.X) { // Если пересечение с ОY
				//	YS = Convert::ToString(Math::Round(y, 2));
				//	gr->DrawString(YS, Font, brush, x_pix1 - 20, y_pix1 - 25);
				//}
				if (y_pix1 > 1) {
					if ((x_pix1 < origin.X && (x_pix1-1) > origin.X) || (x_pix1 > origin.X && (x_pix1-1) < origin.X)) {
						YS = Convert::ToString(Math::Round(y, 2));
						gr->DrawString(YS, Font, brush, x_pix1 - 20, y_pix1 - 25);
					}
					else {
						if (x_pix1 == origin.X) {
							YS = Convert::ToString(Math::Round(y, 2));
							gr->DrawString(YS, Font, brush, x_pix1 - 20, y_pix1 - 25);
						}
					}
				}
				if (x_pix1 > 1) {
					if ((y_pix1 < origin.Y && y_pix > origin.Y) || (y_pix1 > origin.Y && y_pix < origin.Y)) {
						XS = Convert::ToString(Math::Round(x, 2));
						gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
					}
					else {
						if (y_pix1 == origin.Y) {
							XS = Convert::ToString(Math::Round(x, 2));
							gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
						}
					}
				}
		
				//switch (comboBox1->SelectedIndex)
				//{
				//case 0:
				//	if ((y_pix1 < origin.Y && y_pix > origin.Y) || (y_pix1 > origin.Y && y_pix < origin.Y)) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	if (y_pix1 == origin.Y) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	break;
				//case 1:
				//	if ((y_pix1 < origin.Y && y_pix > origin.Y) || (y_pix1 > origin.Y && y_pix < origin.Y)) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	if (y_pix1 == origin.Y) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	break;
				//case 2:
				//	if ((y_pix1 < origin.Y && y_pix > origin.Y) || (y_pix1 > origin.Y && y_pix < origin.Y)) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	if (y_pix1 == origin.Y) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	break;
				//case 3:
				//	if ((y_pix1 < origin.Y && y_pix > origin.Y) || (y_pix1 > origin.Y && y_pix < origin.Y)) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	if (y_pix1 == origin.Y) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	break;
				//	//if (y_pix1 == origin.Y) {
				//	//	XS = Convert::ToString(Math::Round(x, 2));
				//	//	gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	//}
				//	//break;
				//case 4:
				//	if ((y_pix1 < origin.Y && y_pix > origin.Y) || (y_pix1 > origin.Y && y_pix < origin.Y)) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	if (y_pix1 == origin.Y) {
				//		XS = Convert::ToString(Math::Round(x, 2));
				//		gr->DrawString(XS, Font, brush, x_pix1, origin.Y);
				//	}
				//	break;
				//}
				y_pix = y_pix1;
			}
		}

		void clear(Image^ img, Brush^ br) { // функция очистки
			Graphics^ gr = Graphics::FromImage(img);
			gr->FillRectangle(br, 0, 0, img->Width, img->Height);
		}

		void plot_axes(Image^ img, Point origin, Pen^ pn, Pen^ pn1) { // построение осей кординат
			Graphics^ gr = Graphics::FromImage(img);
			String^ Xstring = "X", ^Ystring = "Y";
			Brush^ Xbrush = gcnew SolidBrush(Color::Red);
			Brush^ Ybrush = gcnew SolidBrush(Color::Green);
			System::Drawing::Font^ XFont = gcnew System::Drawing::Font("Times New Roman", 14);
			System::Drawing::Font^ YFont = gcnew System::Drawing::Font("Times New Roman", 14);
			gr->DrawLine(pn, 0, origin.Y, img->Width - 1, origin.Y);
			gr->DrawLine(pn1, origin.X, 0, origin.X, img->Height);
			gr->DrawString(Xstring, XFont, Xbrush, 480, origin.Y - 25);
			gr->DrawString(Ystring, YFont, Ybrush, origin.X, 0);
		}

		void labelX(Image^ img, Pen^ pn, double x_min, double x_max) {
			double prom =  (x_max - x_min)/10;
			lbX5->Text = Convert::ToString(Math::Round(x_min, 2));
			lbX4->Text = Convert::ToString(Math::Round(x_min + prom, 2));
			lbX3->Text = Convert::ToString(Math::Round(x_min + prom + prom, 2));
			lbX2->Text = Convert::ToString(Math::Round(x_min + prom + prom + prom, 2));		
			lbX1->Text = Convert::ToString(Math::Round(x_min + prom + prom + prom + prom, 2));
			lbX0->Text = Convert::ToString(Math::Round(x_min + prom + prom + prom + prom + prom, 2));
			lbX_1->Text = Convert::ToString(Math::Round(x_min + prom + prom + prom + prom + prom + prom, 2));
			lbX_2->Text = Convert::ToString(Math::Round(x_min + prom + prom + prom + prom + prom + prom + prom, 2));
			lbX_3->Text = Convert::ToString(Math::Round(x_min + prom + prom + prom + prom + prom + prom + prom + prom, 2));;
			lbX_4->Text = Convert::ToString(Math::Round(x_min + prom + prom + prom + prom + prom + prom + prom + prom + prom, 2));
			lbX_5->Text = Convert::ToString(Math::Round(x_max, 2));
			Graphics^ gr = Graphics::FromImage(img);
			for (double i = 0; i <= 500; i += 50) 
				gr->DrawLine(pn, i, 0, i, img->Height - 1);			
		}

		void labelY(Image^ img, Pen^ pn, double y_min, double y_max) {
			double prom = (y_max - y_min) / 10;
			lbY5->Text = Convert::ToString(Math::Round(y_min, 2));
			lbY4->Text = Convert::ToString(Math::Round(y_min + prom, 2));
			lbY3->Text = Convert::ToString(Math::Round(y_min + prom + prom, 2));
			lbY2->Text = Convert::ToString(Math::Round(y_min + prom + prom + prom, 2));
			lbY1->Text = Convert::ToString(Math::Round(y_min + prom + prom + prom + prom, 2));
			lbY0->Text = Convert::ToString(Math::Round(y_min + prom + prom + prom + prom + prom, 2));
			lbY_1->Text = Convert::ToString(Math::Round(y_min + prom + prom + prom + prom + prom + prom, 2));
			lbY_2->Text = Convert::ToString(Math::Round(y_min + prom + prom + prom + prom + prom + prom + prom, 2));
			lbY_3->Text = Convert::ToString(Math::Round(y_min + prom + prom + prom + prom + prom + prom + prom + prom, 2));;
			lbY_4->Text = Convert::ToString(Math::Round(y_min + prom + prom + prom + prom + prom + prom + prom + prom + prom, 2));
			lbY_5->Text = Convert::ToString(Math::Round(y_max, 2));
			Graphics^ gr = Graphics::FromImage(img);
			for (double i = 0; i <= 500; i += 50)
				gr->DrawLine(pn, 0, i, img->Width - 1, i);
		}

		void scale(double real_width, double real_height, double screen_width, double screen_height, double& scale_x, double& scale_y) { // масштаб
			scale_x = real_width / screen_width;
			scale_y = real_height / screen_height;
		}

	    bool ProtectTbXmin() { 
			if (tbXmin->Text->Length == 0) { return false; } 
			for (int i = 0; i < tbXmin->Text->Length; i++) { 
				if ((tbXmin->Text[i] >= '0') && (tbXmin->Text[i] <= '9') || (tbXmin->Text[i] == ',') || (tbXmin->Text[i] == '-')) {} 
				else { return false; }
			}
			return true;
		}
	    bool ProtectTbXmax() {
			if (tbXmax->Text->Length == 0) { return false; }
			for (int i = 0; i < tbXmax->Text->Length; i++) {
				if ((tbXmax->Text[i] >= '0') && (tbXmax->Text[i] <= '9') || (tbXmax->Text[i] == ',') || (tbXmax->Text[i] == '-')) {}
				else { return false; }
			}
			return true;
		}
	    bool ProtectTbYmin() {
			if (tbYmin->Text->Length == 0) { return false; }
			for (int i = 0; i < tbYmin->Text->Length; i++) {
				if ((tbYmin->Text[i] >= '0') && (tbYmin->Text[i] <= '9') || (tbYmin->Text[i] == ',') || (tbYmin->Text[i] == '-')) {}
				else { return false; }
				return true;
			}
		}
	    bool ProtectTbYmax() {
			if (tbYmax->Text->Length == 0) { return false; }
			for (int i = 0; i < tbYmax->Text->Length; i++) {
				if ((tbYmax->Text[i] >= '0') && (tbYmax->Text[i] <= '9') || (tbYmax->Text[i] == ',') || (tbYmax->Text[i] == '-')) {}
				else { return false; } 
			}
			return true;
		}
		void Graphic() {
			double x_min, x_max, y_min, y_max;

			if (ProtectTbXmin())
				x_min = System::Convert::ToDouble(tbXmin->Text);
			else
				MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
			if (ProtectTbXmax())
				x_max = System::Convert::ToDouble(tbXmax->Text);
			else
				MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
			if (ProtectTbYmin())
				y_min = System::Convert::ToDouble(tbYmin->Text);
			else
				MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
			if (ProtectTbYmax())
				y_max = System::Convert::ToDouble(tbYmax->Text);
			else
				MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
			if ((y_min == y_max) || (x_min == x_max)) {
				MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
			}
			else {
				if (ProtectTbXmin() && ProtectTbXmax() && ProtectTbYmin() && ProtectTbYmax()) {
					clear(pbPlot->Image, br);
					Point origin = get_origin_pixel(x_min, x_max, y_min, y_max, pbPlot->Image);
					labelX(pbPlot->Image, pn_axeses, x_min, x_max);
					labelY(pbPlot->Image, pn_axeses, y_min, y_max);
					plot_axes(pbPlot->Image, origin, pn_OY, pn_OX);
					switch (comboBox1->SelectedIndex) {
					/*case 0:
						plot(&sin, x_min, x_max, y_min, y_max, pbPlot->Image, pn_line);
						break;*/
					case 0:
						plot(&cos, x_min, x_max, y_min, y_max, pbPlot->Image, pn_line);
						break;
					case 1:
						plot(&sinc, x_min, x_max, y_min, y_max, pbPlot->Image, pn_line);
						break;
					case 2:
						plot(&cosc, x_min, x_max, y_min, y_max, pbPlot->Image, pn_line);
						break;
					case 3:
						plot(&par, x_min, x_max, y_min, y_max, pbPlot->Image, pn_line);
						break;
					case 4:
						plot(&cube, x_min, x_max, y_min, y_max, pbPlot->Image, pn_line);
						break;
					//case 6:
					//	plot(&par, x_min, x_max, y_min, y_max, pbPlot->Image, pn_line);
					//	break;
					}
					pbPlot->Refresh();
				}
			}
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		double x_min, x_max, y_min, y_max;
		if (ProtectTbXmin())
			x_min = System::Convert::ToDouble(tbXmin->Text);
		else
			MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
		if (ProtectTbXmax())
			x_max = System::Convert::ToDouble(tbXmax->Text);
		else
			MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
		if (ProtectTbYmin())
			y_min = System::Convert::ToDouble(tbYmin->Text);
		else
			MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
		if (ProtectTbYmax())
			y_max = System::Convert::ToDouble(tbYmax->Text);
		else
			MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
		if ((y_min == y_max) || (x_min == x_max)) {
			MessageBox::Show(System::Convert::ToString("ОШИБКА ВВОДА"));
		}
		else {
			clear(pbPlot->Image, br);
			Point origin = get_origin_pixel(x_min, x_max, y_min, y_max, pbPlot->Image);
			labelX(pbPlot->Image, pn_axeses, x_min, x_max);
			labelY(pbPlot->Image, pn_axeses, y_min, y_max);
			plot_axes(pbPlot->Image, origin, pn_OY, pn_OX);
			pbPlot->Refresh();
		}
	}

	private: System::Void btnBuild_Click(System::Object^ sender, System::EventArgs^ e) {
		Graphic();
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbXmin->Text);
	C -= 0.5;
	tbXmin->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbXmin->Text);
	C += 0.5;
	tbXmin->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbXmax->Text);
	C -= 0.5;
	tbXmax->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbXmax->Text);
	C += 0.5;
	tbXmax->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbYmin->Text);
	C -= 0.5;
	tbYmin->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbYmin->Text);
	C += 0.5;
	tbYmin->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbYmax->Text);
	C -= 0.5;
	tbYmax->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	double C;
	C = System::Convert::ToDouble(tbYmax->Text);
	C += 0.5;
	tbYmax->Text = System::Convert::ToString(C);
	Graphic();
}
private: System::Void btnUp_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T;
	C = System::Convert::ToDouble(tbYmax->Text);
	C += 1;
	tbYmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbYmin->Text);
	T += 1;
	tbYmin->Text = System::Convert::ToString(T);
	Graphic();
}
private: System::Void btnDown_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T;
	C = System::Convert::ToDouble(tbYmax->Text);
	C -= 1;
	tbYmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbYmin->Text);
	T -= 1;
	tbYmin->Text = System::Convert::ToString(T);
	Graphic();
}
private: System::Void btnLeft_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T;
	C = System::Convert::ToDouble(tbXmax->Text);
	C -= 1;
	tbXmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbXmin->Text);
	T -= 1;
	tbXmin->Text = System::Convert::ToString(T);
	Graphic();
}
private: System::Void btnRight_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T;
	C = System::Convert::ToDouble(tbXmax->Text);
	C += 1;
	tbXmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbXmin->Text);
	T += 1;
	tbXmin->Text = System::Convert::ToString(T);
	Graphic();
}

private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T, a;
	a = ( System::Convert::ToDouble(tbXmax->Text)- System::Convert::ToDouble(tbXmin->Text)) / 100;
	C = System::Convert::ToDouble(tbXmax->Text);
	C -= a;
	tbXmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbXmin->Text);
	T += a;
	tbXmin->Text = System::Convert::ToString(T);
	Graphic();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T, a;
	a = (System::Convert::ToDouble(tbXmax->Text) - System::Convert::ToDouble(tbXmin->Text)) / 100;
	C = System::Convert::ToDouble(tbXmax->Text);
	C += a;
	tbXmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbXmin->Text);
	T -= a;
	tbXmin->Text = System::Convert::ToString(T);
	Graphic();
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T,a;
	a = (System::Convert::ToDouble(tbYmax->Text) - System::Convert::ToDouble(tbYmin->Text)) / 10;
	C = System::Convert::ToDouble(tbYmax->Text);
	C -= a;
	tbYmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbYmin->Text);
	T += a;
	tbYmin->Text = System::Convert::ToString(T);
	Graphic();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	double C, T, a;
	a = (System::Convert::ToDouble(tbYmax->Text) - System::Convert::ToDouble(tbYmin->Text)) / 10;
	C = System::Convert::ToDouble(tbYmax->Text);
	C += a;
	tbYmax->Text = System::Convert::ToString(C);
	T = System::Convert::ToDouble(tbYmin->Text);
	T -= a;
	tbYmin->Text = System::Convert::ToString(T);
	Graphic();
}
};
}
