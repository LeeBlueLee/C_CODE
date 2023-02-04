#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)//��ʼ������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----ɨ����Ϸ-----\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//������Ϊ11*11�������һ���±�Ϊ0������ӡ��i��1~9�պ÷��ϳ���
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)//����row��col���Ķ���9
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----ɨ����Ϸ-----\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)//��9*9�ﲼ����
{
	//����10����
	int count=EASY_COUNT;
	while (count)//count--����0�ͼ���ѭ��
	{
		//����������±�
		int x = rand()%row+1;//��ΧӦΪ1~9
		int y = rand()%col+1;//%9��0~8 -> ��һΪ��1��~9���ǡ�0~9��
		//�ж��Ƿ�������
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS],int x,int y)//static���εĺ���������game.c��ʹ�ã���������Դ�ļ�ͬ������ͻ
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';//���ַ�ת��Ϊ���Σ��������������Χ����֮���Ų��׵ĸ���
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//�Ų���
{
	//1.�����Ų��׵�����
	//2.��������Ƿ�Ϊ��
		//(1)����   - ���ź���ը����
		//(2)������ - ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ������show,��Ϸ����

	int x = 0;
	int y = 0;
	int win = 0;//���������׳�ѭ��

	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų���׵����꣺>");
		scanf_s("%d %d", &x, &y);//ȡֵ��Χ��x--1~9,y--1~9

		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, row, col);//�ں���������Сд����
				break;
			}
			else
			{
				//�����׵Ļ�ͳ��x��y������Χ�м�����
				int count = get_mine_count(mine, x, y);//��ȡ�׵ĸ���
				//��ΰ�����ת��Ϊ�ַ�
				//show[x][y] = 'count';//'count'�Ǵ����
				show[x][y] = count + '0';
				//��ʵ���Ų������Ϣ
				DisplayBoard(show, row, col);//�ں���������Сд����
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}

	if (win == row * col - EASY_COUNT)//ΪʲôҪ�жϣ�
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}