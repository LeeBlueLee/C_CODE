//1��շת�����
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
//2�����������Сֵ���¼��ҵ��ĵ�һ�����Ա��������������������Լ��
//#include<stdio.h>
//int main()
//{
//	int a = 24;
//	int b = 18;
//	int max;//����������Լ��
//	//��������������ֵ����max�����ַ���
//	//1��
//	/*if (a < b)
//		max = a;
//	else 
//		max = b;*/
//	//2��
//	max = a < b ? a : b;
//	while (1)//��������ѭ��ע�⣬�����������ѭ������
//	{
//		if (a % max == 0 && b % max == 0)
//		{
//			printf("���Լ����%d", max);
//			break;
//		}
//		max--;//������if�����Ļ���һֱ--������ѭ��һֱ����
//	}
//	return 0;
//}
//����С������
//˼·�����������������ʼ����++Ѱ�ҿ���ͬʱ���������ļ�Ϊ
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
			printf("��С��������%d",min);
			break;
		}
		min++;
	}
	return 0;
}