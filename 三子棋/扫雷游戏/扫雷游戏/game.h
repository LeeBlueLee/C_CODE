#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define EASY_COUNT 10//����ʱ���׸����Ĵ�Ϊ80��

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
//�ؿ�һȦ�����мӶ�

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);//��ʼ������

void DisplayBoard(char board[ROWS][COLS],int row,int col);//��ӡ���� - ��Ȼ��ӡ9*9�����黹��11*11(��s)

void SetMine(char mine[ROWS][COLS],int row,int col);//��9*9�ﲼ����

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);//�Ų���

