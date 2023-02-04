#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("*****  1.play   *****\n");
	printf("*****  0.exit   *****\n");
	printf("*********************\n");
}

void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board,ROW,COL);//要传行和列
	//初始化函数为游戏模块嘞，放game.h
	
	//打印一下棋盘 - 本质是打印数组的内容
	DisplayBoard(board,ROW,COL);

	char ret = 0;//为了判断须在循环外也能使用所以定义在循环外

	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);//玩家的行和列需要我们去判断有没有越界
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')//总共四种情况，仅C时游戏继续
		{
			break;//分出胜负就可以跳出游戏了
		}

		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢得游戏
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')//都只用ret存储无影响
		{
			break;
		}
	}
	if (ret == '*')
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
	DisplayBoard(board, ROW, COL);//最后打印棋局，看看战况

}

int main()
{
	int input = 0;
	//rand函数使用前还需要使用srand，但这个仅需一次所以放到main函数里去！
	srand((unsigned int)time(NULL));//用time函数的返回值作为随机数的生成器
	//time函数掉的时候传一个空指针
	//同时srand函数要求参数为unsigned类型再强制类型转换一下
	//还需要引头文件，引到头文件就好！因为我们又引了头文件
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
			printf("退出游戏");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}