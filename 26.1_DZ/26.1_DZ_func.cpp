#include "26.1_DZ.h"

void createMatrx(int**& m, int rows, int cols)
{
	if (rows <= 0 || cols <= 0)
	{
		cout << "Invalid value! Exit!\n";
		m = nullptr;
		return;
	}
	m = new int* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		m[i] = new int[cols];
	}
}

void fillRndMatrix(int** matrix, int rows, int cols)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			matrix[i][j] = rand() % 10;
	}
}
void printMatrix(int** matrix, const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << "\t" << matrix[i][j];
		cout << endl;
	}
	cout << endl;
}

void printMatrix(int matrix[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
		cout << "\t" << matrix[i];
	cout << endl;
}

int* arrSum(int** arr, const int rows, const int cols, int& size)
{
	size = rows;
	int* sum = new int[size];
	for (int i = 0; i < rows; i++)
	{
		sum[i] = 0;
		for (int j = 0; j < cols; j++)
		{
			sum[i] += arr[i][j];
		}
	}
	return sum;
}

void reversRows(int** arr, const int rows, const int cols)
{
	int* tmp;
	for (int i = 0; i < rows / 2; i++)
	{
		tmp = arr[i];
		arr[i] = arr[rows - 1 - i];
		arr[rows - 1 - i] = tmp;
	}
}

void addRowMatrx(int**& m, int& rows, int cols)
{
	++rows;
	int** res = new int* [rows];
	for (size_t i = 0; i < rows - 1; i++)
		res[i] = m[i];
	res[rows - 1] = new int[cols] {};
	delete[] m;
	m = res;
}

void addIndexRowMatrx(int**& m, int& rows, int cols, int index)
{
	++rows;
	int** res = new int* [rows];
	res[index] = new int[cols] {};
	for (size_t i = 0, j = 0; i < rows; i++)
	{
		if (i == index)
			continue;
		res[i] = m[j];
		j++;
	}
	delete[] m;
	m = res;
}

void deleteIndexRowMatrx(int**& m, int& rows, int cols, int index)
{
	if (index < 0 || rows <= index)
	{
		cout << "Invalid index!\n";
		return;
	}
	--rows;
	int** res = new int* [rows];
	delete[] m[index];
	for (size_t i = 0, j = 0; i < rows + 1; i++)
	{
		if (i != index)
		{
			res[j] = m[i];
			j++;
		}
	}
	delete[] m;
	m = res;
}

void removeMatrx(int**& m, int& rows, int& cols)
{
	for (size_t i = 0; i < rows; i++)
	{
		delete[] m[i];
	}
	delete[] m;
	m = nullptr;
	rows = 0;
	cols = 0;
}