#pragma once

const int SIZE = 4;

void fillBoard(int board[][SIZE], int SIZE);
void printBoard(const int board[][SIZE], int SIZE, int position[], int SIZE_POSITION);
int move(int board[][SIZE], int position[], int SIZE);
int checkwin(int board[][SIZE], int SIZE);