#include <iostream>
#include <iomanip>
#include <cctype>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

void createMatrx(int**& m, int rows, int cols);
void fillRndMatrix(int** matrix, int rows, int cols, int left = 0, int right = 19);
void printMatrix(int** matrix, int ROWS, int COLS);
void transpositionArr(int**& m, int& rows, int& cols);
void removeMatrx(int**& m, int& rows, int& cols);

int main()
{
	int** matrix;
	cout << "Enter the rows and cols: ";
	int rows, cols;
	cin >> rows >> cols;
	createMatrx(matrix, rows, cols);
	if (matrix == nullptr)
		return 1;
	fillRndMatrix(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	transpositionArr(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	removeMatrx(matrix, rows, cols);
}

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

void fillRndMatrix(int** matrix, int rows, int cols, int left, int right)
{
	srand(unsigned(time(0)));
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			matrix[i][j] = left + rand() % (right - left + 1);;
	}
}
void printMatrix(int** matrix, int ROWS, int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			cout << "\t" << matrix[i][j];
		cout << endl << endl;
	}
	cout << endl;
}
void transpositionArr(int**& m, int& rows, int& cols)
{
	int** res;
	createMatrx(res, cols, rows);
	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			res[j][i] = m[i][j];
	for (int i = 0; i < rows; i++)
		delete[] m[i];
	delete[] m;
	m = res;
	int tmp = rows;
	rows = cols;
	cols = tmp;
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