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
	private: System::Windows::Forms::ListBox^ Students;
	protected:
	private: System::Windows::Forms::ListBox^ Grades;
	private: System::Windows::Forms::TextBox^ InputFIO;
	private: System::Windows::Forms::TextBox^ InputGrade2;
	private: System::Windows::Forms::TextBox^ InputGrade1;
	private: System::Windows::Forms::TextBox^ InputGrade3;
	private: System::Windows::Forms::Button^ ChangeGrade;




	private: System::Windows::Forms::Button^ Accept;
	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::Button^ DeleteByName;
	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ open;
	private: System::Windows::Forms::SaveFileDialog^ save;



	protected:
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
			this->Students = (gcnew System::Windows::Forms::ListBox());
			this->Grades = (gcnew System::Windows::Forms::ListBox());
			this->InputFIO = (gcnew System::Windows::Forms::TextBox());
			this->InputGrade2 = (gcnew System::Windows::Forms::TextBox());
			this->InputGrade1 = (gcnew System::Windows::Forms::TextBox());
			this->InputGrade3 = (gcnew System::Windows::Forms::TextBox());
			this->ChangeGrade = (gcnew System::Windows::Forms::Button());
			this->Accept = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->DeleteByName = (gcnew System::Windows::Forms::Button());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->open = (gcnew System::Windows::Forms::OpenFileDialog());
			this->save = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Students
			// 
			this->Students->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Students->FormattingEnabled = true;
			this->Students->ItemHeight = 25;
			this->Students->Location = System::Drawing::Point(11, 42);
			this->Students->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Students->MultiColumn = true;
			this->Students->Name = L"Students";
			this->Students->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->Students->Size = System::Drawing::Size(391, 279);
			this->Students->TabIndex = 0;
			this->Students->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Students_SelectedIndexChanged);
			// 
			// Grades
			// 
			this->Grades->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Grades->FormattingEnabled = true;
			this->Grades->ItemHeight = 25;
			this->Grades->Location = System::Drawing::Point(406, 42);
			this->Grades->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Grades->Name = L"Grades";
			this->Grades->Size = System::Drawing::Size(234, 279);
			this->Grades->TabIndex = 1;
			// 
			// InputFIO
			// 
			this->InputFIO->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputFIO->Location = System::Drawing::Point(645, 79);
			this->InputFIO->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InputFIO->Multiline = true;
			this->InputFIO->Name = L"InputFIO";
			this->InputFIO->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->InputFIO->Size = System::Drawing::Size(382, 90);
			this->InputFIO->TabIndex = 2;
			// 
			// InputGrade2
			// 
			this->InputGrade2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputGrade2->Location = System::Drawing::Point(645, 301);
			this->InputGrade2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InputGrade2->Multiline = true;
			this->InputGrade2->Name = L"InputGrade2";
			this->InputGrade2->Size = System::Drawing::Size(382, 34);
			this->InputGrade2->TabIndex = 3;
			// 
			// InputGrade1
			// 
			this->InputGrade1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputGrade1->Location = System::Drawing::Point(645, 219);
			this->InputGrade1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InputGrade1->Multiline = true;
			this->InputGrade1->Name = L"InputGrade1";
			this->InputGrade1->Size = System::Drawing::Size(382, 34);
			this->InputGrade1->TabIndex = 4;
			// 
			// InputGrade3
			// 
			this->InputGrade3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputGrade3->Location = System::Drawing::Point(645, 394);
			this->InputGrade3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->InputGrade3->Multiline = true;
			this->InputGrade3->Name = L"InputGrade3";
			this->InputGrade3->Size = System::Drawing::Size(382, 32);
			this->InputGrade3->TabIndex = 5;
			// 
			// ChangeGrade
			// 
			this->ChangeGrade->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ChangeGrade->Location = System::Drawing::Point(11, 332);
			this->ChangeGrade->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ChangeGrade->Name = L"ChangeGrade";
			this->ChangeGrade->Size = System::Drawing::Size(271, 93);
			this->ChangeGrade->TabIndex = 6;
			this->ChangeGrade->Text = L"Изменить оценки";
			this->ChangeGrade->UseVisualStyleBackColor = true;
			this->ChangeGrade->Click += gcnew System::EventHandler(this, &MyForm::ChangeGrade_Click);
			// 
			// Accept
			// 
			this->Accept->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Accept->Location = System::Drawing::Point(645, 439);
			this->Accept->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Accept->Name = L"Accept";
			this->Accept->Size = System::Drawing::Size(381, 99);
			this->Accept->TabIndex = 15;
			this->Accept->Text = L"Добавить Студента";
			this->Accept->UseVisualStyleBackColor = true;
			this->Accept->Click += gcnew System::EventHandler(this, &MyForm::Accept_Click);
			// 
			// Sort
			// 
			this->Sort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort->Location = System::Drawing::Point(287, 332);
			this->Sort->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(353, 93);
			this->Sort->TabIndex = 16;
			this->Sort->Text = L"Отсортировать список";
			this->Sort->UseVisualStyleBackColor = true;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::Sort_Click);
			// 
			// DeleteByName
			// 
			this->DeleteByName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeleteByName->Location = System::Drawing::Point(287, 430);
			this->DeleteByName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DeleteByName->Name = L"DeleteByName";
			this->DeleteByName->Size = System::Drawing::Size(353, 109);
			this->DeleteByName->TabIndex = 17;
			this->DeleteByName->Text = L"Удалить студентов по имени";
			this->DeleteByName->UseVisualStyleBackColor = true;
			this->DeleteByName->Click += gcnew System::EventHandler(this, &MyForm::DeleteByName_Click);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->Location = System::Drawing::Point(11, 430);
			this->Clear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(271, 109);
			this->Clear->TabIndex = 18;
			this->Clear->Text = L"Очистить список";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(645, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 28);
			this->label1->TabIndex = 19;
			this->label1->Text = L"ФИО : ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(645, 178);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(239, 28);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Оценка по Физике : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(645, 262);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 28);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Оценка по Русскому :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(645, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(207, 28);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Оценка по ИЗО : ";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->файлToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1035, 28);
			this->menuStrip1->TabIndex = 23;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->открытьToolStripMenuItem,
					this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->открытьToolStripMenuItem->Text = L"Открыть";
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::открытьToolStripMenuItem_Click);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			this->сохранитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// open
			// 
			this->open->DefaultExt = L"txt";
			// 
			// save
			// 
			this->save->DefaultExt = L"txt";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 545);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->DeleteByName);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Accept);
			this->Controls->Add(this->ChangeGrade);
			this->Controls->Add(this->InputGrade3);
			this->Controls->Add(this->InputGrade1);
			this->Controls->Add(this->InputGrade2);
			this->Controls->Add(this->InputFIO);
			this->Controls->Add(this->Grades);
			this->Controls->Add(this->Students);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MyList* lst;
		State t;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		lst = new MyList;
		t = INPUT_STUDENT;
	}
private: System::Void Accept_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t == INPUT_STUDENT)
	{
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
			&& !InputGrade3->Text->IsNullOrEmpty(InputGrade3->Text))
		{
			int* arr = new int[3];

			arr[0] = Convert::ToInt32(InputGrade1->Text);
			arr[1] = Convert::ToInt32(InputGrade2->Text);
			arr[2] = Convert::ToInt32(InputGrade3->Text);

			for (int i = 0; i < 3; i++)
				lst->find(Students->SelectedIndex)->arr[i] = arr[i];

			Grades->Items->Clear();

			array<String^>^ local = gcnew array<String^>(3);
			local[0] = "Физика : ";
			local[1] = "Русский : ";
			local[2] = "Изо : ";

			for (int i = 0; i < 3; i++)
				Grades->Items->Add(local[i] + Convert::ToString(arr[i]));

			delete[] arr;

			Accept->Text = "Добавить Студента";
			t = INPUT_STUDENT;

			InputFIO->Text = "";
			InputGrade1->Text = "";
			InputGrade2->Text = "";
			InputGrade3->Text = "";
		}
	}
}
private: System::Void ChangeGrade_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Students->Items->Count > 0)
	{
		if (Students->SelectedItems->Count > 0)
		{
			t = CHANGE_GRADE;
			Accept->Text = "Изменить оценки";

			InputFIO->Text = "";
			InputGrade1->Text = "";
			InputGrade2->Text = "";
			InputGrade3->Text = "";
		}
	}
}
private: System::Void DeleteByName_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (t != CHANGE_GRADE)
	//{
		if (Students->Items->Count > 0)
		{
			if (Students->SelectedItems->Count > 0)
			{
				char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(Students->Items[Students->SelectedIndex]->ToString());

				char copy_data[200];
				std::strcpy(copy_data, temp);
				char* token_one = strtok(copy_data, " ");
				token_one = strtok(NULL, " ");

				int n = lst->Get_size();
				for (int i = 0; i < n; i++)
				{
					char copy_data2[200];
					std::strcpy(copy_data2, lst->find(i)->data);
					char* token_two = strtok(copy_data2, " ");
					token_two = strtok(NULL, " ");

					if (strcmp(token_one, token_two) == 0)
					{
						lst->erase(i);
						i--;
						n = lst->Get_size();
					}
				}

				Students->Items->Clear();
				Grades->Items->Clear();
				int k = lst->Get_size();
				for (int i = 0; i < k; i++)
				{
					String^ s = Marshal::PtrToStringAnsi((IntPtr)lst->find(i)->data);
					Students->Items->Add(s);
				}
			}
		}
	//}
}
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t != CHANGE_GRADE)
	{
		if (Students->Items->Count > 0)
		{
			Students->Items->Clear();
			lst->clear();
			Grades->Items->Clear();
		}
	}
}
private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (t != CHANGE_GRADE)
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
		}
	}
}
private: System::Void Students_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (t != CHANGE_GRADE)
	{
		array<String^>^ local = gcnew array<String^>(3);
		local[0] = "Физика : ";
		local[1] = "Русский : ";
		local[2] = "Изо : ";

		Grades->Items->Clear();
		for (int i = 0; i < 3; i++)
			Grades->Items->Add(local[i] + Convert::ToString(lst->find(Students->SelectedIndex)->arr[i]));
	}
}
bool new_save = true;
String^ f_name;
private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (open->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		f_name = open->FileName;
		if (new_save)
			new_save = false;
		
		Students->Items->Clear();
		lst->clear();
		Grades->Items->Clear();
		InputFIO->Text = "";
		InputGrade1->Text = "";
		InputGrade2->Text = "";
		InputGrade3->Text = "";

		char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(f_name);

		lst->load(temp);

		Marshal::FreeHGlobal((IntPtr)temp);

		int n = lst->Get_size();
		for (int i = 0; i < n; i++)
		{
			String^ s = Marshal::PtrToStringAnsi((IntPtr)lst->find(i)->data);
			Students->Items->Add(s);
		}
	}
}
private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (new_save)
		сохранитьКакToolStripMenuItem_Click(sender, e);
	else
	{
		char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(f_name);
		lst->save(temp);
		Marshal::FreeHGlobal((IntPtr)temp);
	}
}
private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (save->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		f_name = save->FileName;
		char* temp = (char*)(void*)Marshal::StringToHGlobalAnsi(f_name);
		lst->save(temp);
		Marshal::FreeHGlobal((IntPtr)temp);

		new_save = false;
	}
}
};
}
