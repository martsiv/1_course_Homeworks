#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>
#include "game(15-ki).h"

using namespace std;

void fillBoard(int board[][SIZE], int SIZE)
{
	srand(unsigned(time(0)));

	int counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
			board[i][j] = counter++;
	}
	int tmp, r, c;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			r = rand() % SIZE;
			c = rand() % SIZE;
			tmp = board[r][c];
			board[r][c] = board[i][j];
			board[i][j] = tmp;
		}
	}
}

void printBoard(const int board[][SIZE], int SIZE, int position[], int SIZE_POSITION)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (!board[i][j])
			{
				cout << setw(5) << '@';
				position[0] = i;
				position[1] = j;
			}
			else
				cout << setw(5) << board[i][j];
		}
		cout << endl << endl;
	}
}


int move(int board[][SIZE], int position[], int SIZE)
{
	const int rows = position[0], cols = position[1];
	cout << "Enter \"w, a, s, d\" to move or \"q\" to exit\n";
	char i;
	int tmp;
	cin >> i;
	switch (i)
	{
	case 'A':
	case 'a':
		if (0 < position[1])
		{
			tmp = board[rows][cols];
			board[rows][cols] = board[rows][cols - 1];
			board[rows][cols - 1] = tmp;
		}
		else
		{
			cout << "Choose another way.(press Enter to continue)\n";
			system("pause>null");
		}
		break;
	case 'D':
	case 'd':
		if (position[1] < SIZE - 1)
		{
			tmp = board[rows][cols];
			board[rows][cols] = board[rows][cols + 1];
			board[rows][cols + 1] = tmp;
		}
		else
		{
			cout << "Choose another way.(press Enter to continue)\n";
			system("pause>null");
		}
		break;
	case 'W':
	case 'w':
		if (0 < position[0])
		{
			tmp = board[rows][cols];
			board[rows][cols] = board[rows - 1][cols];
			board[rows - 1][cols] = tmp;
		}
		else
		{
			cout << "Choose another way.(press Enter to continue)\n";
			system("pause>null");
		}
		break;
	case 'S':
	case 's':
		if (position[0] < SIZE - 1)
		{
			tmp = board[rows][cols];
			board[rows][cols] = board[rows + 1][cols];
			board[rows + 1][cols] = tmp;
		}
		else
		{
			cout << "Choose another way.(press Enter to continue)\n";
			system("pause>null");
		}
		break;
	case 'Q':
	case 'q':
		cout << "Goodbuy!\n";
		return 1;
		break;
	default:
		cout << "Invalid value. Try again.(press Enter to continue)\n";
		system("pause>null");
	}
	return 0;
}

int checkwin(int board[][SIZE], int SIZE)
{
	int first = 1, last = SIZE * SIZE - 1;
	int count;
	bool win = 1, up = 0, down = 0, start = 0;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (!start)
			{
				if (board[i][j] == first)
				{
					up = 1;
					count = first;
				}
				else if (board[i][j] == last)
				{
					down = 1;
					count = last;
				}
				start = 1;
			}
			if (start)
			{
				if (up && count < SIZE * SIZE - 1 && count++ != board[i][j])
					win = 0;
				else if (down && 0 < count && count-- != board[i][j])
					win = 0;
			}
		}
	}
	return win;
}


