#include<stdio.h>
int main()
{
	char arr[100] = { 0 };
	int i = 0;
	gets(arr);
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	for (i = sz; i >=0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;
}

/*
思路：该题比较简单，请参考代码
*/
void Reverse(char* str)
{
    char* left = str;
    char* right = str + strlen(str) - 1;
    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}

int main()
{
    char str[] = "hello bit";
    //在这里完成下面函数，参数自己设计，要求：使用指针
    Reverse(str);
    return 0;
}


// 注意：如果是在线OJ时，必须要考虑循环输入，
//因为每个算法可能有多组测试用例进行验证，参考以下main函数写法，
int main()
{
    char str[101] = { 0 };
    while (gets(str))
    {
        Reverse(str);
        printf("%s\n", str);
        memset(str, 0, sizeof(str) / sizeof(str[0]));
    }
    return 0;
}


////作业标题(728)
////喝汽水问题
////作业内容
////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int Count(int n)
//{
//	int count = 0;
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n % 2 == 0)
//	{
//		return (n + Count(n / 2));
//	}
//	else
//	{
//		return n + Count(n / 2) + 1;
//	}
//	n /= 2;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	scanf_s("%d", &n);
//	printf("%d",Count(n));
//	return 0;
//}
///*
//思路：
//1. 20元首先可以喝20瓶，此时手中有20个空瓶子
//2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：
//empty/2(两个空瓶子换的喝完后产生的瓶子) + empty%2(不够换的瓶子)
//3. 如果瓶子个数超过1个，可以继续换，即重复2
//*/
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf_s("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;
//	}
//	printf("%d", total);
//	return 0;
//}
//
//// 方法二：按照上述喝水和用瓶子换的规则的话，
////可以发现，其实就是个等差数列：money*2-1