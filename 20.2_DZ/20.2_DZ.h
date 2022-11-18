// Група БД221.	Студент Марців М. П.
// Домашнє завдання 20.2
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>

using namespace std;

template<typename T, int dim2, int dim3>
void arrAdd(T arr[][dim2][dim3], int dim1)
{
	int counter = 1;
	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim2; j++)
		{
			for (int k = 0; k < dim3; k++)
			{
				cout << "Enter the " << counter++ << " element: ";
				cin >> arr[i][j][k];
				cin.clear();
				while (cin.get() != '\n')
					continue;
			}
		}
	}
	cout << endl;
}

template<typename T, int dim2, int dim3>
void arrShow(T arr[][dim2][dim3], int dim1)
{
	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim2; j++)
		{
			for (int k = 0; k < dim3; k++)
				cout << '\t' << arr[i][j][k];
			cout << endl;
		}
		cout << endl;
	}
	cout << endl;
}

template<typename T, int dim2, int dim3>
T maxElement(T arr[][dim2][dim3], int dim1)
{
	T max = arr[0][0][0];
	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim2; j++)
		{
			for (int k = 0; k < dim3; k++)
			{
				if (max < arr[i][j][k])
					max = arr[i][j][k];
			}
		}
	}
	return max;
}

template<typename T, int dim2, int dim3>
bool if_rows_sort(T arr[][dim2][dim3], int dim1)
{
	bool result = 1;
	for (int i = 0; i < dim1; i++)
	{
		for (int j = 0; j < dim2; j++)
		{
			for (int k = 0; k < dim3 - 1; k++)
			{
				if (arr[i][j][k + 1] < arr[i][j][k])
					result = 0;
			}
		}
	}
	return result;
}