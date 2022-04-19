#pragma once
#include <iostream>
#include <fstream>

class MyList
{
private:

	class ListElement
	{

	public:

		// --- область для вставки параметров под конкретную задачу --- //
		char* data; // фио
		int array_length; // длина фио
		int* arr; // три оценки
		// --- область для вставки параметров под конкретную задачу --- //

		int number_of_current_element;
		ListElement* next;
		ListElement* prev;

	};

	ListElement* head;
	ListElement* tail;
	const int MAX_ARRAY_SIZE = 1024;
	int size;

public:

	void PrintList();

	// --- служебные функции --- //

	MyList();
	~MyList();

	bool empty();
	bool correct_pos(const int pos);

	ListElement* find(const int pos);
	ListElement* find(const char* data, const int array_length);
	int find(const char* data);

	// --- Геттеры --- //

	int Get_size();

	// --- добавление элементов --- //

	void push_back(const char* data, const int array_length, int* arr);
	void push_front(const char* data, const int array_length, int* arr);

	// --- удаление элементов --- //

	void pop_back();
	void pop_front();
	void erase(const int pos);
	void erase(const char* data);
	void clear();

	// --- Изменение элементов списка --- //

	void assign(const int pos, int* arr);
	void swap(const int first, const int second);

	// --- операции над списком --- //

	void save(char* file_name)
	{
		if (!empty())
		{
			std::fstream file;

			file.open(file_name, std::ios::binary | std::ios::out);

			if (!file)
				throw "Не удалось открыть файл";
			else
			{
				char buf = ' ';
				for (ListElement* i = this->head; i != NULL; i = i->next)
				{
					file.write((char*)&buf, sizeof(char));

					file.write(i->data, strlen(i->data) + 1);

					file.write((char*)i->arr, 3 * sizeof(i->arr[0]));
				}
			}

			file.close();
		}
	}

	void load(char* file_name)
	{
		clear();

		std::fstream file;

		file.open(file_name, std::ios::binary | std::ios::in);

		char buf;
		while (file.read(&buf, sizeof(char)))
		{
			char* data = new char[200];
			int* arr = new int[200];

			int n_arr = 0, i_dat = 0;

			do
			{
				if (file.read(&data[i_dat], sizeof(char)))
					i_dat++;
			} while (data[i_dat - 1] != '\0');

			while (n_arr < 3)
			{
				if (file.read((char*)&arr[n_arr], sizeof(arr[n_arr])))
					n_arr++;
			}

			push_back(data, strlen(data) + 1, arr);
		}

		file.close();
	}

	void sort();
	void delete_duplicates(const int pos);
};

