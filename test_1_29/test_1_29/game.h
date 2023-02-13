#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[][COL], int row, int col);//数组初始化

void PrintBoard(char board[][COL],int row,int col);//打印表格

void PlayerMove(char board[][COL], int row, int col);//玩家下棋

void ComputerMove(char board[][COL],int row,int col);//电脑下棋

char IsWin(char board[][COL], int row, int col);//判断输赢
//在游戏进行过程中：
//1.玩家赢了 - *
//2.电脑赢了 - #
//3.平局     - Q
//4.游戏继续 - C
//char IsWin 用来判断游戏状态
