#include <iostream>
#include <math.h>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <string>

using namespace std;

extern const int SIZE = 3;
extern char default_char;
extern char Player1_char;
extern char Player2_char;

void init_array(char arr[][SIZE], int SIZE, char sym)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			arr[i][j] = sym;
		}
	}
}
void show_array(char arr[][SIZE], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (i == 0)
		{
			cout << setw(2) << ' ';
			for (int j = 0; j < SIZE; j++)
				cout << setw(2) << j;
			cout << endl;
		}
		for (int j = 0; j < SIZE; j++)
		{
			if (j == 0)
				cout << setw(2) << i;
			cout << setw(2) << arr[i][j];
		}
		cout << endl;
	}
}
int chek_position(char arr[][SIZE], int SIZE, int x, int y)
{
	if (arr[y][x] == default_char)
		return 1;
	else
		return 0;
}
void player_move(char arr[][SIZE], int SIZE, int Player)
{
	int x, y;
	do
	{
		cout << "Player " << Player << ", enter x - coords: \n";
		while (!(cin >> x) || (x < 0 || 3 <= x))
		{
			cout << "Error, enter valid data.\n";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
		cout << "Player " << Player << ", enter y - coords: \n";
		while (!(cin >> y) || (y < 0 || 3 <= y))
		{
			cout << "Error, enter valid data.\n";
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
	} while (!chek_position(arr, SIZE, x, y));
	if (Player == 1)
		arr[y][x] = Player1_char;
	else if (Player == 2)
		arr[y][x] = Player2_char;
}
int rules(char arr[][SIZE], int SIZE)
{
	if (Player1_char == arr[0][0] && arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
		return 1;
	else if (Player1_char == arr[1][0] && arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
		return 1;
	else if (Player1_char == arr[2][0] && arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
		return 1;
	else if (Player1_char == arr[0][0] && arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
		return 1;
	else if (Player1_char == arr[0][1] && arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
		return 1;
	else if (Player1_char == arr[0][2] && arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
		return 1;
	else if (Player1_char == arr[0][0] && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
		return 1;
	else if (Player1_char == arr[0][2] && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
		return 1;

	else if (Player2_char == arr[0][0] && arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
		return 2;
	else if (Player2_char == arr[1][0] && arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
		return 2;
	else if (Player2_char == arr[2][0] && arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
		return 2;
	else if (Player2_char == arr[0][0] && arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
		return 2;
	else if (Player2_char == arr[0][1] && arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
		return 2;
	else if (Player2_char == arr[0][2] && arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
		return 2;
	else if (Player2_char == arr[0][0] && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
		return 2;
	else if (Player2_char == arr[0][2] && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
		return 2;
	bool draw = 1;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i][j] == default_char)
				draw = 0;
		}
	}
	if (draw)
		return 3;
	return 0;
}