#pragma once
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
const int SIZE = 5;

void fillArrRand(int arr[][SIZE], int left = 0, int right = 100);
void printArr(int arr[][SIZE]);
void sumMatrix(const int a[][SIZE], const int b[][SIZE], int c[][SIZE]);
void multArr(int arr[][SIZE], int num);
void sortArr(int arr[][SIZE]);