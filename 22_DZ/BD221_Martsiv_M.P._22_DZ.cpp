#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>

using namespace std;

//Завдання 1
//int main()
//{
//	int n1, n2, n3, tmp;
//	cout << "Enter 3 numbers (n1, n2, n3): ";
//	cin >> n1 >> n2 >> n3;
//	const int SIZE = 3;
//	int** ptr = new int*[SIZE];
//	ptr[0] = &n1;
//	ptr[1] = &n2;
//	ptr[2] = &n3;
//	bool swapped;
//	int counter = 0;
//	do
//	{
//		swapped = 0;
//		for (int j = 0; j < SIZE - 1 - counter; j++)
//		{
//			if (*ptr[j + 1] < *ptr[j])
//			{
//				swapped = 1;
//				tmp = *ptr[j];
//				*ptr[j] = *ptr[j + 1];
//				*ptr[j + 1] = tmp;
//			}
//		}
//		counter++;
//	} while (swapped);
//	for (int i = 0; i < SIZE; i++)
//		cout << *ptr[i] << ' ';
//	cout << endl;
//	delete[] ptr;
//}

//Завдання 2
//template <typename T>
//void enterArr(T* left, T* right);
//template <typename T>
//void showArr(T* left, T* right);
//template <typename T>
//void reverse(T* left, T* right);
//
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE]{};
//	enterArr(arr, arr + SIZE - 1);
//	showArr(arr, arr + SIZE - 1);
//	reverse(arr, arr + SIZE - 1);
//	showArr(arr, arr + SIZE - 1);
//}
//template <typename T>
//void enterArr(T* left, T* right)
//{
//	srand(unsigned(time(0)));
//	for (;left < right; left++)
//		*left = rand() % 10;
//}
//template <typename T>
//void showArr(T* left, T* right)
//{
//	for (;left <= right; left++)
//		cout << setw(4) << *left;
//	cout << endl;
//}
//template <typename T>
//void reverse(T* left, T* right)
//{
//	for (;left <= right; left++, right--)
//	{
//		T tmp = *left;
//		*left = *right;
//		*right = tmp;
//	}
//}


//Завдання 3
//int main()
//{
//	srand(unsigned(time(0)));
//	const int SIZE = 8;
//	int arr[SIZE]{};
//	int arr2[SIZE];
//	cout << "Array # 1:\n";
//	for (int* i = arr, *j = arr2 + SIZE - 1; i < arr + SIZE; i++, j--)
//	{
//		*i = rand() % 10;
//		cout << setw(3) << *i;
//		*j = *i;
//	}
//	cout << endl << "Array # 2:\n";
//	int* p_arr2 = arr2;
//	while (p_arr2 < arr2 + SIZE)
//	{
//		cout << setw(3) << *p_arr2;
//		p_arr2++;
//	}
//}


//Завдання 4
//template <typename T>
//T maxInRange(const T* left, const T* right)
//{
//	T max = *left;
//	while (left <= right)
//	{
//		if (max < *left)
//			max = *left;
//		left++;
//	}
//	return max;
//}
//int main()
//{
//	const int SIZE = 10;
//	int arr[SIZE] = { 2, 9, 2, 5, 4, 6, 1, 4, 7, 3 };
//	cout << "Max in all: " << maxInRange(&arr[0], &arr[SIZE - 1]) << endl;
//	cout << "Max in left: " << maxInRange(&arr[0], &arr[SIZE / 2 - 1]) << endl;
//	cout << "Max in right: " << maxInRange(&arr[SIZE / 2], &arr[SIZE - 1]) << endl;
//	cout << "Max in random: " << maxInRange(&arr[2], &arr[SIZE - 3]) << endl;
//}