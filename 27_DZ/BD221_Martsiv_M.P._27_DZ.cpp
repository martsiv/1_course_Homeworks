#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>

using namespace std;

void howManyLetters(const char* str, size_t size, int& countAllOut, int& countUpOut, int& countDownOut);
void replaceSymbol(char* str, size_t size);
int wordsCounter(char* str, size_t size);
int stringLen(const  char* str);
bool palindrom(const char* str, int size);
int stringToNumber(char* str);

int main()
{
	const int SIZE = 20;
	char str[SIZE];
	cout << "Enter the line - ";
	cin.getline(str, SIZE);
	//Завдання 1
	int allchar, upchar, lowchar;
	howManyLetters(str, SIZE, allchar, upchar, lowchar);
	cout << "All letters = " << allchar << endl;
	cout << "All upper letters = " << upchar << endl;
	cout << "All lower letters = " << lowchar << endl;
	//Завдання 2
	replaceSymbol(str, SIZE);
	cout << "After replacing spaces with tabs:\n";
	cout << str << endl;
	//Завдання 3
	cout << "Words in a line = " << wordsCounter(str, SIZE) << endl;
	//Завдання 4
	cout << "StringLen " << stringLen(str) << endl;
	//Завдання 5, 6
	cout << "Is it palindrom? " << palindrom(str, SIZE) << endl;
	//Завдання 7
	cout << "Enter a string to convert it to a number:\n";
	cin.getline(str, SIZE);
	cout << "The number in the line is equal " << stringToNumber(str) << endl;

}

void howManyLetters(const char* str, size_t size, int& countAllOut, int& countUpOut, int& countLowOut)
{
	countAllOut = 0;
	countUpOut = 0;
	countLowOut = 0;
	for (size_t i = 0; str[i] != '\0' && i < size; i++)
	{
		if (isalpha(str[i]))
		{
			countAllOut++;
			if (isupper(str[i]))
				countUpOut++;
			else if (islower(str[i]))
				countLowOut++;
		}
	}
}

void replaceSymbol(char* str, size_t size)
{
	for (size_t i = 0; str[i] != '\0' && i < size; i++)
	{
		if (str[i] == ' ')
			str[i] = '\t';
	}
}

int wordsCounter(char* str, size_t size)
{
	int count = 0;
	bool word = 0;
	for (size_t i = 0; str[i] != '\0' && i < size - 1; i++)
	{
		if (!word && isalpha(str[i]))
			word = 1;
		if ((str[i] == ' ' || str[i + 1] == '\0') && word)
		{
			count++;
			word = 0;
		}
	}
	return count;
}

int stringLen(const  char* str)
{
	int counter = 0;
	while (str[counter] != '\0')
		counter++;
	return counter;
}

bool palindrom(const char* str, int size)
{
	//Встановлюємо початкові точки пошуку. Права границя лівіше нульового символу
	int i = 0;
	int j = size - 1;
	while (str[j] != '\0')
		j--;
	j--;
	//Якщо це лише один символ, то це не паліндром
	if (j <= i)
		return 0;
	//Шукаємо символ з початку і символ з кінця і порівнюємо їх, не залежно від регістру
	//Так йдемо, доки границі пошуку не перетнуться
	while (i < j)
	{
		while (!isalpha(str[i]))
			i++;
		while (!isalpha(str[j]))
			j--;
		if (tolower(str[i]) != tolower(str[j]))
			return 0;
		i++;
		j--;
	}
	return 1;
}

int stringToNumber(char* str)
{
	int digit = 0;
	char* tmp = new char[stringLen(str)];
	int counter = 0;
	bool minus = 0;
	for (size_t i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '.' || str[i] == ',' || (!counter && !isdigit(str[i]) && str[i] != '-' && str[i] != '+' && str[i] != ' '))				//в нас формат цілого, після дробового знаку немає сенсу перевіряти далі
			break;
		else if (!counter && str[i] == '-' && !minus)	//флаг мінусового, але якщо знаходить повторно або посередині числа, то не ставиться
			minus = 1;
		else if (isdigit(str[i]))
		{
			tmp[counter] = str[i];
			counter++;
		}
	}
	for (size_t i = 0; i < counter; i++)
		digit += (tmp[i] - 48) * pow(10, counter - 1 - i);
	if (minus)
		digit *= -1;
	delete[] tmp;
	return digit;
}