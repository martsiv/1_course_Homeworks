#include <iostream>
#include <iomanip>
#include <cctype>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int** createTrianMatrix(int rows);
void printTrianMatrix(int** m, int rows);
void fillRandTrianMatrix(int** m, int rows, int left = 0, int right = 100);
void deleteArray(int**& m, int& rows);

int main()
{
	int rows;
	cout << "Enter rows of dynamic array: ";
	cin >> rows;
	int** p_arr;
	p_arr = createTrianMatrix(rows);
	if (p_arr == nullptr)
		return 1;
	cout << "Enter the range (left! & right!) to fill array: ";
	int left, right;
	cin >> left >> right;
	fillRandTrianMatrix(p_arr, rows, left, right);
	printTrianMatrix(p_arr, rows);
	deleteArray(p_arr, rows);
}

int** createTrianMatrix(int rows)
{
	if (rows <= 0)
	{
		cout << "Invalid value in rows!!! Exit.\n";
		return nullptr;
	}
	int** m = new int*[rows];
	for (size_t i = 0; i < rows; i++)
		m[i] = new int[i + 1];
	return m;
}

void printTrianMatrix(int** m, int rows)
{
	for (size_t i = 0; i < rows; i++)
	{
		for (int j = 0; j < i + 1; j++)
			cout << "\t" << m[i][j];
		cout << endl << endl;
	}
	cout << endl;

}

void fillRandTrianMatrix(int** m, int rows, int left, int right)
{
	srand(unsigned(time(0)));
	for (size_t i = 0; i < rows; i++)
	{
		for (int j = 0; j < i + 1; j++)
			m[i][j] = left + rand() % (right - left + 1);
	}
}

void deleteArray(int**& m, int& rows)
{
	for (int i = 0; i < rows; i++)
		delete[] m[i];
	delete[] m;
	m = nullptr;
	rows = 0;
}

