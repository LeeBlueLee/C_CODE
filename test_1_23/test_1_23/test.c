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

////4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//�漰�����ڲ��ı亯���ⲿ����������Ҫ����ַ��ȥ
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
////����Ŀ���ơ�
////
////�����ж�����
////
////����Ŀ���ݡ�
////
////ʵ�ֺ����ж�year�ǲ������ꡣ
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
////����Ŀ���ơ�
////
////������������
////
////����Ŀ���ݡ�
////
////ʵ��һ�������������������������ݡ�
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

////����Ŀ���ơ��˷��ھ���
////ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
////�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺���룺1234�����1 2 3 4
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
	scanf_s("%u", &num);//ע��������%u
	//�ݹ� - �����Լ������Լ�
	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ

	return 0;
}

