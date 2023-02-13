#include<stdio.h>
//void bubble_sort(int arr[],int sz)//形参arr本质是指针
//{
//	//即数组传参传进去的数组无法计算元素个数
//	
//	//计算数组元素个数
//	//int sz = sizeof(arr) / sizeof(arr[0]);//sz不能在这里计算,arr传进来的是第一个元素的指针（地址）：
//	//                                      内存大小即是（x86平台）四个字节，sizeof(arr[0])=4(int)
//	//确定趟数(n个数字，(n-1)趟
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序过程
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz-1-i; j++)//1:10个数待排序 9对比较 2:9个数待排序 8对比较
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换 - 0、1交换，1、2交换···
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;//一次排列都没有说明已经从小到大升序
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,9,8,7,6,5,4,2,1,0 };
//	//计算数组元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序为升序 - 冒泡排序
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

////递归实现汉诺塔问题
//
////n个盘子，从x移到z，用y做临时存放
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
////显示盘子移动轨迹
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

//青蛙可以一次跳一级台阶或两级台阶，
// 如果青蛙要跳上n级台阶，共有多少种跳法？
//动态规划：用上一步的结果，来快速计算得到下一步的结果
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