#include "29_DZ_Guess_the_word_H.h"
extern const char* question[levels];
extern const char* answer[levels];
void openCloseLetter(bool* boolAnswer, int sizeAnswer, bool Flag)
{
	for (size_t i = 0; i < sizeAnswer; i++)
		boolAnswer[i] = Flag;
}

void printAnswer(const char* realAnswer, const bool* boolAnswer)
{
	for (size_t i = 0; realAnswer[i] != '\0'; i++)
	{
		if (!boolAnswer[i])
			cout << fillChar;
		else
			cout << realAnswer[i];
	}
	cout << endl << endl;
}

void letterEnter(const char* realAnswer, bool* boolAnswer)
{
	char letterAns;
	cout << "Enter the letter - ";
	cin >> letterAns;
	for (size_t i = 0; realAnswer[i] != '\0'; i++)
	{
		if (tolower(realAnswer[i]) == tolower(letterAns))
			boolAnswer[i] = 1;
	}
	cin.clear();
	while (cin.get() != '\n')
		continue;
}

void wordEnter(const char* realAnswer, bool* boolAnswer)
{
	char wordAns[BUF]{};
	cout << "Enter the word - ";
	cin >> wordAns;
	if (strlen(wordAns) != strlen(realAnswer))
		cout << "Size in wrong!\n";
	else
	{
		bool right = 1;
		for (size_t i = 0; realAnswer[i] != '\0'; i++)
		{
			if (tolower(realAnswer[i]) != tolower(wordAns[i]))
			{
				right = 0;
				break;
			}
		}
		if (!right)
			cout << "Sorry, you miss\n";
		else if (right)
		{
			cout << "You right!\n";
			openCloseLetter(boolAnswer, strlen(realAnswer), true);
		}
	}
	system("PAUSE");
}

bool checkWin(const bool* boolAnswer, int sizeAnswer)
{
	bool winOrNo = 1;
	for (size_t i = 0; i < sizeAnswer; i++)
	{
		if (!boolAnswer[i])
		{
			winOrNo = 0;
			break;
		}
	}
	return winOrNo;
}