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

void deleteElementArray(int*& arr, int& size, int index) //��������� �������� �� ��������
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

void addToArrayByIndex(int*& arr, int& size, int index, int value) //��������� �������� �� ��������
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
		if (moreLess && thanN < arr[i])			//���� �������� true, �� �������� ������ �������� ����� �������� thanN
			counter++;
		else if (!moreLess && arr[i] < thanN)	//���� �������� false, �� �������� ������ �������� ����� �������� thanN
			counter++;
	}
	return counter;
}

void changeToPositive(int*& arr, int& sizeOld) //��������� ��'�����
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
		if (!check && i == index)		//���� ��������� �� ������, � ����� ����� �������� ����
			check = 1;					//�� ����������� ���������.
		if (check && j == length)		//���� ����� �� ���� �����, 
			check = 0;					//�� ��������� ������
		else if (check)					//���� ��������� ��������, ������ �� ��������
		{
			j++;
			continue;
		}
		arr2[i - j] = arr[i];			//� ����� ����� ������ ��������, ���� ������
	}
	sizeOld = sizeNew;					//��������� �������� ������ ������
	delete[] arr;						//�������� �����
	arr = arr2;
}

bool elementsRepeatToDelete(const int* arr, int length, int val) // �������� �� ����� � ����� ���� ��� ��������
{
	for (int i = 0; i < length; i++)
		if (val == arr[i])
			return true;
	return false;
}

int* intersect(const int* a, int sizeA, const int* b, int sizeB, int& size)
{
	size = 0;
	int* tmp = new int[size];			//��������� �����, ���� ����� � ��� �� ��������
	addBlock(tmp, size, a, sizeA);		//����������� �������� � ��������� �������
	addBlock(tmp, size, b, sizeB);
	int counter = 0;
	for (int i = 0; i < size; i++)		//����� ���� �� ��������, �� �� ������������. �� �������� �� ������� (����� ������ ������)
	{
		if (!elementsRepeatToDelete(tmp, i, tmp[i]))
		{
			tmp[counter] = tmp[i];
			counter++;
		}
	}
	size = counter;						//������������ ����� ��� ������ ������

	int* c = new int[size];				//������� ����� �����
	for (int i = 0; i < size; i++)		//�� ��������� ���� � �����������
		c[i] = tmp[i];

	delete[] tmp;						//���������� ����� �������
	return c;							//� ����� ��������
}