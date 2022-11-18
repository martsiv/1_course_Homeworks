#include "func.h"

int main()
{
	int i_arrA[SIZE][SIZE]{};
	int i_arrB[SIZE][SIZE]{};
	int i_arrC[SIZE][SIZE]{};
	cout << "Array A: \n";
	fillArrRand(i_arrA);
	printArr(i_arrA);
	cout << "Array B: \n";
	fillArrRand(i_arrB, 5, 20);
	printArr(i_arrB);
	cout << "Array C = A + B: \n";
	sumMatrix(i_arrA, i_arrB, i_arrC);
	printArr(i_arrC);
	cout << "Array B = B * num \n";
	multArr(i_arrB, 2);
	printArr(i_arrB);
	cout << "Array C sorted: \n";
	sortArr(i_arrC);
	printArr(i_arrC);

}