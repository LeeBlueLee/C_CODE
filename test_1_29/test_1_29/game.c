#include "game.h"

void InitBoard(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void PrintBoard(char board[][COL], int row, int col)//打印表格
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[][COL], int row, int col)//玩家下棋
{
	int x = 0;
	int y = 0;

	printf("玩家走\n");

	while (1)
	{
		printf("请输入下棋坐标：>");
		scanf_s("%d %d", &x, &y);
		//判断坐标合法性
		if (x > 0 && x <= row && y > 0 && y <= col)//在函数内用小写即可
		{
			//判断坐标是否被占用
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

void ComputerMove(char board[][COL], int row, int col)//电脑下棋
{
	printf("电脑走\n");

	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//0表示没满
			}
		}
	}
	return 1;
}

char IsWin(char board[][COL], int row, int col)//判断输赢
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (i = 0; i < row; i++)
	{
		if (board[1][i] == board[0][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	int ret = IsFull(board, ROW, COL);
	if (ret == 1)
	{
		return 'Q';
	}
	return 'C';
}