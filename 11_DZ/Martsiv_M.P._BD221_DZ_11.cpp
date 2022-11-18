#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cctype>
#include <ctime> 
#include <iomanip> 



using namespace std;

int main()

{
	// Завдання 1 
	//const int arr_size = 5;
	//int A[arr_size];
	//int B[arr_size];

	//for (int i = 0; i < arr_size; i++)
	//{
	//	cout << "Enter " << i + 1 << " array element ";
	//	cin >> A[i];
	//}
	//for (int i = 0; i < arr_size; i++)
	//	B[i] = A[i];
	//cout << "Elements of array B - ";
	//for (int i = 0; i < arr_size; i++)
	//	cout << B[i] << " ";



	//// Завдання 2 
	//const int arr_size = 5;
	//int A[arr_size];
	//int B[arr_size];

	//for (int i = 0; i < arr_size; i++)
	//{
	//	cout << "Enter " << i + 1 << " array element ";
	//	cin >> A[i];
	//}
	//for (int i = 0, j = arr_size - 1; i < arr_size; i++, j--)
	//	B[i] = A[j];
	//
	//cout << "\tIndex\tArray A\tArray B\n";

	//for (int i = 0; i < arr_size; i++)
	//	cout << "\t" << i << "\t" << A[i] << "\t" << B[i] << endl;



	//// Завдання 3
	//srand(unsigned(time(0)));
	//
	//const int arr_size = 5;
	//int A[arr_size] = {};
	//int B[arr_size] = {};
	//int C[arr_size] = {};
	//int did_guess = 0;

	//for (int i = 0; i < arr_size; i++)
	//{
	//	A[i] = rand() % 10;
	//}
	//cout << "This is a Lottery program!\n";
	//cout << "Try to guess 5 digits from 0 to 9\n";
	//for (int i = 0; i < arr_size; i++)
	//{
	//	cout << "Enter " << i + 1 << " digit ";
	//	cin >> B[i];
	//}
	//for (int i = 0; i < arr_size; i++)
	//{
	//	if (A[i] == B[i])
	//	{
	//		C[i] = i;
	//		did_guess += 1;
	//	}
	//}

	//if (did_guess == 5)
	//	cout << "You win, all the numbers match!!!\n";

	//else if (did_guess > 0)
	//{
	//	cout << "You guessed the number(s) (Counting from 0) - ";
	//	for (int i = 0; i < arr_size; i++)
	//	{
	//		if (C[i] == 0)
	//			continue;
	//		cout << C[i] << " ";
	//	}
	//}
	//else
	//	cout << "You didn't guess any numbers(\n";


	//// Завдання 4
	//const int arr_size = 10;
	//const float scholarship_score = 10.7;
	//enum class menu {show_grades = 1, exam_retaking, scholarship, exit};
	//int GRADES[arr_size] = {};
	//float GPA = 0;
	//int choice_menu;
	//bool if_exit = 0;
	//cout << "You need to enter the student's grades (1 - 10)\n";
	//for (int i = 0; i < arr_size; i++)
	//{
	//	cout << "Enter " << i + 1 << "grade ";
	//	do
	//	{
	//		cin >> GRADES[i];
	//	} while (GRADES[i] < 1 || GRADES[i] > 10);
	//}
	//system("PAUSE");
	//system("cls");

	//while (true)
	//{
	//	cout << "\nYou can:\n1 - Show all your grades. \n2 - Retaking the exam \n3 - Find out if there will be a scholarship \n4 - Exit\nMy choise - ";
	//	cin >> choice_menu;
	//	switch (menu(choice_menu))
	//	{
	//	case menu::show_grades:
	//		cout << "\nYour grades:\n";
	//		for (int i = 0; i < arr_size; i++)
	//			cout << i + 1 << " - " << GRADES[i] << endl;
	//		system("PAUSE");
	//		break;
	//	case menu::exam_retaking:
	//		cout << "\nYou need to enter new student's grades\n";

	//		while (true)
	//		{
	//			cout << "Enter the number of the element to be changed (1-10): ";
	//			int number_to_change;
	//			do
	//				cin >> number_to_change;
	//			while (number_to_change < 1 || number_to_change > 10);
	//			cout << "Enter new grade: ";
	//			cin >> GRADES[number_to_change - 1];
	//			char choise;
	//			do
	//			{
	//				cout << "Would you like to change another rating? (y, n)\n";
	//				cin >> choise;
	//				char choise;
	//			} while (choise != 'y' && choise != 'Y' && choise != 'n' && choise != 'N');
	//			if (choise == 'N' || choise == 'n')
	//				break;
	//		}
	//		break;
	//	case menu::scholarship:
	//		for (int i = 0; i < arr_size; i++)
	//			GPA += GRADES[i];
	//		GPA /= arr_size;
	//		cout << "\nTo receive a scholarship, you must have an average score of " << scholarship_score << " or higher\n";
	//		if (GPA >= scholarship_score)
	//		{
	//			cout << "Your GPA is equal to " << GPA << endl;
	//			cout << "You will receive a scholarship\n";
	//		}
	//		else
	//		{
	//			cout << "Your GPA is equal to " << GPA << endl;
	//			cout << "You will not receive a scholarship\n";
	//		}
	//		system("PAUSE>nul");
	//		break;
	//	case menu::exit:
	//		if_exit = 1;
	//		cout << "Goodbye!\n";
	//		break;
	//	default:
	//		cout << "\nNot correct value.\n";
	//		break;
	//	}
	//	if (if_exit == true)
	//		break;
	//}

	//// Завдання 5
	//const int arr_size = 12;
	//int PROFIT[arr_size] = {};
	//int left_value, right_value, max_month_profit, min_month_profit, min_month_index, max_month_index;
	//cout << "You need to enter the company's profit for 12 months.\n";
	//for (int i = 0; i < arr_size; i++)
	//{
	//	cout << "Enter profit for " << i + 1 << " month - ";
	//	cin >> PROFIT[i];
	//}
	//cout << "\nThis program will calculate the minimum and maximum value of profit for the selected period.\n";
	//cout << "Please enter the beginning of the period - ";
	//do
	//{
	//	cin >> left_value;
	//} while (left_value < 1 || left_value > 12);
	//cout << "Please enter the end of the period - ";
	//do
	//{
	//	cin >> right_value;
	//} while (right_value < 1 || right_value > 12);
	//if (right_value < left_value)
	//{
	//	int tmp = left_value;
	//	left_value = right_value;
	//	right_value = tmp;
	//}
	//min_month_profit = PROFIT[left_value - 1];
	//max_month_profit = PROFIT[left_value - 1];
	//min_month_index = left_value - 1;
	//max_month_index = left_value - 1;

	//for (int i = left_value - 1; i <= right_value - 1; i++)
	//{
	//	if (min_month_profit > PROFIT[i])
	//	{
	//		min_month_profit = PROFIT[i];
	//		min_month_index = i;
	//	}
	//	if (max_month_profit < PROFIT[i])
	//	{
	//		max_month_profit = PROFIT[i];
	//		max_month_index = i;
	//	}
	//}
	//cout << "\nIn the selected range\n";
	//cout << "the lowest profit was in " << min_month_index + 1 << " months\n";
	//cout << "the largest profit was in " << max_month_index + 1 << " months.\n";

}