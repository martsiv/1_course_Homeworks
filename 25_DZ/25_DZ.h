#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>
using namespace std;
//Загальні функції для кількох завдань ===========================
template <typename T>
void ShowArr(const T arr[], int size);
template <typename T>
void FillArr(T arr[], int size);
//Завдання 1 =====================================================
double add(double x, double y);
double subt(double x, double y);
double mult(double x, double y);
double div(double x, double y);
//Завдання 2 =====================================================
void squre(int side);
void trian(int height);
void geometry(int number, void (*f)(int));
//Завдання 3 =====================================================
//template <typename T>
//int findValue(const T* arr, int size, bool (*f)(T));
//template <typename T>
//bool isPositive(T num);
//template <typename T>
//bool isTwoDigitNumber(T num);
//Завдання 4 =====================================================
void modifyElement(int arr[], int size, void (*func)(int&));
void modifyElement(int& val, void (*func)(int&));
void getDoubleVal(int& num);
void getPlusOne(int& num);