//1.计算n的阶乘
#include<stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);
	int sum = 1;
	for (int i = 2; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d", sum);
	return 0;
}
//2.计算 1!+ 2!+ 3!+ ...... + 10!
#include<stdio.h>
int main()
{
	int n=0;
	scanf_s("%d", &n);
	int i = 0;
	int j = 0;
	int sum = 0;

	for (i = 1; i <= n; i++)
	{
		int ret = 1;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	return 0;
}
2°优化解法
思路：因为n的阶乘就是在n-1的阶乘的基础上再乘以n
#include<stdio.h>
int main()
{
    int n;
    int ret = 1;
    int sum = 0;
    //思路知道了以后还是很难写出，很巧妙
    //在计算一个数的阶乘时用循环，但其实每一次循环都可以看做比它小的数的阶乘，所以每一次循环结果都加到sum里去
    for (n = 1; n <= 10; n++)
    {
        ret *= n;
        sum += ret;
    }
    return 0;
}
/*3.在一个有序数组中查找具体的某个数字n。编写int binsearch(int x, int vl, int n); 
    功能:在v[0] <= v[1] <= v[2] <= .... <= v[n - 1]的数组中查找x.*/ 
#include<stdio.h>
int main()
{
    int n=7;
    //scanf_s("%d", &n);
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    //在arr这个【有序】数组里查找n(7)的值
    int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数为了确定右下标
    int left = 0;//确定左下标
    int right = sz - 1;
    while (left<=right)//说明中间还有元素
    {
        int mid = (left + right) / 2;//这个mid的定义一定要在循环里面每一次left/right改变都要重新计算mid
        if (arr[mid] < n)
        {
            left = mid + 1;
        }
        else if (arr(mid) > n)
        {
            right = mid - 1;
        }
        else
        {
            printf("找到了,下标是:%d\n", mid);
            break;
        }//这一串if写出的是二分查找的所有可能性
    }
    if (left > right)
    {
        printf("找不到了\n");
    }
    return 0;
}
4.编写代码，演示多个字符从两端移动，向中间汇聚。
welcome to bit!!!!!!
####################

w##################!
we################!!
wel##############!!!
...
welcome to bit!!!!!!
#include<stdio.h>
#include<string.h>//stelen
#include<windows.h>//Sleep
int main()
{
    char arr1[] = "welcome to bit!!!!!!";
    char arr2[] = "####################";
    int left = 0;
    int right = strlen(arr1) - 1;//求数组长度减一即为最后一个！的下标
    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(1000);//ms为单位1000即为1s
        system("cls");//清空屏幕
        left++;
        right--;
    }
    return 0;
}
//5.编写代码实现，模拟用户登录情景，并且只能登录三次。
// (只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    //假设正确的密码是字符串“123456”
    char password[20]={ 0 };
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码:>");
        scanf("%s", password);
        //if (password == "123456")//这两个是在比较首字符的地址
        //err - 两个字符串比较不能使用==
        //应该使用strcmp
        if (strcmp(password, "123456") == 0)//当比较两个字符串相等时strcmp会返回0
        {//strtmp是在比较阿斯克码值
            printf("登陆成功\n");
            break;
        }
        else
        {
            printf("密码错误，重新输入");
        }
    }
    if (i == 3)
    {
        printf("三次密码均错误，退出程序");
    }
    return 0;
}

