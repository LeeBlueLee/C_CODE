#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////1.���ֲ��ң���д������һ���������������в��Ҿ����ĳ����
////Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
//			printf("�ҵ���");
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//2.��������Ϸ
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
//		printf("�������:>");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���");
//		}
//		else
//		{
//			printf("�¶���,����%d��\n",num);
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
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("�����������ѡ��");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////����Ŀ���ơ���9�ĸ���
////����Ŀ���ݡ���д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			count++;
//	}
//	printf("9�ĸ���Ϊ%d", count);
//	return 0;
//}
///*
//˼·��
//1. ��һ��ѭ����1������100���õ�ÿ�����ݺ����һ�²���
//2.  a. ͨ��%�ķ�ʽȡ��ǰ���ݵĸ�λ������λ�����Ƿ�Ϊ9
//		 ����ǣ�����������1
//	b. ͨ��/�ķ�ʽȡ��ǰ���ݵ�ʮλ�����ʮλ�����Ƿ���9��
//		  ����ǣ�����������1
//  ѭ��һֱ������ֱ�����е����ݼ���꣬����9�ĸ����Ѿ�ͳ����count�����С�
//*/
////����Ŀ���ơ��������
////����Ŀ���ݡ�����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;//����Ӧ���Ǹ�����!!!!!!!!!!!!!!!!!!!!
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{                      //������������������������������������������������
//			sum = sum - 1.0/ i; //1ӦΪ1.0 / i, ע��˴�����ʹ��1��������ȫ��Ϊ0
//		}
//		else
//		{
//			sum += 1.0/ i;
//		}
//	}
//	printf("%lf", sum);//����ӦΪlf
//	return 0;
//}
///*
//˼·��
//1. ���������ʽ���Է�����
//   a. �ñ��ʽ��Ҫ��100�������Ϊ����ż����Ϊ��
//2. ����һ��ѭ����1~100���������ʽ�е�ÿһ�1.0/i, ע��˴�����ʹ��1��������ȫ��Ϊ0
//	Ȼ��ʹ��flag��ǿ�����ż�������Ϊ����ż����Ϊ��
//	Ȼ�����е�����Ӽ���
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

//����Ŀ���ơ������ֵ
//����Ŀ���ݡ���10 �����������ֵ
//int main()
//{
//	int i = 0;
//	int a, b;
//	printf("�������1����:>");
//	scanf("%d", &a);
//	for (i = 0; i < 9; i++)
//	{
//		printf("�������%d����:>", i + 2);
//		scanf("%d", &b);
//		if (a < b)
//		{
//			a = b;
//		}
//	}
//	printf("������%d", a);
//	return 0;
//}
///*
//˼·��
//1. ����ѭ���ķ�ʽ����һ������
//2. ʹ��max��������е����ֵ������ѭ���ķ�ʽ���λ�ȡ�����е�ÿ��Ԫ�أ���max���бȽϣ����arr[i]����max��
//   ����max��ǵ����ֵ���������������max�б���ļ�Ϊ�����е����ֵ��
//*/
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//
//	for (i = 0; i < 10; i++)//10��ѭ��������10����
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)//��1��ʼ����9��ѭ��
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//����Ŀ���ơ��˷��ھ���
//����Ŀ���ݡ�����Ļ�����9 * 9�˷��ھ���
int main()
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		printf("1.%d", i);
		for (j = 0; j < i; j++)//��ʼ��ӡʱ�Ѿ�������һ��ѭ���ˣ���i=1
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
	//��������
	for (i = 1; i <= 9; i++)
	{
		//��ӡÿһ�����ݣ�ÿ����i�����ʽ
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}