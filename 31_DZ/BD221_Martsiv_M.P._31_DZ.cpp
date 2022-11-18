#include <iostream>
using namespace std;
const int SIZE = 40;
enum Genre { None, Adventure, Detective, Fantasy, Historical, Horror, Novel, Romance, Science };

struct Library
{
	char name[SIZE] = "None";
	char author[SIZE] = "None";
	char publishing[SIZE] = "None";
	Genre genre = Genre::None;
};
int verificateNum(int leftRange, int rightRange);
void getGenre(Library* book);
void editBook(Library* book);
const char* printGenre(int num);
void printOneBooks(Library* book);
void printAllBooks(Library** book, int size);
int searchBookByAuthor(Library** book, int size, char key[SIZE]);
int searchBookByName(Library** book, int size, char key[SIZE]);
void sortByName(Library** book, int N);
void sortByAuthor(Library** book, int N);
void sortByPublishing(Library** book, int N);
void addNewBook(Library**& book, int& size);
void deleteBook(Library**& book, int& size);

int main()
{
	enum Menu { Exit, EditBook, PrintAllBooks, SearchByAuthor, SearchByName, SortByName, SortByAuthor, SortByPublisher, AddNewBook, DeleteOneBook };
	int numBooks = 5;
	char searchKey[SIZE];
	int index;
	Library** books = new Library * [numBooks];
	for (int i = 0; i < numBooks; i++)
		books[i] = new Library;
	*books[0] = { "A Desolation Called Peace", "Arkady Martine", "NashFormat", Genre::Fantasy };
	*books[1] = { "Life of Pi", "Yann Martel", "Yakaboo", Genre::Novel };
	*books[2] = { "The Adventures of Sherlock Holmes", "Arthur Conan Doyle", "Vivat", Genre::Detective };
	*books[3] = { "Circle", "Madeline Miller", "SNOWDROP", Genre::Fantasy };
	*books[4] = { "The help", "Kathryn Stockett", "Morning", Genre::Novel };
	int menu;
	bool exit = 1;
	while (exit)
	{
		cout << "\t\tLibrary\n";
		cout << "\tMenu:\n"
			<< "1 - Edit book\n"
			<< "2 - Print all books\n"
			<< "3 - Search by Author\n"
			<< "4 - Search by name\n"
			<< "5 - Sort by name\n"
			<< "6 - Sort by author\n"
			<< "7 - Sort by publisher\n"
			<< "8 - Add new book\n"
			<< "9 - Delete one book\n"
			<< "0 - Exit\n";
		menu = verificateNum(0, 9);
		switch (Menu(menu))
		{
		case EditBook:
		{
			cout << "Enter the book number in Library (1 - " << numBooks << ") or 0 to return: ";
			int num = verificateNum(0, numBooks);
			if (num)
				editBook(books[num - 1]);
		}
		break;
		case PrintAllBooks:
		{
			system("cls");
			printAllBooks(books, numBooks);
			system("pause");
		}
		break;
		case SearchByAuthor:
		{
			system("cls");
			cout << "Enter the author: ";
			cin >> searchKey;
			index = searchBookByAuthor(books, numBooks, searchKey);
			if (0 <= index)
				printOneBooks(books[index]);
			else
				cout << "We could not find this book\n";
			system("pause");
		}
		break;
		case SearchByName:
		{
			system("cls");
			cout << "Enter the name: ";
			cin >> searchKey;
			index = searchBookByName(books, numBooks, searchKey);
			if (0 <= index)
				printOneBooks(books[index]);
			else
				cout << "We could not find this book\n";
			system("pause");
		}
		break;
		case SortByName:
		{
			sortByName(books, numBooks - 1);
			cout << "\tSotred!\n";
			system("pause");
			system("cls");
			system("cls");
		}
		break;
		case SortByAuthor:
		{
			sortByAuthor(books, numBooks - 1);
			cout << "\tSotred!\n";
			system("pause");
			system("cls");
			system("cls");
		}
		break;
		case SortByPublisher:
		{
			sortByPublishing(books, numBooks - 1);
			cout << "\tSotred!\n";
			system("pause");
			system("cls");
		}
		break;
		case AddNewBook:
		{
			addNewBook(books, numBooks);
			editBook(books[numBooks - 1]);
		}
		break;
		case DeleteOneBook:
			deleteBook(books, numBooks);
			break;
		case Exit:
			exit = 0;
			break;
		}
	}
}

int verificateNum(int leftRange, int rightRange)
{
	int num;
	while (!(cin >> num) || (num < leftRange) || (rightRange < num))
	{
		cin.clear();
		while (cin.get() != '\n')
			continue;
	}
	return num;
}

void getGenre(Library* book)
{
	cout << "Enter the number of genre: \n";
	cout << "1 - Adventure\n2 - Detective\n3 - Fantasy\n4 - Historical\n5 - Horror\n6 - Novel\n7 - Romance\n8 - Science\n";
	int genre = verificateNum(0, 8);
	book->genre = (Genre)genre;
}

void editBook(Library* book)
{
	cin.ignore(100, '\n');
	cout << "Enter the name: ";
	cin.getline(book->name, SIZE);
	cout << "Enter the author: ";
	cin.getline(book->author, SIZE);
	cout << "Enter the publishing: ";
	cin.getline(book->publishing, SIZE);
	getGenre(book);
}

const char* printGenre(int num)
{

	if (num == Genre::Adventure)
		return "Adventure";
	else if (num == Genre::Detective)
		return "Detective";
	else if (num == Genre::Fantasy)
		return "Fantasy";
	else if (num == Genre::Historical)
		return "Historical";
	else if (num == Genre::Horror)
		return "Horror";
	else if (num == Genre::Novel)
		return "Novel";
	else if (num == Genre::Romance)
		return "Romance";
	else if (num == Genre::Science)
		return "Science";
	else
		return "none";
}

void printOneBooks(Library* book)
{
	cout << "Name: " << book->name << endl;
	cout << "Author: " << book->author << endl;
	cout << "Publishing: " << book->publishing << endl;
	cout << "Genre: " << printGenre(book->genre) << endl << endl;
}

void printAllBooks(Library** book, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "The book #" << i + 1 << " of " << size << endl;
		printOneBooks(book[i]);
	}
	cout << endl;
}

int searchBookByAuthor(Library** book, int size, char key[SIZE])
{
	for (size_t i = 0; i < size; i++)
	{
		if (strstr((*book[i]).author, key))
			return i;
	}
	return -1;
}

int searchBookByName(Library** book, int size, char key[SIZE])
{
	for (size_t i = 0; i < size; i++)
	{
		if (strstr((*book[i]).name, key))
			return i;
	}
	return -1;
}

void sortByName(Library** book, int N)
{
	int left = 0, right = N;
	Library* tmp;
	int pivot;
	pivot = N / 2;
	do
	{
		while (_stricmp(book[left]->name, book[pivot]->name) < 0)
			left++;
		while (0 < _stricmp(book[right]->name, book[pivot]->name))
			right--;
		if (left <= right)
		{
			tmp = book[left];
			book[left] = book[right];
			book[right] = tmp;
			left++;
			right--;
		}
	} while (left <= right);
	if (0 < right)
		sortByName(book, right);
	if (left < N)
		sortByName(book + left, N - left);
}

void sortByAuthor(Library** book, int N)
{
	int left = 0, right = N;
	Library* tmp;
	int pivot;
	pivot = N / 2;
	do
	{
		while (_stricmp(book[left]->author, book[pivot]->author) < 0)
			left++;
		while (0 < _stricmp(book[right]->author, book[pivot]->author))
			right--;
		if (left <= right)
		{
			tmp = book[left];
			book[left] = book[right];
			book[right] = tmp;
			left++;
			right--;
		}
	} while (left <= right);
	if (0 < right)
		sortByAuthor(book, right);
	if (left < N)
		sortByAuthor(book + left, N - left);
}

void sortByPublishing(Library** book, int N)
{
	int left = 0, right = N;
	Library* tmp;
	int pivot;
	pivot = N / 2;
	do
	{
		while (_stricmp(book[left]->publishing, book[pivot]->publishing) < 0)
			left++;
		while (0 < _stricmp(book[right]->publishing, book[pivot]->publishing))
			right--;
		if (left <= right)
		{
			tmp = book[left];
			book[left] = book[right];
			book[right] = tmp;
			left++;
			right--;
		}
	} while (left <= right);
	if (0 < right)
		sortByPublishing(book, right);
	if (left < N)
		sortByPublishing(book + left, N - left);
}

void addNewBook(Library**& book, int& size)
{
	size++;
	Library** res = new Library * [size];
	res[size - 1] = new Library;
	for (int i = 0; i < size - 1; i++)
		res[i] = book[i];
	delete[] book;
	book = res;
}

void deleteBook(Library**& book, int& size)
{
	int index;
	char key[SIZE];
	cout << "Delete by name(1) or by author(2)?\n";
	if (verificateNum(1, 2) == 1)
	{
		cout << "Enter the name: ";
		cin >> key;
		index = searchBookByName(book, size, key);
	}
	else
	{
		cout << "Enter the author: ";
		cin >> key;
		index = searchBookByAuthor(book, size, key);
	}
	if (index < 0)
	{
		cout << "We didn`t find this book\n";
		system("pause");
		system("cls");
		return;
	}
	size--;
	Library** res = new Library * [size];
	delete[] book[index];
	for (int i = 0, j = 0; i < size + 1; i++)
	{
		if (i != index)
		{
			res[j] = book[i];
			j++;
		}
	}
	delete[] book;
	book = res;
	cout << "Deleted!\n";
	system("pause");
	system("cls");
}