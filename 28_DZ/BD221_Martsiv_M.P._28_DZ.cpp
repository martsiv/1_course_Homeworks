#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;

int stringLen(const  char* str);
void concatStr(char* s1, int size1, const char* s2);
void deleteNO(char* str, int SIZE);
char* copmare2words(char* str1, char* str2);
char* copmare3words(char* str1, char* str2, char* str3);
void copmareArrayOfWords(char** strArr, int size, int& indexMaxOut, int& indexMinOut);
int comparingTwoStrings(const char* s1, const char* s2);
void removeStr(char* str, int index, int len);
char* insertStr(const char* str, const  char* ins, int index);
int main()
{
	const int SIZE = 30;
	char str1[SIZE];
	char str2[SIZE] = "Hello ";
	char str3[SIZE];
	int index;

	//Завдання 1
	cout << "\tEnter the line to concat:\n";
	cin.getline(str1, SIZE);
	concatStr(str2, SIZE, str1);
	cout << str2 << endl;
	//Завдання 2
	cout << "\n\tEnter the new line to delete (No/no):\n";
	cin.getline(str1, SIZE);
	deleteNO(str1, SIZE);
	cout << str1 << endl;
	//Завдання 3
	cout << "\n\tEnter two words to compare:\n";
	cin >> str1 >> str2;
	cin.get();
	if (!copmare2words(str1, str2))
		cout << "The two words are the same\n";
	else
		cout << copmare2words(str1, str2) << " is bigger!\n";
	//Завдання 4
	cout << "\n\tEnter three words to compare:\n";
	cin >> str1 >> str2 >> str3;
	cin.get();
	if (!copmare3words(str1, str2, str3))
		cout << "The three words are the same\n";
	else
		cout << copmare3words(str1, str2, str3) << " is bigger!\n";
	//Завдання 5
	cout << "\n\tSpecify the number of words to compare \n";
	int numWords;
	while (!(cin >> numWords) || numWords <= 0)
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	char** strArr = new char* [numWords];
	for (int i = 0; i < numWords; i++)
	{
		strArr[i] = new char[SIZE];
		cout << "Enter the " << i + 1 << " word -\t";
		cin >> strArr[i];
	}
	cin.get();
	int indexMax, indexMin;
	copmareArrayOfWords(strArr, numWords, indexMax, indexMin);
	cout << "The longest word - " << strArr[indexMax] << endl;
	cout << "The shortest word - " << strArr[indexMin] << endl;
	for (int i = 0; i < numWords; i++)
		delete[] strArr[i];
	delete[] strArr;
	//Завдання 6
	cout << "\n\tComparing two strings\n";
	cout << "Enter the first line:\n";
	cin.getline(str1, SIZE);
	cout << "Enter the second line:\n";
	cin.getline(str2, SIZE);
	int result = comparingTwoStrings(str1, str2);
	if (!result)
		cout << "Two line is similar\n";
	else if (result < 0)
		cout << "The first line is less than the second\n";
	else if (0 < result)
		cout << "The second line is less than the first\n";
	//Завдання 7
	 int len;
	cout << "\n\tA function for removing from a string a fragment of a certain length from a certain position.\n";
	cout << "Enter the string\n";
	cin.getline(str1, SIZE);
	cout << "Enter the index - ";
	cin >> index;
	cout << "Enter the length - ";
	cin >> len;
	cin.get();
	removeStr(str1, index, len);
	cout << "New line - \"" << str1 << "\"\n";
	//Завдання 8
	cout << "\n\tA function for inserting characters from another line into a line from a certain position.\n";
	cout << "Enter the first line\n";
	cin.getline(str1, SIZE);
	cout << "Enter the second line\n";
	cin.getline(str2, SIZE);
	cout << "Enter the index - ";
	cin >> index;
	char * newstr = insertStr(str1, str2, index);
	cout << "New line - \"" << newstr << "\"\n";
	delete[] newstr;
}

int stringLen(const  char* str)
{
	int counter = 0;
	while (str[counter] != '\0')
		counter++;
	return counter;
}
void concatStr(char* s1, int size1, const char* s2)
{
	int length = stringLen(s1);
	int i = length;
	for (int j = 0; i < size1 - 1 && s2[j] != '\0'; i++, j++)
		s1[i] = s2[j];
	s1[i] = '\0';
}
void deleteNO(char* str, int SIZE)
{
	for (int i = 0; i < SIZE - 1;)
	{
		if ((str[i] == 'N' || str[i] == 'n') && str[i + 1] == 'o')
			strcpy(str + i, str + i + 2);
		else
			i++;
	}
}
char* copmare2words(char* str1, char* str2)
{
	int result = stricmp(str1, str2);
	if (result < 0)
		return str2;
	else if (0 < result)
		return str1;
	else
		return nullptr;
}

char* copmare3words(char* str1, char* str2, char* str3)
{
	if (copmare2words(str1, str2))
		return copmare2words(copmare2words(str1, str2), str3);
	return copmare2words(str1, str3);
}
void copmareArrayOfWords(char** strArr, int size, int& indexMaxOut, int& indexMinOut)
{
	indexMaxOut = 0;
	indexMinOut = 0;
	for (int i = 1; i < size; i++)
	{
		if (strlen(strArr[indexMaxOut]) < strlen(strArr[i]))
			indexMaxOut = i;
		if (strlen(strArr[i]) < strlen(strArr[indexMinOut]))
			indexMinOut = i;
	}
}
int comparingTwoStrings(const char* s1, const char* s2)
{
	for (int i = 0; true; i++)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return 0;
		if (s1[i] != '\0' && s2[i] == '\0')
			return 1;
		if (s1[i] == '\0' && s2[i] != '\0')
			return -1;
		if (s2[i] < s1[i])
			return 1;
		if (s1[i] < s2[i])
			return -1;
	}
}

void removeStr(char* str, int index, int len)
{
	if ((strlen(str) < (index + len)) || index < 0 || len < 0)
	{
		cout << "Invalid parameters\n";
		return;
	}
	int i = index;
	for (; str[i + len] != '\0'; i++)
		str[i] = str[len + i];
	str[i] = '\0';
}
char* insertStr(const char* str, const  char* ins, int index) 
{
	int lenStr1 = strlen(str);
	int lenStr2 = strlen(ins);
	char* tmp = new char[lenStr1 + lenStr1 + 1];
	strcpy(tmp, str);
	strcpy(tmp + index, ins);
	strcpy(tmp + index + lenStr2, str + index);
	return tmp;
}