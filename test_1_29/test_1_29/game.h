#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[][COL], int row, int col);//�����ʼ��

void PrintBoard(char board[][COL],int row,int col);//��ӡ���

void PlayerMove(char board[][COL], int row, int col);//�������

void ComputerMove(char board[][COL],int row,int col);//��������

char IsWin(char board[][COL], int row, int col);//�ж���Ӯ
//����Ϸ���й����У�
//1.���Ӯ�� - *
//2.����Ӯ�� - #
//3.ƽ��     - Q
//4.��Ϸ���� - C
//char IsWin �����ж���Ϸ״̬
