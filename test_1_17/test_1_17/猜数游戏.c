//写一个猜数字游戏
//1. 自动产生一个1-100之间的随机数
//2. 猜数字
// a.猜对了，就恭喜你，游戏结束
// b. 你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3.游戏一个一直玩，除非退出游戏

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//rand函数头文件
#include<time.h>//time函数头文件，获取时间戳

void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}

void game()
{
	//猜数字游戏的实现
	//1.生成随机数
	//有一个库函数 - rand
	//rand函数返回了一个0-32767之间的数字
	//时间是一直变化的 - 时间戳

	//srand是起点，每次传入值不一样，则之后每轮随机rand生成的值就不一样
	//但这又要求每次srand里传入的值不一样（随机）——运用时间戳

	//srand((unsigned int)time(NULL));
	//(1)time函数传入参数我们设置成空指针
	//(2)srand传入的类型要求unsigned int类型,所以用一个强制转换类型
	//玩一次设置一个起点不合适生成的数差距不大甚至会相等，
	// ∴只需设置一次就够了，怎么实现？！设置在一开头循环外！！

	//OK!现在生成的是随机数了，但是要求生成范围为1~100

	int ret = rand()%100+1;//%100的余数是0~99，然后+1，范围就是1~100
	//printf("%d\n",ret);//发现每一轮生成的随机数是一样的顺序 - 产生问题，解决问题！

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//因为一开始就要来一把所以用do-while循环
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);//default时让用户重新输入，
//同时判断条件不为0循环还可以进行，所以用input做判断条件，合理！
	return 0;
}