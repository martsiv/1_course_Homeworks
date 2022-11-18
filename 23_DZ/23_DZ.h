#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>
#include <math.h>
//Завдання 1 =====================================================
int resultQuadEqual(int a, int b, int c, double* x1_out, double* x2_out);
//Завдання 2 =====================================================
void areaAndPerimeterCircle(double r, double* C_out, double* S_out);
//Завдання 3 =====================================================
void numAndSummOfEven(const int arr[], int SIZE, int* num, int* sum);
//Завдання 4 =====================================================
int& refMaxElement(int arr[], int size);
//Завдання 5 =====================================================
int* findPositive(int* start, int* end);