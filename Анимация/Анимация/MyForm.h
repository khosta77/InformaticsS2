#pragma once

#include "operations.h"
//#include "enum.h"
#include "time.h"

#include "list"
#include "array"

namespace јнимаци€ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
			pbAnima->Image = gcnew Bitmap(pbAnima->Width, pbAnima->Height);
			bro = gcnew SolidBrush(Color::White);
			br = gcnew SolidBrush(Color::Blue);
			BR = gcnew SolidBrush(Color::Black);
			br_shup = gcnew SolidBrush(Color::Orange);
			br_shup1 = gcnew SolidBrush(Color::Black);
			pn = gcnew Pen(Color::Red, 3);
			pno = gcnew Pen(Color::White, 1);

			shup1_ch1_3 = gcnew array<PointF>(8);
			shup1_ch2_3 = gcnew array<PointF>(8);
			shup1_ch3_3 = gcnew array<PointF>(8);
			shup2_ch1_3 = gcnew array<PointF>(8);
			shup2_ch2_3 = gcnew array<PointF>(8);
			shup2_ch3_3 = gcnew array<PointF>(8);
			shup3_ch1_3 = gcnew array<PointF>(8);
			shup3_ch2_3 = gcnew array<PointF>(8);
			shup3_ch3_3 = gcnew array<PointF>(8);
			shup4_ch1_3 = gcnew array<PointF>(8);
			shup4_ch2_3 = gcnew array<PointF>(8);
			shup4_ch3_3 = gcnew array<PointF>(8);
			shup5_ch1_2 = gcnew array<PointF>(5);
			shup5_ch2_2 = gcnew array<PointF>(6);
			shup6_ch1_2 = gcnew array<PointF>(5);
			shup6_ch2_2 = gcnew array<PointF>(6);
			body  = gcnew array<PointF>(9);
			eas = gcnew array<PointF>(4);
			pyz1 = gcnew array<PointF>(8);
		    pyz2 = gcnew array<PointF>(8);
			pyz3 = gcnew array<PointF>(8);
			t1 = gcnew array<PointF>(4);
			t2 = gcnew array<PointF>(4);
			t3 = gcnew array<PointF>(4);
			t4 = gcnew array<PointF>(4);
			t5 = gcnew array<PointF>(4);

			pts = gcnew array<PointF>(3);
			int x = pbAnima->Width / 2;
			int y = pbAnima->Height / 2;

			t1[0] = PointF(x - 110,y);
			t1[1] = PointF(x -115, y );
			t1[2] = PointF(x -115, y - 5);
			t1[3] = PointF(x -110, y - 5);

			t2[0] = PointF(x - 110, y+80);
			t2[1] = PointF(x - 115, y+80);
			t2[2] = PointF(x - 115, y +85);
			t2[3] = PointF(x - 110, y +85);

			t3[0] = PointF(x - 160, y + 15);
			t3[1] = PointF(x - 165, y+15);
			t3[2] = PointF(x - 165, y + 20);
			t3[3] = PointF(x - 160, y +20);

			t4[0] = PointF(x - 160, y + 65);
			t4[1] = PointF(x - 165, y + 65);
			t4[2] = PointF(x - 165, y + 70);
			t4[3] = PointF(x - 160, y + 70);

			t5[0] = PointF(x - 140, y+ 40);
			t5[1] = PointF(x - 145, y+40);
			t5[2] = PointF(x - 145, y +45);
			t5[3] = PointF(x - 140, y +45);

		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbAnima;
	protected:

	protected:

	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pbAnima = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAnima))->BeginInit();
			this->SuspendLayout();
			// 
			// pbAnima
			// 
			this->pbAnima->Location = System::Drawing::Point(0, 0);
			this->pbAnima->Margin = System::Windows::Forms::Padding(2);
			this->pbAnima->Name = L"pbAnima";
			this->pbAnima->Size = System::Drawing::Size(924, 509);
			this->pbAnima->TabIndex = 0;
			this->pbAnima->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(921, 505);
			this->Controls->Add(this->pbAnima);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAnima))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Brush^ br, ^BR,^br_shup,^br_shup1,^bro;
		Pen^ pn, ^pno;
		array<PointF>^ pts;
		array<PointF>
			^ shup1_ch1_3, ^ shup1_ch2_3, ^ shup1_ch3_3,
			^ shup2_ch1_3, ^ shup2_ch2_3, ^ shup2_ch3_3,
			^ shup3_ch1_3, ^ shup3_ch2_3, ^ shup3_ch3_3,
			^ shup4_ch1_3, ^ shup4_ch2_3, ^ shup4_ch3_3,
			^ shup5_ch1_2, ^ shup5_ch2_2,
			^ shup6_ch1_2, ^ shup6_ch2_2,
			^ body,
			^ eas,
			^ pyz1, ^ pyz2, ^ pyz3,
			^ t1, ^ t2, ^ t3, ^ t4, ^ t5;
		bool revers = false;
		bool cadr = true;
		bool skip = true;
		int tick = 0;

		Void Rot(float rad, int size, array<PointF>^ p,PointF rel){ // поворот
			array<float, 2>^ rot = gcnew array<float, 2>(3, 3);
			rotate_mat(rel, rad, rot);
			for (int i = 0; i < size; i++)
				p[i] = apply(p[i], rot);
		}
		Void Move(float x, float y, int size, array<PointF>^ p){ // перемещение
			array<float, 2>^ move = gcnew array<float, 2>(3, 3);
			move_mat(x, y, move);
			for (int i = 0; i < size; i++)
				p[i] = apply(p[i], move);
		}
		Void Scale(float x, float y, int size, array<PointF>^ p, PointF rel){ // больше/меньше
			array<float, 2>^ sc = gcnew array<float, 2>(3, 3);
			scale_mat(rel, x, y, sc);
			for (int i = 0; i < size; i++)
				p[i] = apply(p[i], sc);
		}
		void Clear(Image^ img) { // 
			Graphics^ gr = Graphics::FromImage(img);
			gr->FillRectangle(br, 0, 0, img->Width, img->Height);
		}
		void Draw(Image^ img) {
			Graphics^ gr = Graphics::FromImage(img);
			gr->DrawPolygon(pno, pyz1);
			gr->DrawPolygon(pno, pyz2);
			gr->DrawPolygon(pno, pyz3);

			gr->DrawPolygon(pno, t1);
			gr->DrawPolygon(pno, t2);
			gr->DrawPolygon(pno, t3);
			gr->DrawPolygon(pno, t4);
			gr->DrawPolygon(pno, t5);

			gr->FillPolygon(br_shup1, shup5_ch1_2);
			gr->FillPolygon(br_shup1, shup5_ch2_2);
			gr->FillPolygon(br_shup1, shup6_ch1_2);
			gr->FillPolygon(br_shup1, shup6_ch2_2);
			  
			gr->FillPolygon(br_shup, body);
			gr->DrawPolygon(pn, body);

			gr->FillPolygon(BR, eas);
			gr->DrawPolygon(pn, eas);

			gr->FillPolygon(br_shup, shup2_ch1_3);
			gr->DrawPolygon(pn, shup2_ch1_3);
			gr->FillPolygon(br_shup, shup2_ch2_3);
			gr->DrawPolygon(pn, shup2_ch2_3);
			gr->FillPolygon(br_shup, shup2_ch3_3);
			gr->DrawPolygon(pn, shup2_ch3_3);

			gr->FillPolygon(br_shup, shup1_ch1_3);
			gr->DrawPolygon(pn, shup1_ch1_3);
			gr->FillPolygon(br_shup, shup1_ch2_3);
			gr->DrawPolygon(pn, shup1_ch2_3);
			gr->FillPolygon(br_shup, shup1_ch3_3);
			gr->DrawPolygon(pn, shup1_ch3_3);

			gr->FillPolygon(br_shup, shup3_ch1_3);
			gr->DrawPolygon(pn, shup3_ch1_3);
			gr->FillPolygon(br_shup, shup3_ch2_3);
			gr->DrawPolygon(pn, shup3_ch2_3);
			gr->FillPolygon(br_shup, shup3_ch3_3);
			gr->DrawPolygon(pn, shup3_ch3_3);

			gr->FillPolygon(br_shup, shup4_ch1_3);
			gr->DrawPolygon(pn, shup4_ch1_3);
			gr->FillPolygon(br_shup, shup4_ch2_3);
			gr->DrawPolygon(pn, shup4_ch2_3);
			gr->FillPolygon(br_shup, shup4_ch3_3);
			gr->DrawPolygon(pn, shup4_ch3_3);
		}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (cadr) {
		tochki();
	}
	cadr = false;
	Clear(pbAnima->Image);
	shup();
	Body();
	ea();
	pyz();
	Draw(pbAnima->Image);
	pbAnima->Refresh();
}

	   Void tochki() {
		   int x = pbAnima->Width / 2;
		   int y = pbAnima->Height / 2;
		   {
			   shup1_ch1_3[0] = PointF(x + 10, y + 20);
			   shup1_ch1_3[1] = PointF(x + 15, y + 20);
			   shup1_ch1_3[2] = PointF(x + 20, y + 30);
			   shup1_ch1_3[3] = PointF(x + 20, y + 70);
			   shup1_ch1_3[4] = PointF(x + 15, y + 80);
			   shup1_ch1_3[5] = PointF(x + 10, y + 80);
			   shup1_ch1_3[6] = PointF(x + 05, y + 70);
			   shup1_ch1_3[7] = PointF(x + 05, y + 30);

			   shup1_ch2_3[0] = PointF(x + 10, y + 50);
			   shup1_ch2_3[1] = PointF(x + 15, y + 50);
			   shup1_ch2_3[2] = PointF(x + 20, y + 60);
			   shup1_ch2_3[3] = PointF(x + 20, y + 90);
			   shup1_ch2_3[4] = PointF(x + 15, y + 100);
			   shup1_ch2_3[5] = PointF(x + 10, y + 100);
			   shup1_ch2_3[6] = PointF(x + 05, y + 90);
			   shup1_ch2_3[7] = PointF(x + 05, y + 60);

			   shup1_ch3_3[0] = PointF(x + 10, y + 80);
			   shup1_ch3_3[1] = PointF(x + 15, y + 80);
			   shup1_ch3_3[2] = PointF(x + 20, y + 90);
			   shup1_ch3_3[3] = PointF(x + 25, y + 110);
			   shup1_ch3_3[4] = PointF(x + 20, y + 120);
			   shup1_ch3_3[5] = PointF(x + 15, y + 120);
			   shup1_ch3_3[6] = PointF(x + 10, y + 110);
			   shup1_ch3_3[7] = PointF(x + 05, y + 90);
		   }
		   {
			   shup2_ch1_3[0] = PointF(x - 10, y + 20);
			   shup2_ch1_3[1] = PointF(x - 15, y + 20);
			   shup2_ch1_3[2] = PointF(x - 20, y + 30);
			   shup2_ch1_3[3] = PointF(x - 20, y + 70);
			   shup2_ch1_3[4] = PointF(x - 15, y + 80);
			   shup2_ch1_3[5] = PointF(x - 10, y + 80);
			   shup2_ch1_3[6] = PointF(x - 05, y + 70);
			   shup2_ch1_3[7] = PointF(x - 05, y + 30);

			   shup2_ch2_3[0] = PointF(x - 10, y + 50);
			   shup2_ch2_3[1] = PointF(x - 15, y + 50);
			   shup2_ch2_3[2] = PointF(x - 20, y + 60);
			   shup2_ch2_3[3] = PointF(x - 20, y + 90);
			   shup2_ch2_3[4] = PointF(x - 15, y + 100);
			   shup2_ch2_3[5] = PointF(x - 10, y + 100);
			   shup2_ch2_3[6] = PointF(x - 05, y + 90);
			   shup2_ch2_3[7] = PointF(x - 05, y + 60);

			   shup2_ch3_3[0] = PointF(x - 10, y + 80);
			   shup2_ch3_3[1] = PointF(x - 15, y + 80);
			   shup2_ch3_3[2] = PointF(x - 20, y + 90);
			   shup2_ch3_3[3] = PointF(x - 25, y + 110);
			   shup2_ch3_3[4] = PointF(x - 20, y + 120);
			   shup2_ch3_3[5] = PointF(x - 15, y + 120);
			   shup2_ch3_3[6] = PointF(x - 10, y + 110);
			   shup2_ch3_3[7] = PointF(x - 05, y + 90);
		   }
		   {
			   shup3_ch1_3[0] = PointF(x - 30, y + 20);
			   shup3_ch1_3[1] = PointF(x - 35, y + 20);
			   shup3_ch1_3[2] = PointF(x - 40, y + 30);
			   shup3_ch1_3[3] = PointF(x - 40, y + 70);
			   shup3_ch1_3[4] = PointF(x - 35, y + 80);
			   shup3_ch1_3[5] = PointF(x - 30, y + 80);
			   shup3_ch1_3[6] = PointF(x - 25, y + 70);
			   shup3_ch1_3[7] = PointF(x - 25, y + 30);

			   shup3_ch2_3[0] = PointF(x - 30, y + 50);
			   shup3_ch2_3[1] = PointF(x - 35, y + 50);
			   shup3_ch2_3[2] = PointF(x - 40, y + 60);
			   shup3_ch2_3[3] = PointF(x - 40, y + 90);
			   shup3_ch2_3[4] = PointF(x - 35, y + 100);
			   shup3_ch2_3[5] = PointF(x - 30, y + 100);
			   shup3_ch2_3[6] = PointF(x - 25, y + 90);
			   shup3_ch2_3[7] = PointF(x - 25, y + 60);

			   shup3_ch3_3[0] = PointF(x - 30, y + 80);
			   shup3_ch3_3[1] = PointF(x - 35, y + 80);
			   shup3_ch3_3[2] = PointF(x - 40, y + 90);
			   shup3_ch3_3[3] = PointF(x - 45, y + 110);
			   shup3_ch3_3[4] = PointF(x - 40, y + 120);
			   shup3_ch3_3[5] = PointF(x - 35, y + 120);
			   shup3_ch3_3[6] = PointF(x - 30, y + 110);
			   shup3_ch3_3[7] = PointF(x - 25, y + 90);
		   }
		   {
			   shup4_ch1_3[0] = PointF(x + 30, y + 20);
			   shup4_ch1_3[1] = PointF(x + 35, y + 20);
			   shup4_ch1_3[2] = PointF(x + 40, y + 30);
			   shup4_ch1_3[3] = PointF(x + 40, y + 70);
			   shup4_ch1_3[4] = PointF(x + 35, y + 80);
			   shup4_ch1_3[5] = PointF(x + 30, y + 80);
			   shup4_ch1_3[6] = PointF(x + 25, y + 70);
			   shup4_ch1_3[7] = PointF(x + 25, y + 30);

			   shup4_ch2_3[0] = PointF(x + 30, y + 50);
			   shup4_ch2_3[1] = PointF(x + 35, y + 50);
			   shup4_ch2_3[2] = PointF(x + 40, y + 60);
			   shup4_ch2_3[3] = PointF(x + 40, y + 90);
			   shup4_ch2_3[4] = PointF(x + 35, y + 100);
			   shup4_ch2_3[5] = PointF(x + 30, y + 100);
			   shup4_ch2_3[6] = PointF(x + 25, y + 90);
			   shup4_ch2_3[7] = PointF(x + 25, y + 60);

			   shup4_ch3_3[0] = PointF(x + 30, y + 80);
			   shup4_ch3_3[1] = PointF(x + 35, y + 80);
			   shup4_ch3_3[2] = PointF(x + 40, y + 90);
			   shup4_ch3_3[3] = PointF(x + 45, y + 110);
			   shup4_ch3_3[4] = PointF(x + 40, y + 120);
			   shup4_ch3_3[5] = PointF(x + 35, y + 120);
			   shup4_ch3_3[6] = PointF(x + 30, y + 110);
			   shup4_ch3_3[7] = PointF(x + 25, y + 90);
		   }
		   {
			   shup5_ch1_2[0] = PointF(x, y+20);
			   shup5_ch1_2[1] = PointF(x + 10, y+20);
			   shup5_ch1_2[4] = PointF(x + 7.5, y + 40);
			   shup5_ch1_2[2] = PointF(x + 12.5, y + 40);
			   shup5_ch1_2[3] = PointF(x + 10, y + 45);

			   shup5_ch2_2[0] = PointF(x + 10, y + 35);
			   shup5_ch2_2[1] = PointF(x + 7.5, y + 40);
			   shup5_ch2_2[2] = PointF(x, y + 60);
			   shup5_ch2_2[3] = PointF(x + 7.5, y + 65);
			   shup5_ch2_2[4] = PointF(x + 10, y + 60);
			   shup5_ch2_2[5] = PointF(x + 12.5, y + 40);

			   shup6_ch1_2[0] = PointF(x, y+20);
			   shup6_ch1_2[1] = PointF(x - 10, y+20);
			   shup6_ch1_2[4] = PointF(x - 7.5, y + 40);
			   shup6_ch1_2[2] = PointF(x - 12.5, y + 40);
			   shup6_ch1_2[3] = PointF(x - 10, y + 45);

			   shup6_ch2_2[0] = PointF(x - 10, y + 35);
			   shup6_ch2_2[1] = PointF(x - 7.5, y + 40);
			   shup6_ch2_2[2] = PointF(x, y + 60);
			   shup6_ch2_2[3] = PointF(x - 7.5, y + 65);
			   shup6_ch2_2[4] = PointF(x - 10, y + 60);
			   shup6_ch2_2[5] = PointF(x - 12.5, y + 40);
		   }
		   {
			   body[0] = PointF(x, y + 40);
			   body[1] = PointF(x + 50, y + 20);
			   body[2] = PointF(x + 30, y - 20);
			   body[3] = PointF(x + 10, y - 30);
			   body[4] = PointF(x + 2, y - 35);
			   body[5] = PointF(x - 2, y - 35);
			   body[6] = PointF(x - 10, y - 30);
			   body[7] = PointF(x - 30, y - 20);
			   body[8] = PointF(x - 50, y + 20);
		   }
		   {
			   eas[0] = PointF(x + 5, y - 5);
			   eas[1] = PointF(x + 15, y - 5);
			   eas[2] = PointF(x + 15, y - 15);
			   eas[3] = PointF(x + 5, y - 15);
		   }
		   {
			   pyz1[0] = PointF(x - 40, y - 40);
			   pyz1[1] = PointF(x - 35, y - 45);
			   pyz1[2] = PointF(x - 35, y - 50);
			   pyz1[3] = PointF(x - 40, y - 55);
			   pyz1[4] = PointF(x - 45, y - 55);
			   pyz1[5] = PointF(x - 50, y - 50);
			   pyz1[6] = PointF(x - 50, y - 45);
			   pyz1[7] = PointF(x - 45, y - 40);

			   pyz2[0] = PointF(x + 50, y - 20);
			   pyz2[1] = PointF(x + 45, y - 25);
			   pyz2[2] = PointF(x + 45, y - 30);
			   pyz2[3] = PointF(x + 50, y - 35);
			   pyz2[4] = PointF(x + 55, y - 35);
			   pyz2[5] = PointF(x + 60, y - 30);
			   pyz2[6] = PointF(x + 60, y - 25);
			   pyz2[7] = PointF(x + 55, y - 20);

			   pyz3[0] = PointF(x, y - 50);
			   pyz3[1] = PointF(x - 5, y - 55);
			   pyz3[2] = PointF(x - 5, y - 60);
			   pyz3[3] = PointF(x, y - 65);
			   pyz3[4] = PointF(x + 5, y - 65);
			   pyz3[5] = PointF(x + 10, y - 60);
			   pyz3[6] = PointF(x + 10, y - 55);
			   pyz3[7] = PointF(x + 5, y - 50);
		   }
		   {
			   t1[0] = PointF(x - 110, y);
			   t1[1] = PointF(x - 115, y);
			   t1[2] = PointF(x - 115, y - 5);
			   t1[3] = PointF(x - 110, y - 5);

			   t2[0] = PointF(x - 110, y + 80);
			   t2[1] = PointF(x - 115, y + 80);
			   t2[2] = PointF(x - 115, y + 85);
			   t2[3] = PointF(x - 110, y + 85);

			   t3[0] = PointF(x - 160, y + 15);
			   t3[1] = PointF(x - 165, y + 15);
			   t3[2] = PointF(x - 165, y + 20);
			   t3[3] = PointF(x - 160, y + 20);

			   t4[0] = PointF(x - 160, y + 65);
			   t4[1] = PointF(x - 165, y + 65);
			   t4[2] = PointF(x - 165, y + 70);
			   t4[3] = PointF(x - 160, y + 70);

			   t5[0] = PointF(x - 140, y + 40);
			   t5[1] = PointF(x - 145, y + 40);
			   t5[2] = PointF(x - 145, y + 45);
			   t5[3] = PointF(x - 140, y + 45);
		   }
	   }
	   Void shup() {
		   if (tick < 60) {
			   PointF rl = PointF(pbAnima->Width / 2 + 12.5, pbAnima->Height / 2 + 30);
			   PointF rl1 = PointF(shup1_ch1_3[3].X - 17.5, shup1_ch1_3[3].Y);
			   PointF rl2 = PointF(shup1_ch2_3[3].X - 17.5, shup1_ch2_3[3].Y);

			   PointF Rl = PointF(pbAnima->Width / 2 - 12.5, pbAnima->Height / 2 + 30);
			   PointF Rl1 = PointF(shup2_ch1_3[3].X + 17.5, shup2_ch1_3[3].Y);
			   PointF Rl2 = PointF(shup2_ch2_3[3].X + 17.5, shup2_ch2_3[3].Y);

			   PointF Rl0 = PointF(pbAnima->Width / 2 - 32.5, pbAnima->Height / 2 + 30);
			   PointF Rl01 = PointF(shup2_ch1_3[3].X + 07.5, shup2_ch1_3[3].Y);
			   PointF Rl02 = PointF(shup2_ch2_3[3].X + 04.5, shup2_ch2_3[3].Y);

			   PointF rl0 = PointF(pbAnima->Width / 2 + 32.5, pbAnima->Height / 2 + 30);
			   PointF rl01 = PointF(shup1_ch1_3[3].X - 07.5, shup1_ch1_3[3].Y);
			   PointF rl02 = PointF(shup1_ch2_3[3].X - 04.5, shup1_ch2_3[3].Y);

			   PointF RL = PointF(pbAnima->Width / 2, pbAnima->Height / 2);
			   
			   if (tick < 15) {
				   {
					   Rot(-0.017, 8, shup1_ch1_3, rl);
					   Rot(-0.017, 8, shup1_ch2_3, rl);
					   Rot(0.017, 8, shup1_ch2_3, rl1);
					   Rot(-0.0115, 8, shup1_ch3_3, rl);
					   Rot(0.025, 8, shup1_ch3_3, rl2);
					   Move(0.11, 0, 8, shup1_ch2_3);
				   }
				   {
					   Rot(0.017, 8, shup2_ch1_3, Rl);
					   Rot(0.017, 8, shup2_ch2_3, Rl);
					   Rot(-0.017, 8, shup2_ch2_3, Rl1);
					   Rot(0.0115, 8, shup2_ch3_3, Rl);
					   Rot(-0.025, 8, shup2_ch3_3, Rl2);
					   Move(-0.11, 0, 8, shup2_ch2_3);
				   }
				   {
					   Rot(0.017, 8, shup3_ch1_3, Rl0);
					   Rot(0.017, 8, shup3_ch2_3, Rl0);
					   Rot(-0.017, 8, shup3_ch2_3, Rl01);
					   Rot(0.0115, 8, shup3_ch3_3, Rl0);
					   Rot(-0.025, 8, shup3_ch3_3, Rl02);
					   Move(-0.11, 0, 8, shup3_ch2_3);
				   }
				   {
					   Rot(-0.017, 8, shup4_ch1_3, rl0);
					   Rot(-0.017, 8, shup4_ch2_3, rl0);
					   Rot(0.017, 8, shup4_ch2_3, rl01);
					   Rot(-0.0115, 8, shup4_ch3_3, rl0);
					   Rot(0.025, 8, shup4_ch3_3, rl02);
					   Move(0.11, 0, 8, shup4_ch2_3);
				   }
				   {
					   Rot(-0.00425, 5, shup5_ch1_2, RL);
					   Rot(-0.00425, 6, shup5_ch2_2, RL);
				   }
				   {
					   Rot(0.00425, 5, shup6_ch1_2, RL);
					   Rot(0.00425, 6, shup6_ch2_2, RL);
				   }
			   }
			   if (tick > 15 && tick < 30) {
				   {
					   Rot(-0.017, 8, shup1_ch1_3, rl);
					   Rot(-0.017, 8, shup1_ch2_3, rl);
					   Rot(0.017, 8, shup1_ch2_3, rl1);
					   Rot(-0.0115, 8, shup1_ch3_3, rl);
					   Rot(0.03, 8, shup1_ch3_3, rl2);
					   Move(0.11, 0, 8, shup1_ch2_3);
				   }
				   {
					   Rot(0.017, 8, shup2_ch1_3, Rl);
					   Rot(0.017, 8, shup2_ch2_3, Rl);
					   Rot(-0.017, 8, shup2_ch2_3, Rl1);
					   Rot(0.0115, 8, shup2_ch3_3, Rl);
					   Rot(-0.03, 8, shup2_ch3_3, Rl2);
					   Move(-0.11, 0, 8, shup2_ch2_3);
				   }
				   {
					   Rot(0.017, 8, shup3_ch1_3, Rl0);
					   Rot(0.017, 8, shup3_ch2_3, Rl0);
					   Rot(-0.017, 8, shup3_ch2_3, Rl01);
					   Rot(0.0115, 8, shup3_ch3_3, Rl0);
					   Rot(-0.03, 8, shup3_ch3_3, Rl02);
					   Move(-0.11, 0, 8, shup3_ch2_3);
				   }
				   {
					   Rot(-0.017, 8, shup4_ch1_3, rl0);
					   Rot(-0.017, 8, shup4_ch2_3, rl0);
					   Rot(0.017, 8, shup4_ch2_3, rl01);
					   Rot(-0.0115, 8, shup4_ch3_3, rl0);
					   Rot(0.03, 8, shup4_ch3_3, rl02);
					   Move(0.11, 0, 8, shup4_ch2_3);
				   }
				   {
					   Rot(-0.00425, 5, shup5_ch1_2, RL);
					   Rot(-0.00425, 6, shup5_ch2_2, RL);
				   }
				   {
					   Rot(0.00425, 5, shup6_ch1_2, RL);
					   Rot(0.00425, 6, shup6_ch2_2, RL);
				   }
			   }
			   if (tick > 30 && tick < 45) {
				   {
					   Rot(-0.02, 8, shup1_ch1_3, rl);
					   Rot(-0.017, 8, shup1_ch2_3, rl);
					   Rot(0.017, 8, shup1_ch2_3, rl1);
					   Move(0.11, 0, 8, shup1_ch2_3);
					   Rot(-0.0115, 8, shup1_ch3_3, rl);
					   Rot(0.03, 8, shup1_ch3_3, rl2);
				   }
				   {
					   Rot(0.02, 8, shup2_ch1_3, Rl);
					   Rot(0.017, 8, shup2_ch2_3, Rl);
					   Rot(-0.017, 8, shup2_ch2_3, Rl1);
					   Move(-0.11, 0, 8, shup2_ch2_3);
					   Rot(0.0115, 8, shup2_ch3_3, Rl);
					   Rot(-0.03, 8, shup2_ch3_3, Rl2);
				   }
				   {
					   Rot(0.02, 8, shup3_ch1_3, Rl0);
					   Rot(0.017, 8, shup3_ch2_3, Rl0);
					   Rot(-0.017, 8, shup3_ch2_3, Rl01);
					   Move(-0.11, 0, 8, shup3_ch2_3);
					   Rot(0.0115, 8, shup3_ch3_3, Rl0);
					   Rot(-0.03, 8, shup3_ch3_3, Rl02);
				   }
				   {
					   Rot(-0.02, 8, shup4_ch1_3, rl0);
					   Rot(-0.017, 8, shup4_ch2_3, rl0);
					   Rot(0.017, 8, shup4_ch2_3, rl01);
					   Move(0.11, 0, 8, shup4_ch2_3);
					   Rot(-0.0115, 8, shup4_ch3_3, rl0);
					   Rot(0.03, 8, shup4_ch3_3, rl02);
				   }
				   {
					   Rot(-0.00425, 5, shup5_ch1_2, RL);
					   Rot(-0.00425, 6, shup5_ch2_2, RL);
				   }
				   {
					   Rot(0.00425, 5, shup6_ch1_2, RL);
					   Rot(0.00425, 6, shup6_ch2_2, RL);
				   }
			   }
			   if (tick > 45 && tick < 60) {
				   {
					   Rot(-0.02, 8, shup1_ch1_3, rl);
					   Rot(-0.028, 8, shup1_ch2_3, rl);
					   Rot(0.025, 8, shup1_ch2_3, rl1);
					   Move(0.11, 0, 8, shup1_ch2_3);
					   Rot(-0.0115, 8, shup1_ch3_3, rl);
					   Rot(0.03, 8, shup1_ch3_3, rl2);
					   Scale(0.99, 0.99, 8, shup1_ch3_3, rl2);
				   }
				   {
					   Rot(0.02, 8, shup2_ch1_3, Rl);
					   Rot(0.028, 8, shup2_ch2_3, Rl);
					   Rot(-0.025, 8, shup2_ch2_3, Rl1);
					   Move(-0.11, 0, 8, shup2_ch2_3);
					   Rot(0.0115, 8, shup2_ch3_3, Rl);
					   Rot(-0.03, 8, shup2_ch3_3, Rl2);
					   Scale(0.99, 0.99, 8, shup2_ch3_3, Rl2);
				   }
				   {
					   Rot(0.02, 8, shup3_ch1_3, Rl0);
					   Rot(0.028, 8, shup3_ch2_3, Rl0);
					   Rot(-0.025, 8, shup3_ch2_3, Rl01);
					   Move(-0.11, 0, 8, shup3_ch2_3);
					   Rot(0.0115, 8, shup3_ch3_3, Rl0);
					   Rot(-0.03, 8, shup3_ch3_3, Rl02);
					   Scale(0.99, 0.99, 8, shup3_ch3_3, Rl02);
				   }
				   {
					   Rot(-0.02, 8, shup4_ch1_3, rl0);
					   Rot(-0.028, 8, shup4_ch2_3, rl0);
					   Rot(0.025, 8, shup4_ch2_3, rl01);
					   Move(0.11, 0, 8, shup4_ch2_3);
					   Rot(-0.0115, 8, shup4_ch3_3, rl0);
					   Rot(0.03, 8, shup4_ch3_3, rl02);
					   Scale(0.99, 0.99, 8, shup4_ch3_3, rl02);
				   }
				   {
					   Rot(-0.00425, 5, shup5_ch1_2, RL);
					   Rot(-0.00425, 6, shup5_ch2_2, RL);
				   }
				   {
					   Rot(0.00425, 5, shup6_ch1_2, RL);
					   Rot(0.00425, 6, shup6_ch2_2, RL);
				   }
			   }
			   tick++;
		   }
		   else {
			   if (tick < 120) {
				   PointF rl = PointF(pbAnima->Width / 2 + 12.5, pbAnima->Height / 2 + 30);
				   PointF rl1 = PointF(shup1_ch1_3[3].X - 17.5, shup1_ch1_3[3].Y);
				   PointF rl2 = PointF(shup1_ch2_3[3].X - 17.5, shup1_ch2_3[3].Y);

				   PointF Rl = PointF(pbAnima->Width / 2 - 12.5, pbAnima->Height / 2 + 30);
				   PointF Rl1 = PointF(shup2_ch1_3[3].X + 17.5, shup2_ch1_3[3].Y);
				   PointF Rl2 = PointF(shup2_ch2_3[3].X + 17.5, shup2_ch2_3[3].Y);

				   PointF Rl0 = PointF(pbAnima->Width / 2 - 32.5, pbAnima->Height / 2 + 30);
				   PointF Rl01 = PointF(shup2_ch1_3[3].X + 07.5, shup2_ch1_3[3].Y);
				   PointF Rl02 = PointF(shup2_ch2_3[3].X + 04.5, shup2_ch2_3[3].Y);

				   PointF rl0 = PointF(pbAnima->Width / 2 + 32.5, pbAnima->Height / 2 + 30);
				   PointF rl01 = PointF(shup1_ch1_3[3].X - 07.5, shup1_ch1_3[3].Y);
				   PointF rl02 = PointF(shup1_ch2_3[3].X - 04.5, shup1_ch2_3[3].Y);

				   PointF RL = PointF(pbAnima->Width / 2, pbAnima->Height / 2);
				   if (tick > 60 && tick < 75) {
					   {
						   Rot(0.02, 8, shup1_ch1_3, rl);
						   Rot(0.028, 8, shup1_ch2_3, rl);
						   Rot(-0.025, 8, shup1_ch2_3, rl1);
		    			   Move(-0.11, 0, 8, shup1_ch2_3);
						   Rot(0.0115, 8, shup1_ch3_3, rl);
						   Rot(-0.03, 8, shup1_ch3_3, rl2);
						   Scale(1.01, 1.01, 8, shup1_ch3_3, rl2);
					   }
					   {
						   Rot(-0.02, 8, shup2_ch1_3, Rl);
						   Rot(-0.028, 8, shup2_ch2_3, Rl);
						   Rot(0.025, 8, shup2_ch2_3, Rl1);
						   Move(0.11, 0, 8, shup2_ch2_3);
						   Rot(-0.0115, 8, shup2_ch3_3, Rl);
						   Rot(0.03, 8, shup2_ch3_3, Rl2);
						   Scale(1.01, 1.01, 8, shup2_ch3_3, Rl2);
					   }
					   {
						   Rot(-0.02, 8, shup3_ch1_3, Rl0);
						   Rot(-0.028, 8, shup3_ch2_3, Rl0);
						   Rot(0.025, 8, shup3_ch2_3, Rl01);
						   Move(0.11, 0, 8, shup3_ch2_3);
						   Rot(-0.0115, 8, shup3_ch3_3, Rl0);
						   Rot(0.03, 8, shup3_ch3_3, Rl02);
						   Scale(1.01, 1.01, 8, shup3_ch3_3, Rl02);
					   }
					   {
						   Rot(0.02, 8, shup4_ch1_3, rl0);
						   Rot(0.028, 8, shup4_ch2_3, rl0);
						   Rot(-0.025, 8, shup4_ch2_3, rl01);
						   Move(-0.11, 0, 8, shup4_ch2_3);
						   Rot(0.0115, 8, shup4_ch3_3, rl0);
						   Rot(-0.03, 8, shup4_ch3_3, rl02);
						   Scale(1.01, 1.01, 8, shup4_ch3_3, rl02);
					   }
					   {
						   Rot(0.00425, 5, shup5_ch1_2, RL);
						   Rot(0.00425, 6, shup5_ch2_2, RL);
					   }
					   {
						   Rot(-0.00425, 5, shup6_ch1_2, RL);
						   Rot(-0.00425, 6, shup6_ch2_2, RL);
					   }
				   }
				   if (tick > 75 && tick < 90) {
					   {
						   Rot(0.02, 8, shup1_ch1_3, rl);
						   Rot(0.017, 8, shup1_ch2_3, rl);
						   Rot(-0.017, 8, shup1_ch2_3, rl1);
						   Move(-0.11, 0, 8, shup1_ch2_3);
						   Rot(0.0115, 8, shup1_ch3_3, rl);
						   Rot(-0.03, 8, shup1_ch3_3, rl2);
					   }
					   {
						   Rot(-0.02, 8, shup2_ch1_3, Rl);
						   Rot(-0.017, 8, shup2_ch2_3, Rl);
						   Rot(0.017, 8, shup2_ch2_3, Rl1);
						   Move(0.11, 0, 8, shup2_ch2_3);
						   Rot(-0.0115, 8, shup2_ch3_3, Rl);
						   Rot(0.03, 8, shup2_ch3_3, Rl2);
					   }
					   {
						   Rot(-0.02, 8, shup3_ch1_3, Rl0);
						   Rot(-0.017, 8, shup3_ch2_3, Rl0);
						   Rot(0.017, 8, shup3_ch2_3, Rl01);
						   Move(0.11, 0, 8, shup3_ch2_3);
						   Rot(-0.0115, 8, shup3_ch3_3, Rl0);
						   Rot(0.03, 8, shup3_ch3_3, Rl02);
					   }
					   {
						   Rot(0.02, 8, shup4_ch1_3, rl0);
						   Rot(0.017, 8, shup4_ch2_3, rl0);
						   Rot(-0.017, 8, shup4_ch2_3, rl01);
						   Move(-0.11, 0, 8, shup4_ch2_3);
						   Rot(0.0115, 8, shup4_ch3_3, rl0);
						   Rot(-0.03, 8, shup4_ch3_3, rl02);
					   }
					   {
						   Rot(0.00425, 5, shup5_ch1_2, RL);
						   Rot(0.00425, 6, shup5_ch2_2, RL);
					   }
					   {
						   Rot(-0.00425, 5, shup6_ch1_2, RL);
						   Rot(-0.00425, 6, shup6_ch2_2, RL);
					   }
				   }
				   if (tick > 90 && tick < 105) {
					   {
						   Rot(0.017, 8, shup1_ch1_3, rl);
						   Rot(0.017, 8, shup1_ch2_3, rl);
						   Rot(-0.017, 8, shup1_ch2_3, rl1);
						   Move(-0.11, 0, 8, shup1_ch2_3);
						   Rot(0.0115, 8, shup1_ch3_3, rl);
						   Rot(-0.03, 8, shup1_ch3_3, rl2);
					   }
					   {
						   Rot(-0.017, 8, shup2_ch1_3, Rl);
						   Rot(-0.017, 8, shup2_ch2_3, Rl);
						   Rot(0.017, 8, shup2_ch2_3, Rl1);
						   Move(0.11, 0, 8, shup2_ch2_3);
						   Rot(-0.0115, 8, shup2_ch3_3, Rl);
						   Rot(0.03, 8, shup2_ch3_3, Rl2);
					   }
					   {
						   Rot(-0.017, 8, shup3_ch1_3, Rl0);
						   Rot(-0.017, 8, shup3_ch2_3, Rl0);
						   Rot(0.017, 8, shup3_ch2_3, Rl01);
						   Move(0.11, 0, 8, shup3_ch2_3);
						   Rot(-0.0115, 8, shup3_ch3_3, Rl0);
						   Rot(0.03, 8, shup3_ch3_3, Rl02);
					   }
					   {
						   Rot(0.017, 8, shup4_ch1_3, rl0);
						   Rot(0.017, 8, shup4_ch2_3, rl0);
						   Rot(-0.017, 8, shup4_ch2_3, rl01);
						   Move(-0.11, 0, 8, shup4_ch2_3);
						   Rot(0.0115, 8, shup4_ch3_3, rl0);
						   Rot(-0.03, 8, shup4_ch3_3, rl02);
					   }
					   {
						   Rot(0.00425, 5, shup5_ch1_2, RL);
						   Rot(0.00425, 6, shup5_ch2_2, RL);
					   }
					   {
						   Rot(-0.00425, 5, shup6_ch1_2, RL);
						   Rot(-0.00425, 6, shup6_ch2_2, RL);
					   }
				   }
				   if (tick > 105 && tick < 120) {
					   {
						   Rot(0.017, 8, shup1_ch1_3, rl);
						   Rot(0.017, 8, shup1_ch2_3, rl);
						   Rot(-0.017, 8, shup1_ch2_3, rl1);
						   Move(-0.11, 0, 8, shup1_ch2_3);
						   Rot(0.0115, 8, shup1_ch3_3, rl);
						   Rot(-0.025, 8, shup1_ch3_3, rl2);
					   }
					   {
						   Rot(-0.017, 8, shup2_ch1_3, Rl);
						   Rot(-0.017, 8, shup2_ch2_3, Rl);
						   Rot(0.017, 8, shup2_ch2_3, Rl1);
						   Move(0.11, 0, 8, shup2_ch2_3);
						   Rot(-0.0115, 8, shup2_ch3_3, Rl);
						   Rot(0.025, 8, shup2_ch3_3, Rl2);
					   }
					   {
						   Rot(-0.017, 8, shup3_ch1_3, Rl0);
						   Rot(-0.017, 8, shup3_ch2_3, Rl0);
						   Rot(0.017, 8, shup3_ch2_3, Rl01);
						   Move(0.11, 0, 8, shup3_ch2_3);
						   Rot(-0.0115, 8, shup3_ch3_3, Rl0);
						   Rot(0.025, 8, shup3_ch3_3, Rl02);
					   }
					   {
						   Rot(0.017, 8, shup4_ch1_3, rl0);
						   Rot(0.017, 8, shup4_ch2_3, rl0);
						   Rot(-0.017, 8, shup4_ch2_3, rl01);
						   Move(-0.11, 0, 8, shup4_ch2_3);
						   Rot(0.0115, 8, shup4_ch3_3, rl0);
						   Rot(-0.025, 8, shup4_ch3_3, rl02);
					   }
					   {
						   Rot(0.00425, 5, shup5_ch1_2, RL);
						   Rot(0.00425, 6, shup5_ch2_2, RL);
					   }
					   {
						   Rot(-0.00425, 5, shup6_ch1_2, RL);
						   Rot(-0.00425, 6, shup6_ch2_2, RL);
					   }
				   }
				   tick++;
			   }
			   else {
				   tick = 0;
				   cadr = true;
			   }
		   }
	   }
	   Void Body() {
		   PointF rl02 = PointF(pbAnima->Width / 2, pbAnima->Height / 2);
		   if (tick < 60) {
			   Scale(1.005, 1.001, 9, body, rl02);
		   }
		   else {
			   Scale(0.995 , 0.999, 9, body, rl02);
		   }
		   if (skip) {
			   if (tick < 50) {
				   Rot(0.005, 9, body, rl02);
			   }
			   else {
				   if (tick < 100)
					   Rot(-0.005, 9, body, rl02);
			   }
			   if (tick == 120) skip = false;
		   }
		   else {
			   if (tick < 50) {
				   Rot(-0.005, 9, body, rl02);
			   }
			   else {
				   if(tick < 100)
				      Rot(0.005, 9, body, rl02);
			   }
			   if (tick == 120) skip = true;
		   }
	   }
	   Void ea() {
		   PointF rt = PointF(pbAnima->Width / 2 + 10, pbAnima->Height / 2 - 10);
		   PointF rt1 = PointF(pbAnima->Width / 2, pbAnima->Height / 2);
		   if (tick < 60) {
			   Move(0, -0.05, 4, eas);
		   }
		   else {
			   Move(0, 0.05, 4, eas);
		   }
		   if (tick < 60) {
			   Scale(1.005, 1.005, 4, eas, rt);
		   }
		   else{
			   Scale(0.995, 0.995, 4, eas, rt);
		   }
		   if (tick < 60) {
			   Rot(-0.005, 4, eas, rt1);
		   }
		   else {
			   Rot(0.005, 4, eas, rt1);
		   }
	   }
	   Void pyz() {
		   PointF p1 = PointF((pyz1[1].X + pyz1[6].X) / 2, (pyz1[0].Y + pyz1[3].Y) / 2);
		   PointF p2 = PointF((pyz2[1].X + pyz2[6].X) / 2, (pyz2[0].Y + pyz2[3].Y) / 2);
		   PointF p3 = PointF((pyz3[1].X + pyz3[6].X) / 2, (pyz3[0].Y + pyz3[3].Y) / 2);
		   
		   if (tick < 120) {
               if(tick == 1){ Move(12, 50, 8, pyz1); }
			   if (tick % 2 == 1) {
				   Move(-0.5, -4.5, 8, pyz1);
				   Scale(1.005, 1.005, 8, pyz1, p1);
			   }  
			   Rot(-0.05, 8, pyz1, p1 );
		   }
		   if (tick < 120) {
			   if (tick == 1) { Move(12, 50, 8, pyz3); }
			   if (tick % 2 == 1) {
				   Move(-0.5, -4.8, 8, pyz3);
				   Scale(1.009, 1.009, 8, pyz3, p3);
			   }
			   Rot(-0.05, 8, pyz3, p3);
		   }
		   if (tick < 120) {
			   if (tick == 1) { Move(-14, 50, 8, pyz2); }
			   if (tick % 2 == 1) {
				   Move(0.5, -5, 8, pyz2);
				   Scale(1.001, 1.001, 8, pyz2, p2);
			   }
			   Rot(-0.05, 8, pyz2, p2);
		   }
		   if (tick % 2 == 1) {
			   Move(300, 0, 4, t1);
			   Move(300, 0, 4, t2);
			   Move(300, 0, 4, t3);
			   Move(300, 0, 4, t4);
			   Move(300, 0, 4, t5);
		   }
		   else {
			   Move(-300, 0, 4, t1);
			   Move(-300, 0, 4, t2);
			   Move(-300, 0, 4, t3);
			   Move(-300, 0, 4, t4);
			   Move(-300, 0, 4, t5);
		   }
	   }
};
}
