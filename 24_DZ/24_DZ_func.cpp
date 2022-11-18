#include "24_DZ.h"

int* createArray(int size)
{
	int* arr = new int[size];
	return arr;
}

void fillRandArray(int* arr, int size)
{
	static bool firsttime = 0;
	if (!firsttime)
	{
		srand(unsigned(time(0)));
		firsttime = 1;
	}
	for (int i = 0; i < size; i++)
		arr[i] = -10 + rand() % 20;
}

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(3) << arr[i];
	cout << endl;
}

int sizeVerification()
{
	int SIZE;
	cout << "Enter the size of array: ";
	while (!(cin >> SIZE) || SIZE <= 0)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
		cout << "Enter correct size: ";
	}
	return SIZE;
}

int* addToArray(int value, int* arr, int& size)
{
	size += 1;
	int* arr2 = new int[size];
	for (int i = 0; i < size - 1; i++)
		arr2[i] = arr[i];
	arr2[size - 1] = value;
	delete[] arr;
	return arr2;
}

void deleteElementArray(int*& arr, int& size, int index) //вилучення елемента за індексом
{
	size--;
	int count = 0;
	int* arr2 = new int[size];
	for (int i = 0; i < size + 1 && count < size; i++)
	{
		if (i != index)
		{
			arr2[count] = arr[i];
			count++;
		}
	}
	delete[] arr;
	arr = arr2;
}

void addToArrayByIndex(int*& arr, int& size, int index, int value) //додавання елемента за індексом
{
	size++;
	int count = 0;
	int* arr2 = new int[size];
	for (int i = 0; i < size - 1; i++)
	{
		if (i == index)
			count++;
		arr2[count] = arr[i];
		count++;

	}
	arr2[index] = value;
	delete[] arr;
	arr = arr2;
}

template <typename T>
int howMuchMoreOrLessThan(const T arr[], int size, bool moreLess, T thanN = 0)
{
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (moreLess && thanN < arr[i])			//якщо значення true, то перевірка скільки елементів більше значення thanN
			counter++;
		else if (!moreLess && arr[i] < thanN)	//якщо значення false, то перевірка скільки елементів менше значення thanN
			counter++;
	}
	return counter;
}

void changeToPositive(int*& arr, int& sizeOld) //вилучення від'ємних
{
	int sizeNew = howMuchMoreOrLessThan(arr, sizeOld, true, 0);
	int* arr2 = new int[sizeNew];
	for (int i = 0, j = 0; i < sizeOld && j < sizeNew; i++)
	{
		if (arr[i] <= 0)
			continue;
		arr2[j] = arr[i];
		j++;
	}
	sizeOld = sizeNew;
	delete[] arr;
	arr = arr2;
}

void addBlock(int*& arr, int& sizeOld, const int* block, int length)
{
	int sizeNew = sizeOld + length;
	int* arr2 = new int[sizeNew];
	for (int i = 0, j = 0; i < sizeNew; i++)
	{
		if (i < sizeOld)
			arr2[i] = arr[i];
		else
		{
			arr2[i] = block[j];
			j++;
		}
	}
	sizeOld = sizeNew;
	delete[] arr;
	arr = arr2;
}

void removeBlock(int*& arr, int& sizeOld, int index, int length)
{
	int sizeNew = sizeOld - length;
	int* arr2 = new int[sizeNew];
	bool check = 0;
	for (int i = 0, j = 0; i < sizeOld; i++)
	{
		if (!check && i == index)		//коли натрапило на індекс, з якого треба видаляти блок
			check = 1;					//то виставляємо прапорець.
		if (check && j == length)		//якщо дійшли до кінця блоку, 
			check = 0;					//то прапорець знімаємо
		else if (check)					//доки прапорець активний, скіпаємо ці елементи
		{
			j++;
			continue;
		}
		arr2[i - j] = arr[i];			//в новий масив додаємо елементи, поза блоком
	}
	sizeOld = sizeNew;					//оновлюємо значення розміру масиву
	delete[] arr;						//замінюємо масив
	arr = arr2;
}

bool elementsRepeatToDelete(const int* arr, int length, int val) // перевіряє чи раніше в масиві були такі значення
{
	for (int i = 0; i < length; i++)
		if (val == arr[i])
			return true;
	return false;
}

int* intersect(const int* a, int sizeA, const int* b, int sizeB, int& size)
{
	size = 0;
	int* tmp = new int[size];			//загальний масив, який поміщає в собі всі елементи
	addBlock(tmp, size, a, sizeA);		//скористався функцією з попередніх завдань
	addBlock(tmp, size, b, sizeB);
	int counter = 0;
	for (int i = 0; i < size; i++)		//зміщую вліво всі елементи, що не повторюються. Та визначаю їх кількість (розмір нового масиву)
	{
		if (!elementsRepeatToDelete(tmp, i, tmp[i]))
		{
			tmp[counter] = tmp[i];
			counter++;
		}
	}
	size = counter;						//перевизначаю розмір для нового масиву

	int* c = new int[size];				//створюю новий масив
	for (int i = 0; i < size; i++)		//та ініціалізую його з тимчасового
		c[i] = tmp[i];

	delete[] tmp;						//Тимчасовий масив видаляю
	return c;							//А новий повертаю
}