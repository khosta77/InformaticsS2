#pragma once

#include "MyForm1.h"

namespace Лаба5 {

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
			dlg1 = gcnew MyForm1();
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
	private: System::Windows::Forms::DataGridView^ DGW_Table;
	protected:

	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::Button^ Del;



	private: System::Windows::Forms::Button^ Ins;
	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::Button^ Out;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Music;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Singer;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Length;
	private: System::Windows::Forms::ListBox^ List;
	private: System::Windows::Forms::Label^ lbl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Sort_L;
	private: System::Windows::Forms::Button^ CLearList;
	private: System::Windows::Forms::Button^ btnRedact;






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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->DGW_Table = (gcnew System::Windows::Forms::DataGridView());
			this->Music = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Singer = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Length = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->Ins = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->Out = (gcnew System::Windows::Forms::Button());
			this->List = (gcnew System::Windows::Forms::ListBox());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Sort_L = (gcnew System::Windows::Forms::Button());
			this->CLearList = (gcnew System::Windows::Forms::Button());
			this->btnRedact = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGW_Table))->BeginInit();
			this->SuspendLayout();
			// 
			// DGW_Table
			// 
			this->DGW_Table->AllowUserToAddRows = false;
			this->DGW_Table->AllowUserToDeleteRows = false;
			this->DGW_Table->AllowUserToResizeColumns = false;
			this->DGW_Table->AllowUserToResizeRows = false;
			this->DGW_Table->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->DGW_Table->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->NullValue = L"0";
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->DGW_Table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->DGW_Table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DGW_Table->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Music, this->Singer,
					this->Length
			});
			this->DGW_Table->Location = System::Drawing::Point(11, 10);
			this->DGW_Table->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DGW_Table->Name = L"DGW_Table";
			this->DGW_Table->ReadOnly = true;
			this->DGW_Table->RowHeadersWidth = 62;
			this->DGW_Table->RowTemplate->Height = 28;
			this->DGW_Table->Size = System::Drawing::Size(604, 410);
			this->DGW_Table->TabIndex = 0;
			// 
			// Music
			// 
			this->Music->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Music->HeaderText = L"Музыкальная композиция";
			this->Music->MinimumWidth = 8;
			this->Music->Name = L"Music";
			this->Music->ReadOnly = true;
			this->Music->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Music->Width = 190;
			// 
			// Singer
			// 
			this->Singer->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			this->Singer->HeaderText = L"Исполнитель";
			this->Singer->MinimumWidth = 8;
			this->Singer->Name = L"Singer";
			this->Singer->ReadOnly = true;
			this->Singer->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Singer->Width = 124;
			// 
			// Length
			// 
			this->Length->HeaderText = L"Продолжительность";
			this->Length->MinimumWidth = 8;
			this->Length->Name = L"Length";
			this->Length->ReadOnly = true;
			this->Length->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Length->Width = 171;
			// 
			// Add
			// 
			this->Add->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Add->Location = System::Drawing::Point(620, 10);
			this->Add->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(195, 39);
			this->Add->TabIndex = 1;
			this->Add->Text = L"Добавить";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// Del
			// 
			this->Del->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Del->Location = System::Drawing::Point(620, 54);
			this->Del->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(195, 39);
			this->Del->TabIndex = 2;
			this->Del->Text = L"Удалить";
			this->Del->UseVisualStyleBackColor = true;
			this->Del->Click += gcnew System::EventHandler(this, &MyForm::Del_Click);
			// 
			// Ins
			// 
			this->Ins->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ins->Location = System::Drawing::Point(620, 98);
			this->Ins->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Ins->Name = L"Ins";
			this->Ins->Size = System::Drawing::Size(195, 39);
			this->Ins->TabIndex = 3;
			this->Ins->Text = L"Вставить";
			this->Ins->UseVisualStyleBackColor = true;
			this->Ins->Click += gcnew System::EventHandler(this, &MyForm::Ins_Click);
			// 
			// Sort
			// 
			this->Sort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort->Location = System::Drawing::Point(620, 142);
			this->Sort->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(195, 58);
			this->Sort->TabIndex = 4;
			this->Sort->Text = L"Отсортировать по названию";
			this->Sort->UseVisualStyleBackColor = true;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::Sort_Click);
			// 
			// Out
			// 
			this->Out->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Out->Location = System::Drawing::Point(620, 266);
			this->Out->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Out->Name = L"Out";
			this->Out->Size = System::Drawing::Size(195, 54);
			this->Out->TabIndex = 5;
			this->Out->Text = L"Вывести самые длинные песни";
			this->Out->UseVisualStyleBackColor = true;
			this->Out->Click += gcnew System::EventHandler(this, &MyForm::Out_Click);
			// 
			// List
			// 
			this->List->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->List->FormattingEnabled = true;
			this->List->ItemHeight = 23;
			this->List->Location = System::Drawing::Point(11, 453);
			this->List->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->List->Name = L"List";
			this->List->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->List->Size = System::Drawing::Size(604, 96);
			this->List->TabIndex = 6;
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbl->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbl->Location = System::Drawing::Point(11, 422);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(241, 25);
			this->lbl->TabIndex = 7;
			this->lbl->Text = L"Самые длинные песни : ";
			// 
			// label1
			// 
			this->label1->AutoEllipsis = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(621, 376);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 141);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Для удаления/вставки элементов выберите данную строку. Время в секундах\r\n";
			// 
			// Sort_L
			// 
			this->Sort_L->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sort_L->Location = System::Drawing::Point(620, 204);
			this->Sort_L->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Sort_L->Name = L"Sort_L";
			this->Sort_L->Size = System::Drawing::Size(195, 58);
			this->Sort_L->TabIndex = 9;
			this->Sort_L->Text = L"Отсортировать по длительности";
			this->Sort_L->UseVisualStyleBackColor = true;
			this->Sort_L->Click += gcnew System::EventHandler(this, &MyForm::Sort_L_Click);
			// 
			// CLearList
			// 
			this->CLearList->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CLearList->Location = System::Drawing::Point(620, 519);
			this->CLearList->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CLearList->Name = L"CLearList";
			this->CLearList->Size = System::Drawing::Size(195, 47);
			this->CLearList->TabIndex = 10;
			this->CLearList->Text = L"Очистить список";
			this->CLearList->UseVisualStyleBackColor = true;
			this->CLearList->Click += gcnew System::EventHandler(this, &MyForm::CLearList_Click);
			// 
			// btnRedact
			// 
			this->btnRedact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnRedact->Location = System::Drawing::Point(620, 325);
			this->btnRedact->Name = L"btnRedact";
			this->btnRedact->Size = System::Drawing::Size(195, 48);
			this->btnRedact->TabIndex = 11;
			this->btnRedact->Text = L"Редактирование композиции";
			this->btnRedact->UseVisualStyleBackColor = true;
			this->btnRedact->Click += gcnew System::EventHandler(this, &MyForm::btnRedact_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(825, 573);
			this->Controls->Add(this->btnRedact);
			this->Controls->Add(this->CLearList);
			this->Controls->Add(this->Sort_L);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->List);
			this->Controls->Add(this->Out);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Ins);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->DGW_Table);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DGW_Table))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		MyForm1^ dlg1;


bool for_add(){ // ограничение, если добавели одну пустую сторку, то ее надо заполнить иначе добавить новую нельзя
	for (int i = 0; i < DGW_Table->RowCount; i++){
		for (int j = 0; j < DGW_Table->ColumnCount; j++){
			if (Convert::ToString(DGW_Table[j, i]->Value)->IsNullOrEmpty(Convert::ToString(DGW_Table[j, i]->Value))){
				return true;
			}
		}
	}
	return false;
}
bool is_something_null(){
	if (DGW_Table->RowCount == 0)
		return true;
	for (int i = 0; i < DGW_Table->RowCount; i++){
		for (int j = 0; j < DGW_Table->ColumnCount; j++){
			if (Convert::ToString(DGW_Table[j, i]->Value)->IsNullOrEmpty(Convert::ToString(DGW_Table[j, i]->Value))){
				return true;
			}
		}
	}
	return false;
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	DGW_Table->TopLeftHeaderCell->Value = "№";
}
private: System::Void Add_Click(System::Object^ sender, System::EventArgs^ e) {
	dlg1->Sbros();
	if (dlg1->ShowDialog() == Windows::Forms::DialogResult::OK) {
		if (!for_add()) {
			DGW_Table->RowCount++;
			DGW_Table->Rows[DGW_Table->RowCount - 1]->HeaderCell->Value = Convert::ToString(DGW_Table->RowCount);
			// вот тут вылазит окно с добовлениями 
			//dlg1->Sbros();
			//if (dlg1->ShowDialog() == Windows::Forms::DialogResult::OK) {
				DGW_Table[0, DGW_Table->RowCount - 1]->Value = Convert::ToString(dlg1->GetMessageName());
				DGW_Table[1, DGW_Table->RowCount - 1]->Value = Convert::ToString(dlg1->GetMessageAutor());
				DGW_Table[2, DGW_Table->RowCount - 1]->Value = Convert::ToString(dlg1->GetMessageTime());
			//	//MessageBox::Show("Пользователь нажал ОК");
			//}
		}
	}
}
private: System::Void Del_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DGW_Table->SelectedRows->Count > 0){
		int border = DGW_Table->SelectedRows->Count;
		for (int iter = 0; iter < border; iter++){
			for (int i = DGW_Table->SelectedRows[0]->Index; i < DGW_Table->RowCount - 1; i++){
				for (int j = 0; j < DGW_Table->ColumnCount; j++){
					DGW_Table[j, i]->Value = DGW_Table[j, i + 1]->Value;
				}
			}
			DGW_Table->RowCount--;
		}
	}
}
private: System::Void Ins_Click(System::Object^ sender, System::EventArgs^ e) {
	//dlg1->Sbros();
	if (!for_add()){
		if (DGW_Table->SelectedRows->Count > 0){
			dlg1->Sbros();
			if (dlg1->ShowDialog() == Windows::Forms::DialogResult::OK) {
				DGW_Table->RowCount++;
				for (int i = DGW_Table->RowCount - 1; i > DGW_Table->SelectedRows[0]->Index; i--) {
					for (int j = 0; j < DGW_Table->ColumnCount; j++) {
						DGW_Table[j, i]->Value = DGW_Table[j, i - 1]->Value;
					}
				}
				for (int i = 0; i < 3; i++) {
					DGW_Table[i, DGW_Table->SelectedRows[0]->Index]->Value = "";
				}
				DGW_Table->Rows[DGW_Table->RowCount - 1]->HeaderCell->Value = Convert::ToString(Convert::ToDouble(DGW_Table->Rows[DGW_Table->RowCount - 2]->HeaderCell->Value) + 1);
				// вот тут вызов нового окна
				//dlg1->Sbros();
				//if (dlg1->ShowDialog() == Windows::Forms::DialogResult::OK) {
					DGW_Table[0, DGW_Table->SelectedRows[0]->Index]->Value = Convert::ToString(dlg1->GetMessageName());
					DGW_Table[1, DGW_Table->SelectedRows[0]->Index]->Value = Convert::ToString(dlg1->GetMessageAutor());
					DGW_Table[2, DGW_Table->SelectedRows[0]->Index]->Value = Convert::ToString(dlg1->GetMessageTime());
				//}
			}
		}
	}
}
private: void FindMax(array<int>^ array){
	int iter = 1;

	int compare = 0;
	for (int i = 0; i < DGW_Table->RowCount; i++){
		if (compare == Convert::ToInt32(DGW_Table[2, i]->Value)){
			array[iter++] = i;
		}
		if (compare < Convert::ToInt32(DGW_Table[2, i]->Value)){
			iter = 1;
			compare = Convert::ToInt32(DGW_Table[2, i]->Value);
			array[iter++] = i;
		}
	}

	array[0] = iter; // ячейка под размер массива
}
private: System::Void Out_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!is_something_null()){ // проверка на наличие песни
		array<int>^ arr = gcnew array<int>(Convert::ToInt32(DGW_Table->RowCount) + 1);
		FindMax(arr);

		List->Items->Clear();

		for (int i = 0; i < arr[0] - 1; i++){
			String^ temp;
			temp += DGW_Table->Rows[arr[i + 1]]->HeaderCell->Value + " ";
			for (int j = 0; j < 3; j++){
				temp += DGW_Table[j, arr[i + 1]]->Value + " ";
			}
			List->Items->Add(temp);
		}
	}
}
private: void swap_rows(int first, int second){
	for (int i = 0; i < 3; i++){
		String^ temp = Convert::ToString(DGW_Table[i, first]->Value);
		DGW_Table[i, first]->Value = DGW_Table[i, second]->Value;
		DGW_Table[i, second]->Value = temp;
	}
}
private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!is_something_null()){ // проверка наличия времени
		for (int i = 0; i < DGW_Table->RowCount - 1; i++){
			bool sorted = true;
			for (int j = 0; j < DGW_Table->RowCount - 1 - i; j++){
				String^ left = Convert::ToString(DGW_Table[0, j]->Value);
				String^ right = Convert::ToString(DGW_Table[0, j + 1]->Value);
				if (left->CompareTo(right) > 0){
					swap_rows(j, j + 1);
					sorted = false;
				}
			}
			if (sorted)
				break;
		}
	}
}
private: System::Void Sort_L_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!is_something_null()){
		for (int i = 0; i < DGW_Table->RowCount - 1; i++){
			bool sorted = true;
			for (int j = 0; j < DGW_Table->RowCount - 1 - i; j++){
				double left = Convert::ToDouble(DGW_Table[2, j]->Value);
				double right = Convert::ToDouble(DGW_Table[2, j + 1]->Value);
				if (left < right){
					swap_rows(j, j + 1);
					sorted = false;
				}
			}
			if (sorted)
				break;
		}
	}
}
private: System::Void CLearList_Click(System::Object^ sender, System::EventArgs^ e) {
	List->Items->Clear();
}
private: System::Void btnRedact_Click(System::Object^ sender, System::EventArgs^ e) {
	if (DGW_Table->SelectedRows->Count > 0) {
		dlg1->SetMessageName(Convert::ToString(DGW_Table[0, DGW_Table->SelectedRows[0]->Index]->Value));
		dlg1->SetMessageAutor(Convert::ToString(DGW_Table[1, DGW_Table->SelectedRows[0]->Index]->Value));
		dlg1->SetMessageTime(Convert::ToString(DGW_Table[2, DGW_Table->SelectedRows[0]->Index]->Value));
		if (dlg1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			DGW_Table[0, DGW_Table->SelectedRows[0]->Index]->Value = Convert::ToString(dlg1->GetMessageName());
			DGW_Table[1, DGW_Table->SelectedRows[0]->Index]->Value = Convert::ToString(dlg1->GetMessageAutor());
			DGW_Table[2, DGW_Table->SelectedRows[0]->Index]->Value = Convert::ToString(dlg1->GetMessageTime());
		}
	}
}

};
}
