#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)//初始化棋盘
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
	printf("-----扫雷游戏-----\n");
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)//这里因为11*11的数组第一行下标为0但不打印∴i从1~9刚好符合常规
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)//这里row和col传的都是9
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----扫雷游戏-----\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)//在9*9里布置雷
{
	//布置10个雷
	int count=EASY_COUNT;
	while (count)//count--后不是0就继续循环
	{
		//生成随机的下标
		int x = rand()%row+1;//范围应为1~9
		int y = rand()%col+1;//%9余0~8 -> 加一为【1】~9而非【0~9】
		//判断是否已是雷
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS],int x,int y)//static修饰的函数仅能在game.c中使用，这样其他源文件同名不冲突
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';//将字符转化为整形，并巧妙地运用周围数字之和排查雷的个数
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)//排查雷
{
	//1.输入排查雷的坐标
	//2.检查坐标是否为雷
		//(1)是雷   - 很遗憾，炸死了
		//(2)不是雷 - 统计坐标周围有几个雷 - 存储排查雷的信息到数组show,游戏继续

	int x = 0;
	int y = 0;
	int win = 0;//控制排完雷出循环

	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的雷的坐标：>");
		scanf_s("%d %d", &x, &y);//取值范围：x--1~9,y--1~9

		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);//在函数里面用小写即可
				break;
			}
			else
			{
				//不是雷的话统计x，y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);//获取雷的个数
				//如何把整形转化为字符
				//show[x][y] = 'count';//'count'是错误的
				show[x][y] = count + '0';
				//现实是排查出的信息
				DisplayBoard(show, row, col);//在函数里面用小写即可
				win++;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入\n");
		}
	}

	if (win == row * col - EASY_COUNT)//为什么要判断！
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}