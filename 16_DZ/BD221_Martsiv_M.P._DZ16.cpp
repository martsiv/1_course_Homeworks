#include <iostream>
#include <math.h>
#include <limits.h>
#include <iomanip>
#include <string>



using namespace std;

int main()
{
	srand(unsigned(time(0)));

	// Завдання 1
	//const int YEARS = 10, MONTS = 12;
	//int m[YEARS][MONTS]{};
	//int sum[YEARS]{};
	//int max = 0, min = 0;
	//for (int i = 0; i < YEARS; i++)
	//{
	//	for (int j = 0; j < MONTS; j++)
	//	{
	//		cout << setw(4) << (m[i][j] = rand() % 10);
	//		sum[i] += m[i][j];
	//	}
	//	cout << endl;
	//	if (sum[max] < sum[i])
	//		max = i;
	//	if (sum[i] < sum[min])
	//		min = i;
	//}
	//cout << "\nTotal value for each year:\n";
	//for (int i = 0; i < YEARS; i++)
	//	cout << setw(4) << sum[i] << endl;
	//cout << "Min value - " << sum[min] << " in year " << min + 1 << endl;
	//cout << "Max value - " << sum[max] << " in year " << max + 1 << endl;


	//// Завдання 2
	//const int SIZE = 6;
	//int m[SIZE][SIZE]{};
	//int min;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	for (int j = 0; j < SIZE; j++)
	//	{
	//		cout << setw(3) << (m[i][j] = rand() % 10);
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//min = m[0][0];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << setw(3 * (SIZE - i)) << m[i][SIZE - 1 - i] << endl;
	//	if (m[i][SIZE - 1 - i] < min)
	//		min = m[i][SIZE - 1 - i];
	//}
	//cout << "Min = " << min << endl << endl;
	//
	//min = m[0][0];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	cout << setw(3 * (1 + i)) << m[i][i] << endl;
	//	if (m[i][i] < min)
	//		min = m[i][i];
	//}
	//cout << "Min = " << min << endl << endl;

	

	//// Завдання 3
	//const int SIZE = 6;
	//int m[SIZE][SIZE]{};
	//int min;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	for (int j = 0; j < SIZE; j++)
	//	{
	//		cout << setw(3) << (m[i][j] = rand() % 10);
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//// Варіант в
	//min = m[0][0];
	//for (int i = 0; i < SIZE / 2; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//		cout << setw(3) << ' ';
	//	for (int j = i; j < SIZE - i; j++)
	//	{
	//		cout << setw(3) << m[i][j];
	//		if (m[i][j] < min)
	//			min = m[i][j];
	//	}
	//	cout << endl;
	//}
	//cout << "Min = " << min << "\n\n";
	//// Варіант г
	//min = m[0][0];
	//for (int i = SIZE / 2; i < SIZE; i++)
	//{
	//	for (int j = 0; j < SIZE - 1 - i; j++)
	//		cout << setw(3) << ' ';
	//	for (int j = SIZE - 1 - i; j <= i; j++)
	//	{
	//		cout << setw(3) << m[i][j];
	//		if (m[i][j] < min)
	//			min = m[i][j];
	//	}
	//	cout << endl;
	//}
	//cout << "Min = " << min << "\n\n";
	//// Варіант д
	//min = m[0][0];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (i < SIZE / 2)
	//	{
	//		for (int j = 0; j < i; j++)
	//			cout << setw(3) << ' ';
	//		for (int j = i; j < SIZE - i; j++)
	//		{
	//			cout << setw(3) << m[i][j];
	//			if (m[i][j] < min)
	//				min = m[i][j];
	//		}
	//	}
	//	else 
	//	{
	//		for (int j = 0; j < SIZE - 1 - i; j++)
	//			cout << setw(3) << ' ';
	//		for (int j = SIZE - 1 - i; j <= i; j++)
	//		{
	//			cout << setw(3) << m[i][j];
	//			if (m[i][j] < min)
	//				min = m[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Min = " << min << "\n\n";
	//// Варіант е
	//min = m[0][0];
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (i < SIZE / 2)
	//	{
	//		for (int j = 0; j <= i; j++)
	//		{
	//			cout << setw(3) << m[i][j];
	//			if (m[i][j] < min)
	//				min = m[i][j];
	//		}
	//		for (int j = i + 1; j < SIZE - 1 - i; j++)
	//			cout << setw(3) << ' ';
	//		for (int j = SIZE - 1 - i; j < SIZE; j++)
	//		{
	//			cout << setw(3) << m[i][j];
	//			if (m[i][j] < min)
	//				min = m[i][j];
	//		}
	//	}
	//	else
	//	{
	//		for (int j = 0; j < SIZE - i; j++)
	//		{
	//			cout << setw(3) << m[i][j];
	//			if (m[i][j] < min)
	//				min = m[i][j];
	//		}
	//		for (int j = SIZE - i; j < i; j++)
	//			cout << setw(3) << ' ';
	//		for (int j = i; j < SIZE; j++)
	//		{
	//			cout << setw(3) << m[i][j];
	//			if (m[i][j] < min)
	//				min = m[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "Min = " << min << "\n\n";



	// Завдання 4б
	//const int SIZE = 4;
	//string teams[SIZE]{ "Dynamo", "Karpaty", "Veres", "Shakhtar" };
	//int scores[SIZE][SIZE]{};
	//bool false_input;
	//int goals, wins, loses, draws;
	//cout << "\t\t\tEnter the result of the game:\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		cout << teams[i] << " vs " << teams[j] << endl;
	//		do
	//		{
	//			false_input = 0;
	//			cin >> scores[i][j];
	//			if (cin.fail())
	//			{
	//				cin.clear();
	//				cin.ignore(32767, '\n');
	//				cout << "Oops, that input is invalid.  Please try again.\n";
	//				false_input = 1;
	//			}
	//			else
	//			{
	//				cin.ignore(32767, '\n');
	//			}
	//		} while (scores[i][j] < 0 || false_input);
	//		do
	//		{
	//			false_input = 0;
	//			cin >> scores[j][i];
	//			if (cin.fail())
	//			{
	//				cin.clear();
	//				cin.ignore(32767, '\n');
	//				cout << "Oops, that input is invalid.  Please try again.\n";
	//				false_input = 1;
	//			}
	//			else
	//			{
	//				cin.ignore(32767, '\n');
	//			}
	//		} while (scores[j][i] < 0 || false_input);
	//	}
	//}
	//cout << "\nTable of result:\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (!i)
	//	{
	//		cout << setw(10) << " > missed >";
	//		for (int k = 0; k < SIZE; k++)
	//			cout << setw(10) << teams[k];
	//		cout << endl << setw(10) << "| Scored: |\n";
	//	}
	//	for (int j = 0; j < SIZE; j++)
	//	{
	//		if (!j)
	//			cout << '|' << setw(9) << teams[i] << '|';
	//		cout << setw(10) << scores[i][j];
	//	}
	//	cout << "\n";
	//}
	//cout << endl;
	//for (int i = 0; i < SIZE; i++)
	//{
	//	wins = 0;
	//	loses = 0;
	//	draws = 0;
	//	goals = 0;
	//	cout << setw(10) << teams[i];
	//	for (int j = 0; j < SIZE; j++)
	//	{
	//		if (i == j)
	//			continue;
	//		goals += scores[i][j];
	//		if (scores[i][j] < scores[j][i])
	//			++loses;
	//		else if (scores[j][i] < scores[i][j])
	//			++wins;
	//		else if (scores[i][j] == scores[j][i])
	//			++draws;
	//	}
	//	cout << "scored " << goals << " goals. Wins - " << wins << ", loses - " << loses << ", draws - " << draws << "\n\n";
	//}
}