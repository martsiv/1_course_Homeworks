#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <ctime>
#include <math.h>
//�������� 1 =====================================================
int resultQuadEqual(int a, int b, int c, double* x1_out, double* x2_out);
//�������� 2 =====================================================
void areaAndPerimeterCircle(double r, double* C_out, double* S_out);
//�������� 3 =====================================================
void numAndSummOfEven(const int arr[], int SIZE, int* num, int* sum);
//�������� 4 =====================================================
int& refMaxElement(int arr[], int size);
//�������� 5 =====================================================
int* findPositive(int* start, int* end);