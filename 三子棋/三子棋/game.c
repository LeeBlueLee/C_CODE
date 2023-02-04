#include "game.h"

//初始化棋盘 - 初始化空格
void InitBoard(char board[ROW][COL], int row, int col)
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

////打印棋盘
//void DisplayBoard(char board[][COL], int row, int col);//传数组时可以省略行数但列数不行！
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		if(i<row-1)
//			printf("---|---|---\n");//最后一次无需打印
//	}
//}这个代码写的不太好，之后不好改，我们不应该把他写死了！

void DisplayBoard(char board[][COL], int row, int col)//传数组时可以省略行数但列数不行！
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			//printf("---|---|---\n");//最后一次无需打印
			//int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("玩家走：>\n");

	while (1)
	{
		printf("请输入下棋的坐标：>");
		scanf_s("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)//合法性判断
		{
			//下棋
			//判断坐标是否被占用
			if (board[x - 1][y - 1] == ' ')//玩家输的x,y并非对应数组的x，y！
			{
				board[x - 1][y - 1] = '*';
				break;//下完一定要记得break出循环不再输入了
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
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走：>\n");

	//使用前还需要使用srand，但这个仅需一次所以放到main函数里去！
//	int x = rand()%row;//%3即得到一个比三小的数：0、1、2
//	int y = rand()%col;//确定范围！
	//x，y随机且范围确定 - 横纵坐标产生
	
	//电脑下棋判断是否有落子
	while (1)
	{
		int x = rand() % row;//注意事项见上方
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;//符合则跳出，不符合则循环随机数
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
				return 0;//棋盘没满还有空格
			}
		}
	}
	return 1;//循环完了棋盘满了
}
//判断战况：游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//判断三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//不能连等！同时也不能是全都是空格
		{
			return board[i][1];//巧妙地设计玩家赢一行刚好都是玩家的星被返回
		}
	}

	//判断三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i]&&board[1][i]!=' ')
		{
			return board[1][i];
		}
	}

	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//判断平局 ： 满了就平了
	//如果满了返回 1 ，不满返回 0
	int ret = IsFull(board, row, col);//这里小写是因为我们在IsWin函数内部
	if (ret == 1)
	{
		return 'Q';
	}

	//继续
	return 'C';
}