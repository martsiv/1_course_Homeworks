#pragma once
#include <iostream>
#include <iomanip>
#include <cctype>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

void createMatrx(int**& m, int rows, int cols);
void fillRndMatrix(int** matrix, int rows, int cols);
void printMatrix(int** matrix, const int ROWS, const int COLS);
void printMatrix(int matrix[], const int SIZE);
int* arrSum(int** arr, const int rows, const int cols, int& size);
void reversRows(int** arr, const int rows, const int cols);
void addRowMatrx(int**& m, int& rows, int cols);
void addIndexRowMatrx(int**& m, int& rows, int cols, int index);
void deleteIndexRowMatrx(int**& m, int& rows, int cols, int index);
void removeMatrx(int**& m, int& rows, int& cols);