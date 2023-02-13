//#include<stdio.h>
//int findmax(int a, int b)
//{
//	if (a > b)return a;
//	if (a < b)return b;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = findmax(num1, num2);
//	printf("%d", max);
//	return 0;
//}
#include<stdio.h>
int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d",i);
		}
	}
}
