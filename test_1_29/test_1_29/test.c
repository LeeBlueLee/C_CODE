#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("*****  1.play   *****\n");
	printf("*****  0.exit   *****\n");
	printf("*********************\n");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);//初始化数组
	PrintBoard(board, ROW, COL);//打印数组

	char ret = 0;
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);//打印数组
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//电脑下棋
		ComputerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);//打印数组
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	PrintBoard(board, ROW, COL);//最后打印棋局，看看战况

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束");
			break;
		default:
			printf("请重新输入：>");
		}
	} while (input);
	return 0;
}