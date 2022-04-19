#pragma once

#include "operations.h"
#include "enum.h"
#include "time.h"

#include "list"
#include "array"

typedef std::list<std::array<int, 3>> List;
typedef std::array<int, 3> Arr;

namespace Лаба8 {

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
			br = gcnew SolidBrush(Color::White);
			pbPlot->Image = gcnew Bitmap(pbPlot->Width, pbPlot->Height);
			draw_pn = gcnew Pen(Color::Blue, 3);
			br_pol = gcnew SolidBrush(Color::Blue);

			arr = gcnew array<PointF>(1);
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

	protected:

	protected:

	private: System::Windows::Forms::PictureBox^ pbPlot;
	private: System::Windows::Forms::Button^ Down;
	private: System::Windows::Forms::Button^ In;
	private: System::Windows::Forms::ListBox^ DotList;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::TextBox^ X_cord;
	private: System::Windows::Forms::TextBox^ Y_cord;
	private: System::Windows::Forms::Button^ Up;
	private: System::Windows::Forms::Button^ Out;
	private: System::Windows::Forms::Button^ Left;
	private: System::Windows::Forms::Button^ Right;
	private: System::Windows::Forms::Button^ RoundR;
	private: System::Windows::Forms::Button^ RoundL;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Draw;


	private: System::Windows::Forms::Button^ RandGen;
	private: System::Windows::Forms::TextBox^ RandCount;
	private: System::Windows::Forms::Button^ DelDot;
	private: System::Windows::Forms::Button^ RelateDot;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ ScaleIndX;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ ScaleIndY;
	private: System::Windows::Forms::TextBox^ MoveInd;
	private: System::Windows::Forms::TextBox^ RotateInd;
	private: System::Windows::Forms::TextBox^ RelY;
	private: System::Windows::Forms::TextBox^ RelX;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pbPlot = (gcnew System::Windows::Forms::PictureBox());
			this->Down = (gcnew System::Windows::Forms::Button());
			this->In = (gcnew System::Windows::Forms::Button());
			this->DotList = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->X_cord = (gcnew System::Windows::Forms::TextBox());
			this->Y_cord = (gcnew System::Windows::Forms::TextBox());
			this->Up = (gcnew System::Windows::Forms::Button());
			this->Out = (gcnew System::Windows::Forms::Button());
			this->Left = (gcnew System::Windows::Forms::Button());
			this->Right = (gcnew System::Windows::Forms::Button());
			this->RoundR = (gcnew System::Windows::Forms::Button());
			this->RoundL = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Draw = (gcnew System::Windows::Forms::Button());
			this->RandGen = (gcnew System::Windows::Forms::Button());
			this->RandCount = (gcnew System::Windows::Forms::TextBox());
			this->DelDot = (gcnew System::Windows::Forms::Button());
			this->RelateDot = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ScaleIndX = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->ScaleIndY = (gcnew System::Windows::Forms::TextBox());
			this->MoveInd = (gcnew System::Windows::Forms::TextBox());
			this->RotateInd = (gcnew System::Windows::Forms::TextBox());
			this->RelY = (gcnew System::Windows::Forms::TextBox());
			this->RelX = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->BeginInit();
			this->SuspendLayout();
			// 
			// pbPlot
			// 
			this->pbPlot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pbPlot->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pbPlot->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbPlot->Location = System::Drawing::Point(53, 14);
			this->pbPlot->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->pbPlot->Name = L"pbPlot";
			this->pbPlot->Size = System::Drawing::Size(550, 547);
			this->pbPlot->TabIndex = 1;
			this->pbPlot->TabStop = false;
			this->pbPlot->Click += gcnew System::EventHandler(this, &MyForm::pbPlot_Click);
			// 
			// Down
			// 
			this->Down->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Down->Location = System::Drawing::Point(12, 414);
			this->Down->Name = L"Down";
			this->Down->Size = System::Drawing::Size(32, 147);
			this->Down->TabIndex = 28;
			this->Down->Text = L"В\r\nн\r\nи\r\nз";
			this->Down->UseVisualStyleBackColor = true;
			this->Down->Click += gcnew System::EventHandler(this, &MyForm::Down_Click);
			// 
			// In
			// 
			this->In->Location = System::Drawing::Point(12, 246);
			this->In->Name = L"In";
			this->In->Size = System::Drawing::Size(32, 44);
			this->In->TabIndex = 29;
			this->In->Text = L"+";
			this->In->UseVisualStyleBackColor = true;
			this->In->Click += gcnew System::EventHandler(this, &MyForm::In_Click);
			// 
			// DotList
			// 
			this->DotList->FormattingEnabled = true;
			this->DotList->ItemHeight = 25;
			this->DotList->Location = System::Drawing::Point(616, 48);
			this->DotList->Name = L"DotList";
			this->DotList->Size = System::Drawing::Size(145, 354);
			this->DotList->TabIndex = 36;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(963, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Y : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(849, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"X : ";
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(767, 48);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(303, 36);
			this->Add->TabIndex = 37;
			this->Add->Text = L"Добавить";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// X_cord
			// 
			this->X_cord->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->X_cord->Location = System::Drawing::Point(897, 14);
			this->X_cord->Multiline = true;
			this->X_cord->Name = L"X_cord";
			this->X_cord->Size = System::Drawing::Size(60, 25);
			this->X_cord->TabIndex = 38;
			// 
			// Y_cord
			// 
			this->Y_cord->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Y_cord->Location = System::Drawing::Point(1010, 14);
			this->Y_cord->Multiline = true;
			this->Y_cord->Name = L"Y_cord";
			this->Y_cord->Size = System::Drawing::Size(60, 25);
			this->Y_cord->TabIndex = 39;
			// 
			// Up
			// 
			this->Up->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Up->Location = System::Drawing::Point(12, 14);
			this->Up->Name = L"Up";
			this->Up->Size = System::Drawing::Size(32, 149);
			this->Up->TabIndex = 40;
			this->Up->Text = L"В\r\nв\r\nе\r\nр\r\nх";
			this->Up->UseVisualStyleBackColor = true;
			this->Up->Click += gcnew System::EventHandler(this, &MyForm::Up_Click);
			// 
			// Out
			// 
			this->Out->Location = System::Drawing::Point(12, 296);
			this->Out->Name = L"Out";
			this->Out->Size = System::Drawing::Size(32, 44);
			this->Out->TabIndex = 41;
			this->Out->Text = L"-";
			this->Out->UseVisualStyleBackColor = true;
			this->Out->Click += gcnew System::EventHandler(this, &MyForm::Out_Click);
			// 
			// Left
			// 
			this->Left->Location = System::Drawing::Point(53, 572);
			this->Left->Name = L"Left";
			this->Left->Size = System::Drawing::Size(105, 31);
			this->Left->TabIndex = 43;
			this->Left->Text = L"Влево";
			this->Left->UseVisualStyleBackColor = true;
			this->Left->Click += gcnew System::EventHandler(this, &MyForm::Left_Click);
			// 
			// Right
			// 
			this->Right->Location = System::Drawing::Point(478, 572);
			this->Right->Name = L"Right";
			this->Right->Size = System::Drawing::Size(125, 31);
			this->Right->TabIndex = 44;
			this->Right->Text = L"Вправо";
			this->Right->UseVisualStyleBackColor = true;
			this->Right->Click += gcnew System::EventHandler(this, &MyForm::Right_Click);
			// 
			// RoundR
			// 
			this->RoundR->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RoundR->Location = System::Drawing::Point(164, 572);
			this->RoundR->Name = L"RoundR";
			this->RoundR->Size = System::Drawing::Size(174, 31);
			this->RoundR->TabIndex = 46;
			this->RoundR->Text = L"Поворот по часовой";
			this->RoundR->UseVisualStyleBackColor = true;
			this->RoundR->Click += gcnew System::EventHandler(this, &MyForm::RoundR_Click);
			// 
			// RoundL
			// 
			this->RoundL->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RoundL->Location = System::Drawing::Point(344, 574);
			this->RoundL->Name = L"RoundL";
			this->RoundL->Size = System::Drawing::Size(128, 30);
			this->RoundL->TabIndex = 47;
			this->RoundL->Text = L"Против часовой";
			this->RoundL->UseVisualStyleBackColor = true;
			this->RoundL->Click += gcnew System::EventHandler(this, &MyForm::RoundL_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(612, 14);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(238, 31);
			this->label3->TabIndex = 48;
			this->label3->Text = L"Точки многоугольника : ";
			// 
			// Draw
			// 
			this->Draw->Location = System::Drawing::Point(767, 90);
			this->Draw->Name = L"Draw";
			this->Draw->Size = System::Drawing::Size(303, 34);
			this->Draw->TabIndex = 49;
			this->Draw->Text = L"Нарисовать";
			this->Draw->UseVisualStyleBackColor = true;
			this->Draw->Click += gcnew System::EventHandler(this, &MyForm::Draw_Click);
			// 
			// RandGen
			// 
			this->RandGen->Location = System::Drawing::Point(767, 130);
			this->RandGen->Name = L"RandGen";
			this->RandGen->Size = System::Drawing::Size(237, 145);
			this->RandGen->TabIndex = 52;
			this->RandGen->Text = L"Сгенерировать случайный многоугольник с количеством вершин : ";
			this->RandGen->UseVisualStyleBackColor = true;
			this->RandGen->Click += gcnew System::EventHandler(this, &MyForm::RandGen_Click);
			// 
			// RandCount
			// 
			this->RandCount->Location = System::Drawing::Point(1010, 187);
			this->RandCount->Multiline = true;
			this->RandCount->Name = L"RandCount";
			this->RandCount->Size = System::Drawing::Size(60, 44);
			this->RandCount->TabIndex = 53;
			// 
			// DelDot
			// 
			this->DelDot->Location = System::Drawing::Point(767, 281);
			this->DelDot->Name = L"DelDot";
			this->DelDot->Size = System::Drawing::Size(303, 34);
			this->DelDot->TabIndex = 54;
			this->DelDot->Text = L"Удалить выбранные точки";
			this->DelDot->UseVisualStyleBackColor = true;
			this->DelDot->Click += gcnew System::EventHandler(this, &MyForm::DelDot_Click);
			// 
			// RelateDot
			// 
			this->RelateDot->Location = System::Drawing::Point(767, 321);
			this->RelateDot->Name = L"RelateDot";
			this->RelateDot->Size = System::Drawing::Size(303, 81);
			this->RelateDot->TabIndex = 55;
			this->RelateDot->Text = L"Назначить выбранную точку относительной";
			this->RelateDot->UseVisualStyleBackColor = true;
			this->RelateDot->Click += gcnew System::EventHandler(this, &MyForm::RelateDot_Click);
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(618, 453);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(213, 28);
			this->label6->TabIndex = 56;
			this->label6->Text = L"Шаг сдвига по осям : ";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(618, 496);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(235, 28);
			this->label7->TabIndex = 57;
			this->label7->Text = L"Коэфициент масштаба : ";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(618, 546);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(257, 40);
			this->label8->TabIndex = 58;
			this->label8->Text = L"Угол поворота в градусах : ";
			// 
			// ScaleIndX
			// 
			this->ScaleIndX->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ScaleIndX->Location = System::Drawing::Point(894, 493);
			this->ScaleIndX->Multiline = true;
			this->ScaleIndX->Name = L"ScaleIndX";
			this->ScaleIndX->Size = System::Drawing::Size(60, 30);
			this->ScaleIndX->TabIndex = 60;
			this->ScaleIndX->Text = L"1,0";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(849, 496);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 25);
			this->label9->TabIndex = 62;
			this->label9->Text = L"X : ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(963, 496);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 25);
			this->label10->TabIndex = 63;
			this->label10->Text = L"Y : ";
			// 
			// ScaleIndY
			// 
			this->ScaleIndY->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ScaleIndY->Location = System::Drawing::Point(1010, 493);
			this->ScaleIndY->Multiline = true;
			this->ScaleIndY->Name = L"ScaleIndY";
			this->ScaleIndY->Size = System::Drawing::Size(60, 32);
			this->ScaleIndY->TabIndex = 64;
			this->ScaleIndY->Text = L"1,0";
			// 
			// MoveInd
			// 
			this->MoveInd->Location = System::Drawing::Point(837, 448);
			this->MoveInd->Multiline = true;
			this->MoveInd->Name = L"MoveInd";
			this->MoveInd->Size = System::Drawing::Size(60, 31);
			this->MoveInd->TabIndex = 65;
			this->MoveInd->Text = L"1";
			// 
			// RotateInd
			// 
			this->RotateInd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RotateInd->Location = System::Drawing::Point(872, 543);
			this->RotateInd->Multiline = true;
			this->RotateInd->Name = L"RotateInd";
			this->RotateInd->Size = System::Drawing::Size(66, 30);
			this->RotateInd->TabIndex = 66;
			this->RotateInd->Text = L"45";
			// 
			// RelY
			// 
			this->RelY->Location = System::Drawing::Point(1010, 411);
			this->RelY->Multiline = true;
			this->RelY->Name = L"RelY";
			this->RelY->Size = System::Drawing::Size(60, 31);
			this->RelY->TabIndex = 70;
			this->RelY->Text = L"200";
			// 
			// RelX
			// 
			this->RelX->Location = System::Drawing::Point(894, 411);
			this->RelX->Multiline = true;
			this->RelX->Name = L"RelX";
			this->RelX->Size = System::Drawing::Size(63, 31);
			this->RelX->TabIndex = 69;
			this->RelX->Text = L"200";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(963, 415);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 25);
			this->label11->TabIndex = 68;
			this->label11->Text = L"Y : ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(849, 414);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 25);
			this->label12->TabIndex = 67;
			this->label12->Text = L"X : ";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(616, 408);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(215, 37);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Относительная точка : ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1084, 633);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->RelY);
			this->Controls->Add(this->RelX);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->RotateInd);
			this->Controls->Add(this->MoveInd);
			this->Controls->Add(this->ScaleIndY);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->ScaleIndX);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->RelateDot);
			this->Controls->Add(this->DelDot);
			this->Controls->Add(this->RandCount);
			this->Controls->Add(this->RandGen);
			this->Controls->Add(this->Draw);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->RoundL);
			this->Controls->Add(this->RoundR);
			this->Controls->Add(this->Right);
			this->Controls->Add(this->Left);
			this->Controls->Add(this->Out);
			this->Controls->Add(this->Up);
			this->Controls->Add(this->Y_cord);
			this->Controls->Add(this->X_cord);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->DotList);
			this->Controls->Add(this->In);
			this->Controls->Add(this->Down);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pbPlot);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPlot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Pen^ draw_pn;
		Brush^ br;
		Brush^ br_pol;

		Void clear(Image^ img, Brush^ br){
			Graphics^ gr = Graphics::FromImage(img);
			gr->FillRectangle(br, 0, 0, img->Width, img->Height);
		}
		Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(X_cord->Text) || String::IsNullOrEmpty(Y_cord->Text))
				return;
			DotList->Items->Add(Convert::ToString(X_cord->Text) + " " + Convert::ToString(Y_cord->Text));
		}

		array<PointF, 1>^ arr;
		PointF rel;

		bool angledot = false;
		int angledotind = 0;

		Void draw(){
			clear(pbPlot->Image, br);
			Graphics^ gr;
			gr = Graphics::FromImage(pbPlot->Image);
			gr->FillPolygon(br_pol, arr);
			pbPlot->Refresh();
		}
		Void Draw_Click(System::Object^ sender, System::EventArgs^ e) {
			if (DotList->Items->Count == 0)
				return;
			clear(pbPlot->Image, br);
			arr->Resize(arr, DotList->Items->Count);
			for (int i = 0; i < DotList->Items->Count; i++){
				array<String^>^ temp = DotList->Items[i]->ToString()->Split(' ');
				arr[i].X = Convert::ToDouble(temp[0]);
				arr[i].Y = Convert::ToDouble(temp[1]);
			}
			draw();
		}

		Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
			clear(pbPlot->Image, br);
			rel.X = 0;
			rel.Y = 0;
		}

		Void RandGen_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(RandCount->Text))
				return;
			int quantity = Convert::ToInt32(RandCount->Text);
			if (quantity < 3)
				return;

			srand(time(0));
			arr->Resize(arr, quantity);
			DotList->Items->Clear();

			int w = pbPlot->Image->Width;
			int h = pbPlot->Image->Height;
			for (int i = 0; i < quantity; i++){
				Point p;
				p.X = rand() % w;
				p.Y = rand() % h;
				arr[i] = p;
			}
			for (int i = 0; i < quantity; i++)
				DotList->Items->Add(Convert::ToString(arr[i].X) + " " + Convert::ToString(arr[i].Y));

			draw();
		}
		Void DelDot_Click(System::Object^ sender, System::EventArgs^ e) {
			int count = DotList->SelectedItems->Count;
			for (int i = 0; i < count; i++)
				DotList->Items->RemoveAt(DotList->Items->IndexOf(DotList->SelectedItems[0]->ToString()));
		}
		Void RelateDot_Click(System::Object^ sender, System::EventArgs^ e) {
			if (DotList->SelectedItems->Count == 0)
				return;
			angledotind = DotList->SelectedIndices[0];
			rel = arr[angledotind];
			angledot = true;
		}
		
		Void move(float x, float y){
			if (arr->Length < 3)
				return;
			array<float, 2>^ move = gcnew array<float, 2>(3, 3);
			move_mat(x, y, move);
			for (int i = 0; i < arr->Length; i++)
				arr[i] = apply(arr[i], move);
			draw();
		}
		Void Up_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!String::IsNullOrEmpty(MoveInd->Text))
				move(0, -Convert::ToDouble(MoveInd->Text));
			if (angledot)
				rel = arr[angledotind];
		}
		Void Down_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!String::IsNullOrEmpty(MoveInd->Text))
				move(0, Convert::ToDouble(MoveInd->Text));
			if (angledot)
				rel = arr[angledotind];
		}
		Void Left_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!String::IsNullOrEmpty(MoveInd->Text))
				move(-Convert::ToDouble(MoveInd->Text), 0);
			if (angledot)
				rel = arr[angledotind];
		}
		Void Right_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!String::IsNullOrEmpty(MoveInd->Text))
				move(Convert::ToDouble(MoveInd->Text), 0);
			if (angledot)
				rel = arr[angledotind];
		}
		Void Scale(float x, float y){
			if (arr->Length < 3)
				return;
			array<float, 2>^ sc = gcnew array<float, 2>(3, 3);
			scale_mat(rel, x, y, sc);
			for (int i = 0; i < arr->Length; i++)
				arr[i] = apply(arr[i], sc);
			draw();
			if (angledot)
				rel = arr[angledotind];
		}
		Void In_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(ScaleIndX->Text) || String::IsNullOrEmpty(ScaleIndY->Text))
				return;
			Scale(Convert::ToDouble(ScaleIndX->Text), Convert::ToDouble(ScaleIndY->Text));
			if (angledot)
				rel = arr[angledotind];
		}
		Void Out_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(ScaleIndX->Text) || String::IsNullOrEmpty(ScaleIndY->Text))
				return;
			Scale(1 / Convert::ToDouble(ScaleIndX->Text), 1 / Convert::ToDouble(ScaleIndY->Text));
			if (angledot)
				rel = arr[angledotind];
		}
		Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (String::IsNullOrEmpty(RelX->Text) || String::IsNullOrEmpty(RelY->Text))
				return;
			rel.X = Convert::ToInt32(RelX->Text);
			rel.Y = Convert::ToInt32(RelY->Text);
			angledot = false;
		}
		Void Rot(float rad){
			if (arr->Length < 3)
				return;
			array<float, 2>^ rot = gcnew array<float, 2>(3, 3);
			rotate_mat(rel, rad, rot);
			for (int i = 0; i < arr->Length; i++)
				arr[i] = apply(arr[i], rot);
			draw();
			if (angledot)
				rel = arr[angledotind];
		}
		Void RoundR_Click(System::Object^ sender, System::EventArgs^ e) {
			Rot(Convert::ToDouble(RotateInd->Text) / 57);
			if (angledot)
				rel = arr[angledotind];
		}
		Void RoundL_Click(System::Object^ sender, System::EventArgs^ e) {
			Rot(Convert::ToDouble(RotateInd->Text) / -57);
			if (angledot)
				rel = arr[angledotind];
		}
	private: System::Void pbPlot_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}