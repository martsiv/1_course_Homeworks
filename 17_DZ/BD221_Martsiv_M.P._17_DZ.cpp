#include <iostream>
#include <math.h>
#include <iomanip>
#include <cctype>
#include <ctime>
#include <string>

using namespace std;


int number_of_employees(void);								//До 1 завдання
int missed_days(int employees);								//До 1 завдання
float average_missed_days(int employees, int missed_days);	//До 1 завдання
bool simple(int num);										//До 2 завдання
void number_to_string(int num);								//До 3 завдання
int computers_move(void);									//До 4 завдання
int player_move(void);										//До 4 завдання
void show_move(int move, bool is_player);					//До 4 завдання
int who_wins(int player_result, int computer_result);		//До 4 завдання

int main(void)
{
	////Завдання 1
	//int employees = number_of_employees();
	//int days = missed_days(employees);
	//cout << "Average missed days = " << average_missed_days(employees, days) << endl;


	////Завдання 2
	//cout << "Enter a range of numbers to define natural numbers: ";
	//int left, right;
	//cin >> left >> right;
	//for (int i = left; i <= right; i++)
	//{
	//	if (simple(i))
	//		cout << i << '\t';
	//}
	//cout << endl;


	////Завдання 3
	//cout << "Enter number 0 - 99 to transform in string - ";
	//int num;
	//cin >> num;
	//number_to_string(num);


	////Завдання 4
	//int computer, player;
	//do
	//{
	//	computer = computers_move();
	//	player = player_move();
	//	show_move(player, 1);
	//	show_move(computer, 0);
	//} while (!who_wins(player, computer));
}

//Функція до завдання 1
int number_of_employees(void)
{
	int n_employees;
	cout << "Enter the number of employees in the company: ";
	while (cin >> n_employees && n_employees < 1)
	{
		cout << "Plese enter correct value!\n";
	}
	return n_employees;
}

//Функція до завдання 1
int missed_days(int employees)
{
	cout << "Enter the number of workdays missed for each employee.\n";
	int missed_days = 0;
	int value;
	for (int i = 0; i < employees; i++)
	{
		value = 0;
		cout << "For employee number " << i + 1 << endl;
		while (cin >> value && value < 0)
		{
			cout << "Plese enter correct value!\n";
		}
		missed_days += value;
	}
	return missed_days;
}

//Функція до завдання 1
float average_missed_days(int employees, int missed_days)
{
	float average_missed_days;
	average_missed_days = float(missed_days) / employees;
	return average_missed_days;
}

//Функція до завдання 2

bool simple(int num)
{
	for (int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return 0;
	}
	return 1;
	cout << endl;
}

//Функція до завдання 3
void number_to_string(int num)
{
	string zero_9[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string ten_19[10] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
	string tens[8] = { "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };
	if (num <= 9)
		cout << zero_9[num];
	else if (num <= 19)
		cout << ten_19[num - 10];
	else if (num % 10 == 0)
		cout << tens[num / 10 - 2];
	else
	{
		cout << tens[num / 10 - 2] << '-' << zero_9[num % 10];
	}
	cout << endl;
}

//Функція до завдання 4
int computers_move(void)
{
	srand(unsigned(time(0)));
	int num = 1 + rand() % 3;
	return num;
}

//Функція до завдання 4
int player_move(void)
{
	int menu;
	cout << "Make your choise:\n"
		<< "1 - Rock\n"
		<< "2 - Paper\n"
		<< "3 - Scissors\n";
	while (!(cin >> menu) || menu < 1 || 3 < menu)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		system("cls");
		cout << "Incorrect input\n"
			<< "Make your choise:\n"
			<< "1 - Rock\n"
			<< "2 - Paper\n"
			<< "3 - Scissors\n";
	}
	return menu;
}

//Функція до завдання 4
void show_move(int move, bool is_player)
{
	enum class Game { Rock = 1, Paper, Scissors };
	string player = is_player ? "Player" : "Computer";
	cout << player << " have \t";
	switch (Game(move))
	{
	case Game::Rock: cout << "\"Rock\"";
		break;
	case Game::Paper: cout << "\"Paper\"";
		break;
	case Game::Scissors: cout << "\"Scissors\"";
		break;
	}
	cout << endl;
}

//Функція до завдання 4
int who_wins(int player_result, int computer_result)
{
	if ((player_result == 1 && computer_result == 3) || (player_result == 2 && computer_result == 1) || (player_result == 3 && computer_result == 2))
	{
		cout << "Congratulations, the player wins!\n";
		return 1;
	}
	else if (player_result == computer_result)
	{
		cout << "The result of the match is a draw. Try again until someone wins.\n";
		return 0;
	}
	else
	{
		cout << "Unfortunately, the player loses!\n";
		return 2;
	}
}
