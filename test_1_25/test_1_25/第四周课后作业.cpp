//#include<stdio.h>
//int main()
//{
//	long long n;
//	long long an = 0;
//	long long sum = 0;
//	long long i = 0;
//	long long j = 0;
//	scanf_s("%lld",&n);
//	if(n>2)
//	{
//		for (j = 3; j <= n; j++)
//		{
//			an = 0;
//			for (i = 3; i <= j; i++)
//			{
//				an += i * (i - 1) * (i - 2);//一个循环求出来的仅是an的值
//			}
//			sum += an;
//		}
//	}
//	else
//	{
//		sum = 0;
//	}
//	printf("%lld", sum);
//	return 0;
//}

////12149993250000600
//#include<stdio.h>
//int main()
//{
//    long long n, An = 0, sum = 0;
//    long long j = 1, i = 1;
//    scanf_s("%lld", &n);
//    if (n == 1)
//        printf("0");
//    else if (n == 2)
//        printf("0");
//    else {
//        for (j = 3; j <= n; j++) {
//            for (i = 3; i <= n - j + 3; i++)
//            {
//                An = An + i * (i - 1) * (i - 2);
//            }
//            sum = sum + An;
//            An = 0;
//        }
//        printf("%lld", sum);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long long n;
//	scanf_s("%lld", &n);
//	long long sum = 0, an = 0;
//	long long i;
//	for (i = 3; i <= n; i++)
//	{
//		an += (i - 2) * (i - 1) * i;
//		sum += an;
//	}
//	printf("%lld\n", sum);
//}
//#include<stdio.h>
//int main()
//{
//	long long n;
//	long long an = 0;
//	long long sum = 0;
//	long long j = 0;
//	scanf_s("%lld", &n);
//		for (j = 3; j <= n; j++)
//		{
//			an += j * (j - 1) * (j - 2);
//			sum += an;
//		}
//	printf("%lld", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	int count = 0;
//	int num;
//	int j=0;
//	scanf_s("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &num);
//		while (num != -1)//不定长输入
//		{
//			for (j = 2; j < num; j++)
//			{
//				if (num % j == 0)
//				{
//					break;
//				}
//			}
//			if (j == num)
//			{
//				count++;
//			}
//			scanf_s("%d", &num);//在这里scanf
//		}
//		printf("%d\n", count);
//		count = 0;//记得清0
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int h, l;
//	scanf_s("%d %d", &h, &l);
//	int i, j;
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < l; j++)
//		{
//			printf("|*****");
//		}
//		printf("|\n");
//		for (j = 0; j < l; j++)
//		{
//			printf("|  |  ");
//		}
//		printf("|\n");
//		for (j = 0; j < l; j++)
//		{
//			printf("|--+--");
//		}
//		printf("|\n");
//		for (j = 0; j < l; j++)
//		{
//			printf("|  |  ");
//		}
//		printf("|\n");
//
//	}
//	for (j = 0; j < l; j++)
//	{
//		printf("|*****");
//	}
//	printf("|\n");
//	return 0;
//}
////已知一个整数n，打印1到n所有除以m后所得商正好是它的各个数字平方和的数。
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int n, m;
//	scanf_s("%d %d",&n,&m);
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		int temp = i;
//		int count = 0;
//		while (temp != 0)
//		{
//			int fu = temp % 10;
//			count += fu * fu;
//			temp /= 10;
//		}
//		if (count == i / m)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
////已知两个正整数m和n，求其最大公约数和最小公倍数。
//int main()
//{
//	int m, n;
//	scanf_s("%d %d", &m, &n);
//	int max = 0;
//	max = m > n ? n : m;
//	while (1)
//	{
//		if (m % max == 0 && n % max == 0)
//		{
//			break;
//		}
//		else
//		{
//			max--;
//		}
//	}
//	printf("%d\n", max);
//	int min = m > n ? m : n;
//	while (1)
//	{
//		if (min % m == 0 && min % n == 0)
//		{
//			break;
//		}
//		else
//		{
//			min++;
//		}
//	}
//	printf("%d\n", min);
//	return 0;
//}
////回文是指正读和反读都一样的数或文本段。
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int temp = n;
//	int i = 0;
//	while (n > 0)
//	{
//		i = i * 10 + n % 10;
//		n /= 10;
//	}
//	if (i == temp)
//	{
//		printf("Yes");
//	}
//	else
//	{
//		printf("No");
//	}
//	return 0;
//}
//【题目名称】
//
//打印一个数的每一位
//
//【题目内容】
//
////递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	print(n);
//	return 0;
//}
//【题目名称】
//
//求阶乘
//
//【题目内容】
//
////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int a(int n)
//{
//	if (n < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * a(n - 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret=a(n);
//	printf("%d", ret);
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int i;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}
//【题目名称】
//
//strlen的模拟（递归实现）
//
//【题目内容】
//
////递归和非递归分别实现strlen
//int my_strlen(char* pr)
//{
//	if (*pr != '\0')
//	{
//		return 1 + my_strlen(pr+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "bit";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}
//【题目名称】
//字符串逆序（递归实现）
//【题目内容】
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的【字符反向排列】，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数【不能使用strlen来求长度】。
//比如 :
//char arr[] = "abcdef";
//逆序之后数组的内容变成：fedcba
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int ret = my_strlen(str);
//	int left = 0;
//	int right = ret-1;
//
//	while (left < right)
//	{
//		char tmp = *(str+left);
//		*(str+left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//	char tmp = str[left];
//	str[left] = str[right];
//	str[right] = '\0';
//	if (my_strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	str[right] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);//即字符反向排列而非逆序打印
//
//	return 0;
//}

////【题目名称】
////计算一个数的每位之和（递归实现）
////【题目内容】
////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
////输入：1729，输出：19
//int DigitSum(int n)
//{
//	if (n > 0)
//		return (n % 10 + DigitSum(n / 10));
//	else return 0;
//}
//int main()
//{
//	int n;
//	scanf_s("%d",&n);
//	int ret=DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}

////【题目名称】
////递归实现n的k次方
////【题目内容】
////编写一个函数实现n的k次方，使用递归实现。
//int a(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * a(n, k - 1);
//	}
//	else return 1;
//}
//int main()
//{
//	int n, k;
//	scanf_s("%d %d", &n, &k);
//	int ret=a(n, k);
//	printf("%d", ret);
//	return 0;
//}

//【题目名称】
//计算斐波那契数
//【题目内容】
//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret=Fib(n);
//	printf("%d", ret);
//	return 0;
//}
