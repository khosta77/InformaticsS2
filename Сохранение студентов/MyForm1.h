#pragma once
#include "MyList.h"
#include "Enum.h"
#include <iostream>

namespace Лаба3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::ExceptionServices;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::Button^ ChangeGrade;
	private: System::Windows::Forms::TextBox^ InputGrade3;
	private: System::Windows::Forms::TextBox^ InputGrade1;
	private: System::Windows::Forms::TextBox^ InputGrade2;
	private: System::Windows::Forms::TextBox^ InputFIO;
	private: System::Windows::Forms::ListBox^ Grades;
	private: System::Windows::Forms::ListBox^ Students;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ DeleteByName;
	private: System::Windows::Forms::Button^ Accept;
	private: System::Windows::Forms::Label^ Info;

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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->ChangeGrade = (gcnew System::Windows::Forms::Button());
			this->InputGrade3 = (gcnew System::Windows::Forms::TextBox());
			this->InputGrade1 = (gcnew System::Windows::Forms::TextBox());
			this->InputGrade2 = (gcnew System::Windows::Forms::TextBox());
			this->InputFIO = (gcnew System::Windows::Forms::TextBox());
			this->Grades = (gcnew System::Windows::Forms::ListBox());
			this->Students = (gcnew System::Windows::Forms::ListBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->DeleteByName = (gcnew System::Windows::Forms::Button());
			this->Accept = (gcnew System::Windows::Forms::Button());
			this->Info = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(726, 397);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(239, 34);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Оценка по ИЗО : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(726, 287);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(290, 34);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Оценка по Русскому :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(726, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(274, 34);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Оценка по Физике : ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(726, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 34);
			this->label1->TabIndex = 31;
			this->label1->Text = L"ФИО : ";
			// 
			// Sort
			// 
			this->Sort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort->Location = System::Drawing::Point(323, 374);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(397, 116);
			this->Sort->TabIndex = 30;
			this->Sort->Text = L"Отсортировать список";
			this->Sort->UseVisualStyleBackColor = true;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm1::Sort_Click);
			// 
			// ChangeGrade
			// 
			this->ChangeGrade->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeGrade->Location = System::Drawing::Point(12, 374);
			this->ChangeGrade->Name = L"ChangeGrade";
			this->ChangeGrade->Size = System::Drawing::Size(305, 116);
			this->ChangeGrade->TabIndex = 29;
			this->ChangeGrade->Text = L"Изменить оценки по имени";
			this->ChangeGrade->UseVisualStyleBackColor = true;
			this->ChangeGrade->Click += gcnew System::EventHandler(this, &MyForm1::ChangeGrade_Click);
			// 
			// InputGrade3
			// 
			this->InputGrade3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputGrade3->Location = System::Drawing::Point(726, 451);
			this->InputGrade3->Multiline = true;
			this->InputGrade3->Name = L"InputGrade3";
			this->InputGrade3->Size = System::Drawing::Size(429, 39);
			this->InputGrade3->TabIndex = 28;
			// 
			// InputGrade1
			// 
			this->InputGrade1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputGrade1->Location = System::Drawing::Point(726, 233);
			this->InputGrade1->Multiline = true;
			this->InputGrade1->Name = L"InputGrade1";
			this->InputGrade1->Size = System::Drawing::Size(429, 42);
			this->InputGrade1->TabIndex = 27;
			// 
			// InputGrade2
			// 
			this->InputGrade2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputGrade2->Location = System::Drawing::Point(726, 335);
			this->InputGrade2->Multiline = true;
			this->InputGrade2->Name = L"InputGrade2";
			this->InputGrade2->Size = System::Drawing::Size(429, 42);
			this->InputGrade2->TabIndex = 26;
			// 
			// InputFIO
			// 
			this->InputFIO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputFIO->Location = System::Drawing::Point(726, 58);
			this->InputFIO->Multiline = true;
			this->InputFIO->Name = L"InputFIO";
			this->InputFIO->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->InputFIO->Size = System::Drawing::Size(429, 111);
			this->InputFIO->TabIndex = 25;
			// 
			// Grades
			// 
			this->Grades->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Grades->FormattingEnabled = true;
			this->Grades->ItemHeight = 32;
			this->Grades->Location = System::Drawing::Point(457, 12);
			this->Grades->Name = L"Grades";
			this->Grades->Size = System::Drawing::Size(263, 356);
			this->Grades->TabIndex = 24;
			// 
			// Students
			// 
			this->Students->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Students->FormattingEnabled = true;
			this->Students->ItemHeight = 32;
			this->Students->Location = System::Drawing::Point(12, 12);
			this->Students->MultiColumn = true;
			this->Students->Name = L"Students";
			this->Students->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->Students->Size = System::Drawing::Size(439, 356);
			this->Students->TabIndex = 23;
			this->Students->Click += gcnew System::EventHandler(this, &MyForm1::Students_SelectedIndexChanged);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->Location = System::Drawing::Point(12, 496);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(305, 136);
			this->Clear->TabIndex = 40;
			this->Clear->Text = L"Очистить список";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm1::Clear_Click);
			// 
			// DeleteByName
			// 
			this->DeleteByName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteByName->Location = System::Drawing::Point(323, 496);
			this->DeleteByName->Name = L"DeleteByName";
			this->DeleteByName->Size = System::Drawing::Size(397, 136);
			this->DeleteByName->TabIndex = 39;
			this->DeleteByName->Text = L"Удалить студентов по имени";
			this->DeleteByName->UseVisualStyleBackColor = true;
			this->DeleteByName->Click += gcnew System::EventHandler(this, &MyForm1::DeleteByName_Click);
			// 
			// Accept
			// 
			this->Accept->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Accept->Location = System::Drawing::Point(726, 508);
			this->Accept->Name = L"Accept";
			this->Accept->Size = System::Drawing::Size(429, 124);
			this->Accept->TabIndex = 37;
			this->Accept->Text = L"Добавить Студента";
			this->Accept->UseVisualStyleBackColor = true;
			this->Accept->Click += gcnew System::EventHandler(this, &MyForm1::Accept_Click);
			// 
			// Info
			// 
			this->Info->AutoSize = true;
			this->Info->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Info->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Info->Location = System::Drawing::Point(840, 12);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(2, 34);
			this->Info->TabIndex = 41;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1163, 638);
			this->Controls->Add(this->Info);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->DeleteByName);
			this->Controls->Add(this->Accept);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->ChangeGrade);
			this->Controls->Add(this->InputGrade3);
			this->Controls->Add(this->InputGrade1);
			this->Controls->Add(this->InputGrade2);
			this->Controls->Add(this->InputFIO);
			this->Controls->Add(this->Grades);
			this->Controls->Add(this->Students);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load_1);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MyList* lst;
		State t;
		int n;
private: System::Void Accept_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t == INPUT_STUDENT)
	{
		Info->Text = "Добавьте студента";

		if (!InputGrade1->Text->IsNullOrEmpty(InputGrade1->Text) && !InputGrade2->Text->IsNullOrEmpty(InputGrade2->Text)
			&& !InputGrade3->Text->IsNullOrEmpty(InputGrade3->Text) && !InputFIO->Text->IsNullOrEmpty(InputFIO->Text))
		{
			char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(InputFIO->Text);
			int* arr = new int[3];

			arr[0] = Convert::ToInt32(InputGrade1->Text);
			arr[1] = Convert::ToInt32(InputGrade2->Text);
			arr[2] = Convert::ToInt32(InputGrade3->Text);
			int size = strlen(temp);
			lst->push_back(temp, size + 1, arr);

			delete[] arr;

			size = lst->Get_size();

			String^ str = Marshal::PtrToStringAnsi((IntPtr)temp);
			Students->Items->Add(str);

			Marshal::FreeHGlobal((IntPtr)temp);

			InputFIO->Text = "";
			InputGrade1->Text = "";
			InputGrade2->Text = "";
			InputGrade3->Text = "";
		}
	}
	if (t == CHANGE_GRADE)
	{
		if (!InputGrade1->Text->IsNullOrEmpty(InputGrade1->Text) && !InputGrade2->Text->IsNullOrEmpty(InputGrade2->Text)
			&& !InputGrade3->Text->IsNullOrEmpty(InputGrade3->Text) && !InputFIO->Text->IsNullOrEmpty(InputFIO->Text))
		{
			Students->Items->Clear();

			char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(InputFIO->Text);

			int k = lst->Get_size();
			for (int i = 0; i < k; i++)
			{
				String^ s = Marshal::PtrToStringAnsi((IntPtr)lst->find(i)->data);
				char* t = (char*)(void*)Marshal::StringToHGlobalAnsi(s);

				char copy_data2[200];
				std::strcpy(copy_data2, t);
				char* token_2 = strtok(copy_data2, " ");
				token_2 = strtok(NULL, " ");

				if (strcmp(temp, token_2) == 0)
					Students->Items->Add(s);

				Marshal::FreeHGlobal((IntPtr)t);
			}

			Marshal::FreeHGlobal((IntPtr)temp);

			Info->Text = "Выберите студента";
			t = CHANGE_GRADE_2;
		}
	}
	if (t == CHANGE_GRADE_2)
	{
		if (Students->SelectedItems->Count > 0)
		{
			char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(Students->Items[Students->SelectedIndex]->ToString());

			int counter = Students->SelectedIndex;

			char copy_data[200];
			std::strcpy(copy_data, temp);
			char* token_one = strtok(copy_data, " ");
			token_one = strtok(NULL, " ");

			int k = lst->Get_size();
			int j;
			for (int i = 0; i < k && counter >= 0; i++)
			{
				String^ s = Marshal::PtrToStringAnsi((IntPtr)lst->find(i)->data);
				char* t = (char*)(void*)Marshal::StringToHGlobalAnsi(s);

				char copy_data2[200];
				std::strcpy(copy_data2, t);
				char* token_2 = strtok(copy_data2, " ");
				token_2 = strtok(NULL, " ");

				if (strcmp(token_one, token_2) == 0)
					counter--;

				Marshal::FreeHGlobal((IntPtr)t);
				j = i;
			}

			int* arr = new int[3];

			arr[0] = Convert::ToInt32(InputGrade1->Text);
			arr[1] = Convert::ToInt32(InputGrade2->Text);
			arr[2] = Convert::ToInt32(InputGrade3->Text);

			for (int i = 0; i < 3; i++)
				lst->find(j)->arr[i] = arr[i];

			Info->Text = "Оценки изменены";

			Marshal::FreeHGlobal((IntPtr)temp);

			Students->Items->Clear();
			Grades->Items->Clear();
			k = lst->Get_size();
			for (int i = 0; i < k; i++)
			{
				String^ s = Marshal::PtrToStringAnsi((IntPtr)lst->find(i)->data);
				Students->Items->Add(s);
			}

			InputFIO->Text = "";
			InputGrade1->Text = "";
			InputGrade2->Text = "";
			InputGrade3->Text = "";

			t = INPUT_STUDENT;
		}
	}
	if (t == DELETE_BY_NAME)
	{
		if (!InputFIO->Text->IsNullOrEmpty(InputFIO->Text))
		{
			char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(InputFIO->Text);

			int n = lst->Get_size();
			for (int i = 0; i < n; i++)
			{
				char copy_data2[200];
				std::strcpy(copy_data2, lst->find(i)->data);
				char* token_two = strtok(copy_data2, " ");
				token_two = strtok(NULL, " ");

				if (strcmp(temp, token_two) == 0)
				{
					lst->erase(i);
					i--;
					n = lst->Get_size();
				}
			}

			Info->Text = "Студенты удалены";
			Accept->Text = "Добавить студента";

			InputFIO->Text = "";
			InputGrade1->Text = "";
			InputGrade2->Text = "";
			InputGrade3->Text = "";

			Students->Items->Clear();
			Grades->Items->Clear();
			int k = lst->Get_size();
			for (int i = 0; i < k; i++)
			{
				String^ s = Marshal::PtrToStringAnsi((IntPtr)lst->find(i)->data);
				Students->Items->Add(s);
			}

			Marshal::FreeHGlobal((IntPtr)temp);
			t = INPUT_STUDENT;
		}
	}
}
private: System::Void ChangeGrade_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t == INPUT_STUDENT)
	{
		if (Students->Items->Count > 0)
		{
			t = CHANGE_GRADE;
			Info->Text = "Введите имя и оценки";
			Accept->Text = "Подтвердить";

			InputFIO->Text = "";
			InputGrade1->Text = "";
			InputGrade2->Text = "";
			InputGrade3->Text = "";
		}
	}
}
private: System::Void DeleteByName_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t == INPUT_STUDENT)
	{
		if (Students->Items->Count > 0)
		{
			//InputFIO->Text = "";
			//InputGrade1->Text = "";
			//InputGrade2->Text = "";
			//InputGrade3->Text = "";

			Info->Text = "Введите имя";
			Accept->Text = "Подтвердить";
			t = DELETE_BY_NAME;
		}
	}
}
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t == INPUT_STUDENT)
	{
		if (Students->Items->Count > 0)
		{
			Info->Text = "Список пуст";
			Students->Items->Clear();
			lst->clear();
			Grades->Items->Clear();
		}
	}
}
private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t == INPUT_STUDENT)
	{
		if (Students->Items->Count > 1)
		{
			Students->Items->Clear();
			lst->sort();
			int n = lst->Get_size();
			for (int i = 0; i < n; i++)
			{
				String^ s = Marshal::PtrToStringAnsi((IntPtr)lst->find(i)->data);
				Students->Items->Add(s);
			}
			Info->Text = "Список отсортирован";
		}
	}
}
private: System::Void Students_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (t == INPUT_STUDENT || t == CHANGE_GRADE)
	{
		array<String^>^ local = gcnew array<String^>(3);
		local[0] = "Физика : ";
		local[1] = "Русский : ";
		local[2] = "Изо : ";

		Grades->Items->Clear();
		for (int i = 0; i < 3; i++)
			Grades->Items->Add(local[i] + Convert::ToString(lst->find(Students->SelectedIndex)->arr[i]));
	}
	if (t == CHANGE_GRADE_2)
	{
		Grades->Items->Clear();
		Info->Text = "Подтвердите выбор";
	}
}
	private: System::Void MyForm1_Load_1(System::Object^ sender, System::EventArgs^ e) {
		lst = new MyList;
		t = INPUT_STUDENT;
		Info->Text = "Добавьте студента";
	}
};
}
