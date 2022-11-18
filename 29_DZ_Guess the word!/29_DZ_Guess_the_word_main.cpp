#include "29_DZ_Guess_the_word_H.h"
int main()
{
	const char* question[levels] =
	{
		"City in Ukraine",
		"Country in Europa",
		"Music genre",
		"President of the United States",
		"African animal"
	};
	const char* answer[levels] =
	{
		"Dnipro",
		"Italia",
		"Funk",
		"Obama",
		"Elephant"
	};
	cout << "\t\tGeuss the word!\n";
	int sizeAnswer;
	bool* boolAnswer;
	bool quit = 0;
	for (size_t i = 0; i < levels && !quit; i++)
	{
		cout << "There are a total of " << levels << " rounds in the game. You are in round " << i + 1 << ".\n";
		bool winLevel = 0;
		sizeAnswer = strlen(answer[i]);
		boolAnswer = new bool[sizeAnswer];
		openCloseLetter(boolAnswer, sizeAnswer, 0);

		while (!checkWin(boolAnswer, sizeAnswer) && !quit)
		{
			
			cout << question[i] << " - ";
			printAnswer(answer[i], boolAnswer);
			cout << "Guess all word or one letter.\nPress \'w\' or \'l\' (q - to quit):\t";
			char choise;
			cin >> choise;
			cin.clear();
			while (cin.get() != '\n')
				continue;
			if (choise == 'l' || choise == 'L')
				letterEnter(answer[i], boolAnswer);
			else if (choise == 'w' || choise == 'W')
				wordEnter(answer[i], boolAnswer);
			else if (choise == 'q' || choise == 'Q')
				quit = 1;
			else
			{
				system("cls");
				cout << "Invalid choise. Try again!\n";
				continue;
			}
			system("cls");
		}
		if (!quit)
		{
			printAnswer(answer[i], boolAnswer);
			cout << "Congratulations, you won this round!\n";
		}
		delete[] boolAnswer;
	}
	cout << "Goodbye!\n";
}