#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;
int* createArray(int size);
void fillRandArray(int* arr, int size);
void printArray(const int* arr, int size);
int sizeVerification();
int* addToArray(int value, int* arr, int& size);
void deleteElementArray(int*& arr, int& size, int index);
void addToArrayByIndex(int*& arr, int& size, int index, int value);
template <typename T>
int howMuchMoreOrLessThan(const T arr[], int size, bool moreLess, T thanN);
void changeToPositive(int*& arr, int& sizeOld);
void addBlock(int*& arr, int& sizeOld, const int* block, int length);
void removeBlock(int*& arr, int& sizeOld, int index, int length);
bool elementsRepeatToDelete(const int* arr, int length, int val);
int* intersect(const int* a, int sizeA, const int* b, int sizeB, int& size);