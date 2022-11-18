#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>
#include "game(15-ki).h"

using namespace std;

int main()
{
	const int SIZE = 4;
	int board[SIZE][SIZE];
	const int SIZE_POSITION = 2;
	int position[SIZE_POSITION]{};
	
	////	Швидке заповнення, щоб перевірити програму
	//int counter = 15;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	for (int j = 0; j < SIZE; j++)
	//	{
	//		if ((i == 0) && (j == 1))
	//		{
	//			board[i][j] = 0;
	//		}
	//		else
	//			board[i][j] = counter--;

	//	}
	//}
	//position[0] = SIZE - 1;
	//position[1] = SIZE - 2;

	////Якщо розкоментовувати верхню частину, для перевірки на виграш, то рядок нижче закоментувати (і навпаки)
	fillBoard(board, SIZE);	//Рандомне заповнення
	
	printBoard(board, SIZE, position, SIZE_POSITION);
	while (!(move(board, position, SIZE)))
	{
		system("cls");
		printBoard(board, SIZE, position, SIZE_POSITION);
		if (checkwin(board, SIZE))
		{
			cout << "You win!\n";
			return 0;
		}
	}
}