//1°辗转相除法
//#include<stdio.h>
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int c = 0;
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}
//2°从两数中最小值往下减找到的第一个可以被两数整除的数就是最大公约数
//#include<stdio.h>
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int max;//用来存放最大公约数
//	//这里把两数中最大值存入max有两种方法
//	//1°
//	/*if (a < b)
//		max = a;
//	else 
//		max = b;*/
//	//2°
//	max = a < b ? a : b;
//	while (1)//这里无限循环注意，不在这里控制循环结束
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("最大公约数是%d", max);
//			break;
//		}
//		max--;//不满足if条件的话就一直--，反正循环一直进行
//	}
//	return 0;
//}
//求最小公倍数
//思路：从两数中最大数开始依次++寻找可以同时整除两数的即为
#include<stdio.h>
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int min = a > b ? a : b;
	while (1)
	{
		if (min % a == 0 && min % b == 0)
		{
			printf("最小公倍数是%d",min);
			break;
		}
		min++;
	}
	return 0;
}