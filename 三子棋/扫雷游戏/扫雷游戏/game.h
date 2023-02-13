#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define EASY_COUNT 10//测试时把雷个数改大为80！

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
//拓宽一圈即行列加二

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);//初始化棋盘

void DisplayBoard(char board[ROWS][COLS],int row,int col);//打印棋盘 - 虽然打印9*9但数组还是11*11(加s)

void SetMine(char mine[ROWS][COLS],int row,int col);//在9*9里布置雷

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//排查雷

