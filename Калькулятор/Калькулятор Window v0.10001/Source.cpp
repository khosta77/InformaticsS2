#include "MyForm.h"  // Если форму назвали MyForm, как написано выше

using namespace КалькуляторWindowv010001;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::Run(gcnew MyForm()); // Если форму назвали MyForm, как написано выше
	return 0;
}

/*
	если ввести число операци , новое действие а потом равно то a=z должно быть но куда вставить чтобы ничего не сломалось не понятно
*/
//========================================================================================================
/* ввод положительного числа
switch (c) {
				case 0:
					if (num == 0) {//проверка первого символа
						rabota_chislo(0);//вызов функции проверки введения а
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(0);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 1:
					if (num == 0) {
						rabota_chislo(1);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(1);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 2:
					if (num == 0) {
						rabota_chislo(2);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(2);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 3:
					if (num == 0) {
						rabota_chislo(3);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(3);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 4:
					if (num == 0) {
						rabota_chislo(4);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(4);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 5:
					if (num == 0) {
						rabota_chislo(5);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(5);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 6:
					if (num == 0) {
						rabota_chislo(6);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(6);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 7:
					if (num == 0) {
						rabota_chislo(7);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(7);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 8:
					if (num == 0) {
						rabota_chislo(8);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(8);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				case 9:
					if (num == 0) {
						rabota_chislo(9);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
					else {
						num_contrlNoZero();
						rabota_chislo(9);
						num++;
						textBox1->Text = System::Convert::ToString(a);
						break;
					}
				}
*/

/*
switch (c) {//  ввод отрицательного числа
				case 0:
					if (num == (-1))
						textBox1->Text = System::Convert::ToString(a + ",0");
					else
						textBox1->Text = System::Convert::ToString(a + "0");
					--num;
					break;
				case 1:
					rabota_chislo(1);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 2:
					rabota_chislo(2);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 3:
					rabota_chislo(3);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 4:
					rabota_chislo(4);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 5:
					rabota_chislo(5);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 6:
					rabota_chislo(6);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 7:
					rabota_chislo(7);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 8:
					rabota_chislo(8);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				case 9:
					rabota_chislo(9);
					--num;
					textBox1->Text = System::Convert::ToString(a);
					break;
				}
*/

/*
//switch (n)
			//{
			//case 1:
			//	textBox2->Text = System::Convert::ToString(z + " /");
			//	break;
			//case 2:
			//	textBox2->Text = System::Convert::ToString(z + " *");
			//	break;
			//case 3:
			//	textBox2->Text = System::Convert::ToString(z + " +");
			//	break;
			//case 4:
			//	textBox2->Text = System::Convert::ToString(z + " -");
			//	/*
			//	if (z == 0) // если мы(кто мы то ?) нажимаем равно то зтс с большой вероятностью не равен ноль
			//		z = a;
			//	//easySbros();
			//	AntiChislo = true;
			//	textBox1->Text = System::Convert::ToString(a);
			//	textBox2->Text = System::Convert::ToString(z + " -");
			//	Equally = false;
			//	AntiError++;
			//	AntiEqually = 1;
			//	*/
			
