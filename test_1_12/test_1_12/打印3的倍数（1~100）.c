#include<stdio.h>
int main()
{
	int i;
	//for (i = 3; i < 100; i++)
	//{
	//	if (0 == i % 3)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	for (i = 3; i <= 100; i += 3)//�ڶ��ַ���ֱ��i+=3
	{
		printf("%d ", i);
	}
	return 0;
}