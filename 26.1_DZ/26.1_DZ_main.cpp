#include "26.1_DZ.h"
int main()
{
	int** matrix;
	int rows, cols;
	cout << "Enter rows and columns: ";
	cin >> rows >> cols;
	createMatrx(matrix, rows, cols);
	if (matrix == nullptr)
		return 1;
	fillRndMatrix(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	int SIZE;
	int* newArrSum;
	newArrSum = arrSum(matrix, rows, cols, SIZE);
	cout << "Sum in the rows: \n";
	printMatrix(newArrSum, SIZE);
	delete[] newArrSum;
	cout << "Matrix after revers:\n";
	reversRows(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	cout << "Matrix after add row:\n";
	addRowMatrx(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	int index;
	cout << "Enter index to add new row: ";
	while (!(cin >> index) || index < 0 || rows < index)
		continue;
	addIndexRowMatrx(matrix, rows, cols, index);
	printMatrix(matrix, rows, cols);
	cout << "Enter index to delete row: ";
	while (!(cin >> index) || index < 0 || rows <= index)
		continue;
	deleteIndexRowMatrx(matrix, rows, cols, index);
	printMatrix(matrix, rows, cols);
	removeMatrx(matrix, rows, cols);	
}