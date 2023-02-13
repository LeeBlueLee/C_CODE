#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////1.二分查找：编写代码在一个整形有序数组中查找具体的某个数
////要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n;
//	scanf_s("%d", &n);
//	int left = 0;
//	int right = 9;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//		else
//		{
//			printf("找到了");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//2.猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#define _CRT_SECURE_NO_WARNINGS
//void menu()
//{
//	printf("************\n");
//	printf("***1.play***\n");
//	printf("***0.exit***\n");
//	printf("************\n");
//}
//void game()
//{
//	int ret = rand()%100+1;
//	int guess;
//	int num = 0;
//
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了");
//		}
//		else
//		{
//			printf("猜对啦,共用%d次\n",num);
//			break;
//		}
//		num++;
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		scanf_s("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("输入错误，重新选择");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////【题目名称】数9的个数
////【题目内容】编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			count++;
//	}
//	printf("9的个数为%d", count);
//	return 0;
//}
///*
//思路：
//1. 给一个循环从1遍历到100，拿到每个数据后进行一下操作
//2.  a. 通过%的方式取当前数据的个位，检测个位数据是否为9
//		 如果是，给计数器加1
//	b. 通过/的方式取当前数据的十位，检测十位数据是否是9，
//		  如果是，给计数器加1
//  循环一直继续，直到所有的数据检测完，所有9的个数已经统计在count计数中。
//*/
////【题目名称】分数求和
////【题目内容】计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//这里应该是浮点数!!!!!!!!!!!!!!!!!!!!
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{                      //！！！！！！！！！！！！！！！！！！！！！！！！
//			sum = sum - 1.0/ i; //1应为1.0 / i, 注意此处不能使用1，否则结果全部为0
//		}
//		else
//		{
//			sum += 1.0/ i;
//		}
//	}
//	printf("%lf", sum);//这里应为lf
//	return 0;
//}
///*
//思路：
//1. 从上述表达式可以分析出
//   a. 该表达式主要由100项，奇数项为正，偶数项为负
//2. 设置一个循环从1~100，给出表达式中的每一项：1.0/i, 注意此处不能使用1，否则结果全部为0
//	然后使用flag标记控制奇偶项，奇数项为正，偶数项为负
//	然后将所有的项相加即可
//*/
//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//【题目名称】求最大值
//【题目内容】求10 个整数中最大值
//int main()
//{
//	int i = 0;
//	int a, b;
//	printf("请输入第1个数:>");
//	scanf("%d", &a);
//	for (i = 0; i < 9; i++)
//	{
//		printf("请输入第%d个数:>", i + 2);
//		scanf("%d", &b);
//		if (a < b)
//		{
//			a = b;
//		}
//	}
//	printf("最大的是%d", a);
//	return 0;
//}
///*
//思路：
//1. 采用循环的方式输入一个数组
//2. 使用max标记数组中的最大值，采用循环的方式依次获取数组中的每个元素，与max进行比较，如果arr[i]大于max，
//   更新max标记的最大值，数组遍历结束后，max中保存的即为数组中的最大值。
//*/
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)//10次循环，输入10个数
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)//从1开始进行9次循环
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//【题目名称】乘法口诀表
//【题目内容】在屏幕上输出9 * 9乘法口诀表
int main()
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		printf("1.%d", i);
		for (j = 0; j < i; j++)//开始打印时已经进行了一次循环了，∴i=1
		{
			printf("2.%d", i);
			printf(" % d * %d = % d ", j + 1, i, (j + 1) * i);
		}
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int i = 0;
	//控制行数
	for (i = 1; i <= 9; i++)
	{
		//打印每一行内容，每行有i个表达式
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}