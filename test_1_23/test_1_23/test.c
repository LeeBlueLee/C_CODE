#include<stdio.h>
//int iszs(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if (iszs(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////4.写一个函数，每调用一次这个函数，就会将num的值增加1。
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//涉及函数内部改变函数外部变量，所以要传地址进去
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
////【题目名称】
////
////函数判断闰年
////
////【题目内容】
////
////实现函数判断year是不是润年。
//int is_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
//}
//int main()
//{
//	int y;
//	scanf_s("%d", &y);
//	if (is_year(y))
//	{
//		printf("%d ", y);
//	}
//	return 0;
//}
////【题目名称】
////
////交换两个整数
////
////【题目内容】
////
////实现一个函数来交换两个整数的内容。
//void cha(int* pa, int* pb)
//{
//	int t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 4;
//	int b = 2;
//	cha(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

////【题目名称】乘法口诀表
////实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
////如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void printf_cfb(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d  ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf_cfb(n);
//	return 0;
//}

//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：输入：1234，输出1 2 3 4
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	unsigned int num = 0;
	scanf_s("%u", &num);//注意这里用%u
	//递归 - 函数自己调用自己
	print(num);//print函数可以打印参数部分数字的每一位

	return 0;
}

