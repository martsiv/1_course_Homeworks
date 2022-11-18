// Група БД221.	Студент Марців М. П.
// Домашнє завдання 20.2
#include "20.2_DZ.h"

int main()
{
	const int dim1 = 2, dim2 = 3, dim3 = 3;
	int i_arr[dim1][dim2][dim3];
	char c_arr[dim1][dim2][dim3];
	string s_arr[dim1][dim2][dim3];
	
	cout << "Int array:\n";
	arrAdd<int, dim2, dim3>(i_arr, dim1);
	arrShow<int, dim2, dim3>(i_arr, dim1);
	cout << "Max element int = " << maxElement<int, dim2, dim3>(i_arr, dim1) << endl;
	cout << "All rows is sotred? " << boolalpha << if_rows_sort<int, dim2, dim3>(i_arr, dim1) << endl;
	
	cout << "Char array:\n";
	arrAdd<char, dim2, dim3>(c_arr, dim1);
	arrShow<char, dim2, dim3>(c_arr, dim1);
	cout << "Max element char = " << maxElement<char, dim2, dim3>(c_arr, dim1) << endl;
	cout << "All rows is sotred? " << boolalpha << if_rows_sort<char, dim2, dim3>(c_arr, dim1) << endl;
	
	cout << "String array:\n";
	arrAdd<string, dim2, dim3>(s_arr, dim1);
	arrShow<string, dim2, dim3>(s_arr, dim1);
	cout << "Max element string = " << maxElement<string, dim2, dim3>(s_arr, dim1) << endl;
	cout << "All rows is sotred? " << boolalpha << if_rows_sort<string, dim2, dim3>(s_arr, dim1) << endl;

}