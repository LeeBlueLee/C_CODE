#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*******   1.play   *******\n");
	printf("*******   0.exit   *******\n");
	printf("**************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');//拓展的地方也放0
	InitBoard(show, ROWS, COLS,'*');//拓展的地方也放*

	//打印一下棋盘
	//注意！打印只打9*9范围
	//DisplayBoard(mine,ROW,COL);//ROW而非ROWS
	DisplayBoard(show,ROW,COL);

	//布置雷
	SetMine(mine,ROW,COL);//在9*9里布置雷
	//DisplayBoard(mine, ROW, COL);//ROW而非ROWS
	//排查雷
	FindMine(mine, show, ROW, COL);//排查结果放到show，排查行列为9
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}