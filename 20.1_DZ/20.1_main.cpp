// Група БД221.	Студент Марців М. П.
// Домашнє завдання 20.1
#include "20.1_DZ.h"

int main()
{
	const int SIZE = 8;
	int i_arr[SIZE]{};
	double d_arr[SIZE]{};
	char c_arr[SIZE]{};
	add_arr(c_arr, SIZE);
	show_arr(c_arr, SIZE);
	cout << "The index of the first occurrence of the element in the array 7:\n";
	cout << find_first_enter_position(c_arr, SIZE, 'P') << endl;
	cout << "The index of the last occurrence of the element in the array 7:\n";
	cout << find_last_enter_position(c_arr, SIZE, 'p') << endl;
	cout << "Mixed array:\n";
	mix_arr(c_arr, SIZE);
	show_arr(c_arr, SIZE);
	cout << "Up sort array:\n";
	up_sort(c_arr, SIZE);
	show_arr(c_arr, SIZE);
	cout << "Down sort array:\n";
	down_sort(c_arr, SIZE);
	show_arr(c_arr, SIZE);
	cout << "Fill 1 symbol:\n";
	add_one_symbol_arr(c_arr, SIZE, 'P');
	show_arr(c_arr, SIZE);
}