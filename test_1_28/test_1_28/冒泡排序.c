#include<stdio.h>
//void bubble_sort(int arr[],int sz)//�β�arr������ָ��
//{
//	//�����鴫�δ���ȥ�������޷�����Ԫ�ظ���
//	
//	//��������Ԫ�ظ���
//	//int sz = sizeof(arr) / sizeof(arr[0]);//sz�������������,arr���������ǵ�һ��Ԫ�ص�ָ�루��ַ����
//	//                                      �ڴ��С���ǣ�x86ƽ̨���ĸ��ֽڣ�sizeof(arr[0])=4(int)
//	//ȷ������(n�����֣�(n-1)��
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð���������
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz-1-i; j++)//1:10���������� 9�ԱȽ� 2:9���������� 8�ԱȽ�
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//���� - 0��1������1��2����������
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;//һ�����ж�û��˵���Ѿ���С��������
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,9,8,7,6,5,4,2,1,0 };
//	//��������Ԫ�ظ���
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����Ϊ���� - ð������
//	bubble_sort(arr,sz);
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%d", *arr);
//	return 0;
//}

////�ݹ�ʵ�ֺ�ŵ������
//
////n�����ӣ���x�Ƶ�z����y����ʱ���
//void move(char c1, char c2);
//void hanoi(int n, char x,char y, char z)
//{
//	if (n == 1)
//	{
//		move(x, z);
//	}
//	else
//	{
//		hanoi(n - 1, x, z, y);
//		move(x, z);
//		hanoi(n - 1, y, x, z);
//	}
//}
////��ʾ�����ƶ��켣
//void move(char c1, char c2)
//{
//	printf("%c -> %c\n", c1, c2);
//}
//int main()
//{
//	int n;
//	printf("Please input n:");
//	scanf_s("%d", &n);
//	hanoi(n, 'a', 'b', 'c');
//
//	return 0;
//}

//���ܿ���һ����һ��̨�׻�����̨�ף�
// �������Ҫ����n��̨�ף����ж�����������
//��̬�滮������һ���Ľ���������ټ���õ���һ���Ľ��
int t(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
	{
		return t(n - 1) + t(n - 2);
	}
}
int main()
{
	int n;
	scanf_s("%d", &n);
	int ret=t(n);
	printf("%d", ret);
	return 0;
}