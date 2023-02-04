#pragma once

#include<stdio.h>
#include<stdlib.h>//srand函数
#include<time.h>//time函数

//符号的定义
#define ROW 3
#define COL 3
//这样的宏定义方便之后改

//函数的【声明】

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);

//打印棋盘的函数
void DisplayBoard(char board[][COL], int row, int col);//传数组时可以省略行数但列数不行！;

//玩家下棋
void PlayerMove(char board[][COL],int row,int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//在游戏进行过程中：
//1.玩家赢了 - *
//2.电脑赢了 - #
//3.平局     - Q
//4.游戏继续 - C
//char IsWin 用来判断游戏状态

//判断输赢函数
char IsWin(char board[ROW][COL], int row, int col);