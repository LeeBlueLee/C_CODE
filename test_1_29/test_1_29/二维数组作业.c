////ð������
#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//n����ðn-1��
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)//1��10����������9�������Ƚ�
//		{//ÿ��ѭ���������Լ�һ����Ϊÿ��ѭ�������������ŵ��������
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	//ʵ������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}

////����Ŀ���ơ�
////�������
////����Ŀ���ݡ�
////����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ��
//	init(arr,sz);
//	print(arr, sz);
//	reverse(arr, sz);
//}

////����Ŀ���ơ�
////��������
////����Ŀ���ݡ�
////������A�е����ݺ�����B�е����ݽ��н�����������һ����
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	
//	printf("������10������>");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d ", &arr1[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		scanf_s("%d ", &arr2[i]);
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


