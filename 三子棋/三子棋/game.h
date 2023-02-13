#pragma once

#include<stdio.h>
#include<stdlib.h>//srand����
#include<time.h>//time����

//���ŵĶ���
#define ROW 3
#define COL 3
//�����ĺ궨�巽��֮���

//�����ġ�������

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col);

//��ӡ���̵ĺ���
void DisplayBoard(char board[][COL], int row, int col);//������ʱ����ʡ���������������У�;

//�������
void PlayerMove(char board[][COL],int row,int col);

//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//����Ϸ���й����У�
//1.���Ӯ�� - *
//2.����Ӯ�� - #
//3.ƽ��     - Q
//4.��Ϸ���� - C
//char IsWin �����ж���Ϸ״̬

//�ж���Ӯ����
char IsWin(char board[ROW][COL], int row, int col);