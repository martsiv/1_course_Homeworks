#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//Завдання 1
	//const int BUF = 30;
	//char text[BUF]{};
	//char find[] = "aeoui";
	//cout << "Enter the string:";
	//cin >> text;
	//int counter = 0;
	//char* p_char = text;
	//while (p_char = strpbrk(p_char + 1, find))
	//{
	//	cout << "We find the char '" << p_char[0] << "' in index #" << p_char - text << endl;
	//	counter++;
	//}
	//cout << "Counter = " << counter << endl;
	
	////Завдання 2
	//const int BUF = 30;
	//char word[BUF]{};
	//char* text = nullptr;
	//char exitprog[] = "stop";
	//cout << "Enter your words or \"stop\" to exit: ";
	//while (cin >> word && !((strstr(word, exitprog)) && strlen(word) == 4))
	//{
	//	int len = strlen(word);
	//	if (word[0] == word[len - 1])
	//	{
	//		if (text == nullptr)
	//		{
	//			text = new char[len + 1];
	//			strcpy_s(text, len + 1, word);
	//		}
	//		else
	//		{
	//			int textlen = strlen(text) + 1;
	//			char* tmp = new char[textlen];
	//			strcpy_s(tmp, textlen, text);
	//			delete[] text;
	//			textlen = strlen(tmp) + strlen(word) + 2;
	//			text = new char[textlen];
	//			strcpy_s(text, textlen, tmp);
	//			delete[] tmp;
	//			strcat_s(text, textlen, " ");
	//			strcat_s(text, textlen, word);
	//		}
	//		cout << text << endl;
	//	}
	//}
	//delete[] text;

	////Завдання 3
	//const int BUF = 30;
	//char word[BUF]{};
	//char* text = nullptr;
	//char exitprog[] = "stop";
	//cout << "Enter a search phrase: ";
	//char searchword[BUF];
	//cin >> searchword;
	//cout << "Enter your words or \"stop\" to exit: ";
	//int counter = 0;
	//while (cin >> word && !((strstr(word, exitprog)) && strlen(word) == 4))
	//{
	//	counter++;
	//	int len = strlen(word);
	//	if (strstr(word, searchword))
	//	{
	//		if (text == nullptr)
	//		{
	//			text = new char[len + 1];
	//			strcpy_s(text, len + 1, word);
	//		}
	//		else
	//		{
	//			int textlen = strlen(text) + 1;
	//			char* tmp = new char[textlen];
	//			strcpy_s(tmp, textlen, text);
	//			delete[] text;
	//			textlen = strlen(tmp) + strlen(word) + 2;
	//			text = new char[textlen];
	//			strcpy_s(text, textlen, tmp);
	//			delete[] tmp;
	//			strcat_s(text, textlen, " ");
	//			strcat_s(text, textlen, word);
	//		}
	//	}
	//}
	//cout << text << endl;
	//delete[] text;


	////Завдання 4
	//const int BUF = 20;
	//char text[] = "This should not be confused with the size of the array that holds the string";
	//cout << "Enter a search phrase: ";
	//char word[BUF];
	//cin >> word;
	//char* searchword = text;
	//while (searchword = strstr(searchword + 1, word))
	//{
	//	char tmp[BUF]{};
	//	strcpy_s(tmp, word);
	//	_strupr_s(tmp);
	//	int len = strlen(tmp);
	//	strncpy(searchword, tmp, len);
	//}
	//cout << text << endl;

}

