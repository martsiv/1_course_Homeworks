#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>

using namespace std;

//Завдання 1
//double power(double x, int n)
//{
//	if (!x && n < 0)
//	{
//		cout << "Invalid value!!!\n";
//		exit(1);
//	}
//	else if ((x == 1) || (!n))
//		return 1;
//	else if (n == 1)
//		return x;
//	else if (n == -1)
//		return 1 / x;
//	else if (0 < n)
//		return power(x, (n - 1))  * x;
//	else if (n < 0)
//		return 1 / power(x, -n);
//}
//int main()
//{
//	cout << power(3.5, -3);
//}

//Завдання 2
//unsigned int fib(unsigned number)
//{
//	if (!number)
//		return 0;
//	else if (number == 1)
//		return 1;
//	else
//		return fib(number - 1) + fib(number - 2);
//}
//int main()
//{
//	cout << fib(9);
//}

//Завдання 3.1
//template<typename T>
//T* maxElement(T* first, T* last)
//{
//	T* tmp;
//	if (*first == *last)
//		return last;
//	else
//		return  *(tmp = maxElement(first + 1, last)) < *first ? first : tmp;
//}
//int main()
//{
//	const int SIZE = 6;
//	int arr[SIZE] = { 13, -18, 8, 3, 7, 9 };
//	int* res = maxElement(arr, arr + SIZE - 1);
//	cout << *res << endl;
//
//	char c_arr[SIZE] = { 'f', 'Y', '7', 'a', 'T', 'n'};
//	char* c_res = maxElement(c_arr, c_arr + SIZE - 1);
//	cout << *c_res << endl;
//}

//Завдання 3.2
//template<typename T>
//bool ifSort(T* first, T* last)
//{
//	if (first + 1 == last)
//		return *first <= *last ? true : false;
//	return ifSort(first + 1, last) ? (*first <= *(first + 1)) : false;
//}
//int main()
//{
//	const int SIZE = 6;
//	int arr[SIZE] = { -19, -18, -1, 3, 7, 9 };
//	bool res = ifSort(arr, arr + SIZE - 1);
//	cout << boolalpha <<  res << endl;
//
//	char c_arr[SIZE] = { 'A', 'Y', 'Z', 'a', 'b', 'n'};
//	bool c_res = ifSort(c_arr, c_arr + SIZE - 1);
//	cout << boolalpha << c_res << endl;
//}

//Завдання 3.3
//template<typename T>
//void reflectArr(T arr[], int indexFirst, int indexLast)
//{
//	if (indexLast <= indexFirst)
//		return;
//	T tmp = arr[indexFirst];
//	arr[indexFirst] = arr[indexLast];
//	arr[indexLast] = tmp;
//	reflectArr(arr, indexFirst + 1, indexLast - 1);
//}
//template<typename T>
//void showArr(T arr[], int SIZE)
//{
//	for (int i = 0; i < SIZE; i++)
//		cout << '\t' << arr[i];
//	cout << endl;
//}
//int main()
//{
//	const int SIZE = 6;
//	int arr[SIZE] = { -19, -18, -1, 3, 7, 9 };
//	showArr(arr, SIZE);
//	reflectArr(arr, 0, SIZE - 1);
//	showArr(arr, SIZE);
//
//	char c_arr[SIZE] = { 'A', 'Y', 'Z', 'a', 'b', 'n'};
//	showArr(c_arr, SIZE);
//	reflectArr(c_arr, 0, SIZE - 1);
//	showArr(c_arr, SIZE);
//}




