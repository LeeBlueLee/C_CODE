////冒泡排序
#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//n个数冒n-1次
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)//1：10个数待排序，9对数待比较
//		{//每次循环数都可以减一，因为每次循环都把最大的数放到了最后了
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
//	//实现升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}

////【题目名称】
////数组操作
////【题目内容】
////创建一个整形数组，完成对数组的操作
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值。
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
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素
//	init(arr,sz);
//	print(arr, sz);
//	reverse(arr, sz);
//}

////【题目名称】
////交换数组
////【题目内容】
////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[10] = { 0 };
//	int arr2[10] = { 0 };
//	
//	printf("请输入10个数：>");
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


