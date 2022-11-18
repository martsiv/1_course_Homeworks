#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <limits.h>
#include <Windows.h>

using namespace std;

void main()
{

	// Задача 1
	/*cout << "\n" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	cout << (char)186 << "\t" << "Season" << "\t\t\t" << (char)186 << endl;
	cout << (char)204 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)203 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)185 << endl;
	cout << (char)186 << " Winter " << (char)186 << " Spring " << (char)186 << "Summer" << (char)186 << "Autumn" << (char)186 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;*/


	// Задача 2
	//SetConsoleCP(866);
	//cout << char(131) << char(165) << char(224) << char(174) << char(239) << char(172) << " " << char(145) << char(171) << char(160) << char(162) << char(160) << char(33) << endl;


	// Задача 3
	//int a = 5, b = 10;
	//int result1 = b + ++b - 8 - --a;
	////			 11 +  11 - 8 -   4
	////  a = 4, b = 11
	//int result2 = b++ % a - --a + 1;
	////			 10   % 4 -   4 + 1
	//// a = 4, b = 11
	//int result3 = b + ++a - b-- / (a += 2);
	////			 10 +   8 - 10  / (8)
	//// a = 8, b = 9


	// Задача 4
	//int a = 5, b = 10;
	
	//int result1 = (b += 2)++ % a - --a + a;
	//             12        % 4 -   4 + 4
	// a = 4, b = 13
	//cout << "a = " << a << "\nb= " << b << "\n" << result1 << endl;
	
	//int result2 = ++(b += 2) % a - --(a += 1);
	//              13       % 5 -    5 
	// a = 5, b = 13
	//cout << "a = " << a << "\nb= " << b << "\n" << result2 << endl;
	
	//int result3 = ++(b += 2) % a - --(a = +1);
	//               13      % 0 -     0
	// a = 0, b = 13
	//cout << "a = " << a << "\nb= " << b << "\n" << result3 << endl;
	
	//int result4 = ++(b += 2) % a - --(a + 1); // EROR: expression must be a modifiable lvalue
	//               13      % 5 -      5 */ 
	// a = 5, b = 13
	//cout << "a = " << a << "\nb= " << b << "\n" << result4 << endl;


	//Задача 5
	//int number1, number2, summ;
	//cout << "Enter first number(a): \n";
	//cin >> number1;
	//cout << "Enter secondary number(b): \n";
	//cin >> number2;
	// summ = number1 + number2;
	//bool result = summ % 2 == 0;
	//cout << "The sum of the numbers is even - " << boolalpha << result << endl;


	//Задача 6
	//unsigned int number;
	//cout << "Enter the number:\n";
	//cin >> number;
	//bool result = number < 10 && number >= 0;
	//cout << "Your number is a one-digit number - " << boolalpha << result << endl;


	//Задача 7
	//int year;
	//cout << "Enter a year: \n";
	//cin >> year;
	//bool result = (year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
	//cout << "In " << year << " = " << 365 + result << " days.\n";



 
}