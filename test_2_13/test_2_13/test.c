#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

////作业标题(735)
////调整奇数偶数顺序
////作业内容
////调整数组使奇数全部都位于偶数前面。
//void cpy(int* des,int* sta,int sz)
//{
//	for(int i=0;i<sz;i++)
//	{
//		*des++ = *sta++;
//	}
//}
//void adjust(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int count1 = 0;
//	int count2 = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)//even
//		{
//			arr2[j] = arr[i];
//			count2++;
//			j++;
//		}
//		else
//		{
//			arr1[k] = arr[i];
//			count1++;
//			k++;
//		}
//	}
//	cpy(arr, arr1,count1);
//	cpy(arr+count1, arr2, count2);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	adjust(arr,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);//1 3 5 7 9 2 4 6 8 10
//	}
//	return 0;
//}


////作业标题(736)
////strcpy实现
////作业内容
////模拟实现库函数strcpy
#include<assert.h>
//char* my_strcpy(char* des, const char* sta)
//{
//	assert(des && sta);
//	char* ret = des;
//	while (*des++ = *sta++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[20] = { 0 };//这里我一开始写成了arr[]={0}
//	//相当于数组里只有0一个元素了那就数组越界了，程序就不终止
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}

//作业标题(737)
//strlen实现
//作业内容
//模拟实现库函数strlen
int my_strlen(char* arr)
{
	assert(arr);
	int count = 0;
	while (*arr++ != '\0')
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "hello world!";
	printf("%d", my_strlen(arr));
	return 0;
}