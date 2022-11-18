#include <iostream>
#include <math.h>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <string>

using namespace std;

const int SIZE = 3;
char default_char = '*';
char Player1_char = 'X';
char Player2_char = 'O';

void init_array(char arr[][SIZE], int SIZE, char sym);
void show_array(char arr[][SIZE], int SIZE);
int chek_position(char arr[][SIZE], int SIZE, int x, int y);
void player_move(char arr[][SIZE], int SIZE, int Player);
int rules(char arr[][SIZE], int SIZE);

int main()
{
	char arr[SIZE][SIZE];
	int counter_player = 1, result = 0;
	init_array(arr, SIZE, default_char);
	show_array(arr, SIZE);
	while (!result)
	{
		player_move(arr, SIZE, counter_player);
		show_array(arr, SIZE);
		counter_player = counter_player % 2 + 1;
		result = rules(arr, SIZE);
	} 
	if (result == 1)
		cout << "Player 1 win!!!\n";
	else if (result == 2)
		cout << "Player 2 win!!!\n";
	else
		cout << "The result of the game was a draw.\n";

}