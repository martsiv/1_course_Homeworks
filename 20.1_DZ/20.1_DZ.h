// Група БД221.	Студент Марців М. П.
// Домашнє завдання 20.1
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>

using namespace std;

template<typename T>
void add_arr(T arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter #" << i + 1 << " element: ";
		cin >> arr[i];
	}
}

template<typename T>
void show_arr(T arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << '\t' << arr[i];
	cout << endl;
}

template<typename T>
int find_first_enter_position(T arr[], int SIZE, T element)
{
	int index = -1;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return index;
}

int find_first_enter_position(char arr[], int SIZE, char element)
{
	element = tolower(element);
	for (int i = 0; i < SIZE; i++)
	{
		if (tolower(arr[i]) == element)
			return i;
	}
	return -1;
}

template<typename T>
int find_last_enter_position(T arr[], int SIZE, T element)
{
	int index = -1;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == element)
			index = i;
	}
	return index;
}

template<typename T>
void mix_arr(T arr[], int SIZE)
{
	static bool mixed = 0;
	if (!mixed)
	{
		srand(unsigned(time(0)));
		mixed = 1;
	}
	for (int i = 0; i < SIZE; i++)
	{
		int index = rand() % SIZE;
		T tmp = arr[index];
		arr[index] = arr[i];
		arr[i] = tmp;
	}
}

template<typename T>
void add_one_symbol_arr(T arr[], int SIZE, T sym)
{
	for (int i = 0; i < SIZE; i++)
		arr[i] = sym;
}

template<typename T>
void up_sort(T arr[], int SIZE)
{
	bool swapped;
	int counter = 0;
	do
	{
		swapped = 0;
		for (int j = 0; j < SIZE - 1 - counter; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				swapped = 1;
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		counter++;
	} while (swapped);
}

template<typename T>
void down_sort(T arr[], int SIZE)
{
	bool swapped;
	int counter = 0;
	do
	{
		swapped = 0;
		for (int j = 0; j < SIZE - 1 - counter; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swapped = 1;
				T tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		counter++;
	} while (swapped);
}