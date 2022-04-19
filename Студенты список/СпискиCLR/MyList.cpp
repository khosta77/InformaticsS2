#pragma once
#include "MyList.h"

MyList::MyList()
{
	this->head = nullptr;
	this->tail = nullptr;
	this->size = 0;
}

MyList::~MyList()
{
	while (!empty())
	{
		ListElement* le = this->head;
		this->head = this->head->next;

		// --- область для вставки параметров под конкретную задачу --- //
		delete[] le->data;
		delete[] le->arr;
		// --- область для вставки параметров под конкретную задачу --- //

		delete le;
	}

	this->tail = nullptr;
	this->size = 0;
}

bool MyList::empty() { return this->head == nullptr; }

bool MyList::correct_pos(const int pos) { return pos > 0 || pos < this->size; }

MyList::ListElement* MyList::find(const int pos)
{
	bool from_beg = false;
	bool from_end = false;

	ListElement* beg = this->head;
	ListElement* end = this->tail;

	while (beg->number_of_current_element <= end->number_of_current_element)
	{
		if (beg->number_of_current_element == pos)
		{
			from_beg = true;
			break;
		}
		if (end->number_of_current_element == pos)
		{
			from_end = true;
			break;
		}
		beg = beg->next;
		end = end->prev;
	}

	if (beg->number_of_current_element > end->number_of_current_element)
		throw "Индекс за пределами диапазона";

	if (from_beg)
		return beg;
	if (from_end)
		return end;
}

MyList::ListElement* MyList::find(const char* data, const int array_length)
{
	bool from_beg = false;
	bool from_end = false;

	ListElement* beg = this->head;
	ListElement* end = this->tail;
	while (beg->number_of_current_element <= end->number_of_current_element)
	{
		if (beg->array_length == array_length)
		{
			bool found = true;

			for (int i = 0; i < array_length; i++)
			{
				if (beg->data[i] != data[i])
				{
					found = false;
					break;
				}
			}

			if (found)
			{
				from_beg = true;
				break;
			}
		}
		if (end->array_length == array_length)
		{
			bool found = true;

			for (int i = 0; i < array_length; i++)
			{
				if (end->data[i] != data[i])
				{
					found = false;
					break;
				}
			}

			if (found)
			{
				from_end = true;
				break;
			}
		}
		beg = beg->next;
		end = end->prev;
	}

	if (beg->number_of_current_element > end->number_of_current_element || (!from_beg && !from_end))
		throw "Index out of range or incorrect data";

	if (from_beg)
		return beg;
	if (from_end)
		return end;
}

int MyList::find(const char* data)
{
	char delim[] = " ";

	char copy_data[200];
	std::strcpy(copy_data, data);
	char* token_one = strtok(copy_data, delim);
	token_one = strtok(NULL, delim);

	bool from_beg = false;
	bool from_end = false;

	ListElement* beg = this->head;
	ListElement* end = this->tail;
	while (beg->number_of_current_element <= end->number_of_current_element)
	{
		char copy_beg[200];
		std::strcpy(copy_beg, beg->data);
		char* token_beg = strtok(copy_beg, delim);
		token_beg = strtok(NULL, delim);

		char copy_end[200];
		std::strcpy(copy_end, end->data);
		char* token_end = strtok(copy_end, delim);
		token_end = strtok(NULL, delim);

		if (std::strlen(token_beg) == std::strlen(token_one))
		{
			bool found = true;

			for (int i = 0; i < std::strlen(token_one); i++)
			{
				if (token_beg[i] != token_one[i])
				{
					found = false;
					break;
				}
			}

			if (found)
			{
				from_beg = true;
				break;
			}
		}
		if (std::strlen(token_end) == std::strlen(token_one))
		{
			bool found = true;

			for (int i = 0; i < std::strlen(token_one); i++)
			{
				if (token_end[i] != token_one[i])
				{
					found = false;
					break;
				}
			}

			if (found)
			{
				from_end = true;
				break;
			}
		}

		beg = beg->next;
		end = end->prev;
	}

	if (beg->number_of_current_element > end->number_of_current_element || (!from_beg && !from_end))
		throw "Index out of range or incorrect data";

	if (from_beg)
		return beg->number_of_current_element;
	if (from_end)
		return end->number_of_current_element;
}

// --- Геттеры --- //

int MyList::Get_size() { return this->size; }

// --- добавление элементов --- //

void MyList::push_back(const char* data, const int array_length, int* arr)
{
	ListElement* le = new ListElement;

	// --- область для вставки параметров под конкретную задачу --- //
	le->array_length = array_length;
	le->data = new char[this->MAX_ARRAY_SIZE];

	for (int i = 0; i < array_length; i++)
		le->data[i] = data[i];

	le->arr = new int[3];
	for (int i = 0; i < 3; i++)
		le->arr[i] = arr[i];
	// --- область для вставки параметров под конкретную задачу --- //

	le->number_of_current_element = this->size++;
	le->next = nullptr;
	le->prev = nullptr;

	if (empty())
		this->head = le;
	else
	{
		le->prev = this->tail;
		this->tail->next = le;
	}

	this->tail = le;
}

void MyList::push_front(const char* data, const int array_length, int* arr)
{
	ListElement* le = new ListElement;

	// --- область для вставки параметров под конкретную задачу --- //
	le->array_length = array_length;
	le->data = new char[this->MAX_ARRAY_SIZE];

	for (int i = 0; i < array_length; i++)
		le->data[i] = data[i];

	le->arr = new int[3];
	for (int i = 0; i < 3; i++)
		le->arr[i] = arr[i];
	// --- область для вставки параметров под конкретную задачу --- //

	le->next = nullptr;
	le->prev = nullptr;

	if (empty())
	{
		this->head = le;
		this->tail = le;
	}
	else
	{
		this->head->prev = le;
		le->next = this->head;
		le->prev = nullptr;
	}

	this->head = le;
	this->size++;

	int n = 0;
	for (ListElement* i = this->head; i != nullptr; i = i->next, n++)
	{
		i->number_of_current_element = n;
	}
}

// --- удаление элементов --- //

void MyList::pop_back()
{
	if (!empty())
	{
		ListElement* el = this->tail;
		this->tail = this->tail->prev;

		if (this->tail != nullptr)
			this->tail->next = nullptr;
		else
			this->head = nullptr;

		// --- область для вставки параметров под конкретную задачу --- //
		delete[] el->data;
		delete[] el->arr;
		// --- область для вставки параметров под конкретную задачу --- //

		delete el;
		this->size--;
	}
}

void MyList::pop_front()
{
	if (!empty())
	{
		ListElement* current = this->head;
		this->head = this->head->next;

		if (this->head != nullptr)
			this->head->prev = nullptr;
		else
			this->tail = nullptr;

		// --- область для вставки параметров под конкретную задачу --- //
		delete[] current->data;
		delete[] current->arr;
		// --- область для вставки параметров под конкретную задачу --- //

		delete current;
		this->size--;

		int n = 0;
		for (ListElement* i = this->head; i != nullptr; i = i->next, n++)
		{
			i->number_of_current_element = n;
		}
	}
}

void MyList::erase(const int pos)
{
	if (!empty())
	{
		if (!correct_pos(pos))
			throw "Index out of range";

		ListElement* current;

		if (pos == 0)
		{
			pop_front();
		}
		else
			if (pos == this->size - 1)
			{
				current = this->tail;
				this->tail->prev->next = nullptr;
				this->tail = this->tail->prev;

				// --- область для вставки параметров под конкретную задачу --- //
				delete[] current->data;
				delete[] current->arr;
				// --- область для вставки параметров под конкретную задачу --- //

				delete current;
				this->size--;
			}
			else
			{
				ListElement* temp = find(pos);
				int n = temp->number_of_current_element;
				current = temp->prev;
				current->next = temp->next;
				current = temp->next;
				current->prev = temp->prev;

				// --- область для вставки параметров под конкретную задачу --- //
				delete[] temp->data;
				delete[] temp->arr;
				// --- область для вставки параметров под конкретную задачу --- //

				delete temp;
				this->size--;

				for (ListElement* i = current; i != nullptr; i = i->next, n++)
				{
					i->number_of_current_element = n;
				}
			}
	}
}

void MyList::erase(const char* data)
{
	if (!empty())
	{
		int n = find(data);
		delete_duplicates(n);

		ListElement* current;

		if (n == 0)
		{
			pop_front();
		}
		else
			if (n == this->size - 1)
			{
				current = this->tail;
				this->tail->prev->next = nullptr;
				this->tail = this->tail->prev;

				// --- область для вставки параметров под конкретную задачу --- //
				delete[] current->data;
				delete[] current->arr;
				// --- область для вставки параметров под конкретную задачу --- //

				delete current;
				this->size--;
			}
			else
			{
				ListElement* temp = find(n);
				int n = temp->number_of_current_element;
				current = temp->prev;
				current->next = temp->next;
				current = temp->next;
				current->prev = temp->prev;

				// --- область для вставки параметров под конкретную задачу --- //
				delete[] temp->data;
				delete[] temp->arr;
				// --- область для вставки параметров под конкретную задачу --- //

				delete temp;
				this->size--;

				for (ListElement* i = current; i != nullptr; i = i->next, n++)
				{
					i->number_of_current_element = n;
				}
			}
	}
}

void MyList::clear()
{
	if (!empty())
	{
		while (!empty())
		{
			ListElement* le = this->head;
			this->head = this->head->next;

			// --- область для вставки параметров под конкретную задачу --- //
			delete[] le->data;
			delete[] le->arr;
			// --- область для вставки параметров под конкретную задачу --- //

			delete le;
		}

		this->tail = nullptr;
		this->size = 0;
	}
}

// --- Изменение элементов списка --- //

void MyList::assign(const int pos, int* arr)
{
	if (!empty())
	{
		if (!correct_pos(pos))
			throw "Index out of range";

		ListElement* temp = find(pos);

		// --- область для вставки параметров под конкретную задачу --- //
		delete[] temp->arr;
		temp->arr = new int[3];
		for (int i = 0; i < 3; i++)
			temp->arr[i] = arr[i];
		// --- область для вставки параметров под конкретную задачу --- //
	}
}

void MyList::swap(const int first, const int second)
{
	if (!empty())
	{
		if (!correct_pos(first) && !correct_pos(second))
			throw "Index out of range";

		ListElement* le1 = find(first);
		ListElement* le2 = find(second);

		// --- область для вставки параметров под конкретную задачу --- //
		char* temp_data = new char[this->MAX_ARRAY_SIZE];
		int temp_array_length;

		for (int i = 0; i < le1->array_length; i++)
			temp_data[i] = le1->data[i];

		for (int i = 0; i < le2->array_length; i++)
			le1->data[i] = le2->data[i];

		temp_array_length = le1->array_length;

		le1->array_length = le2->array_length;

		le2->array_length = temp_array_length;

		for (int i = 0; i < le2->array_length; i++)
			le2->data[i] = temp_data[i];

		delete[] temp_data;

		for (int i = 0; i < 3; i++)
		{
			int temp = le1->arr[i];
			le1->arr[i] = le2->arr[i];
			le2->arr[i] = temp;
		}
		// --- область для вставки параметров под конкретную задачу --- //
	}
}

// --- операции над списком --- //

void MyList::delete_duplicates(const int pos)
{
	if (!empty())
	{
		if (!correct_pos(pos))
			throw "Index out of range";

		ListElement* le = find(pos);

		for (ListElement* i = this->head; i != nullptr;)
		{
			if (i == le)
			{
				i = i->next;
				continue;
			}

			if (i->array_length == le->array_length)
			{
				bool found = true;

				for (int j = 0; j < le->array_length; j++)
				{
					// --- область для вставки параметров под конкретную задачу --- //
					if (i->data[j] != le->data[j])
					{
						found = false;
						break;
					}
					// --- область для вставки параметров под конкретную задачу --- //
				}

				if (found)
				{
					ListElement* temp = i;
					i = i->next;
					erase(temp->number_of_current_element);
					continue;
				}
			}

			i = i->next;
		}
	}
}

void MyList::sort()
{
	if (!empty())
	{
		if (this->size > 1)
		{
			ListElement* le1 = this->head;
			ListElement* le2;

			for (int i = 0; i < this->size; i++, le1 = le1->next)
			{
				le2 = this->head;
				le2 = le2->next;
				for (int k = 0; k < i; k++)
				{
					le2 = le2->next;
				}
				for (int j = 0; j < this->size - i - 1; j++, le2 = le2->next)
					if (std::strcmp(le1->data, le2->data) > 0)
						swap(le1->number_of_current_element, le2->number_of_current_element);
			}
		}
	}
}