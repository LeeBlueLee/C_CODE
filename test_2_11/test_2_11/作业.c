#include<stdio.h>
int main()
{
	char arr[100] = { 0 };
	int i = 0;
	gets(arr);
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	for (i = sz; i >=0; i--)
	{
		printf("%c", arr[i]);
	}
	return 0;
}

/*
˼·������Ƚϼ򵥣���ο�����
*/
void Reverse(char* str)
{
    char* left = str;
    char* right = str + strlen(str) - 1;
    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        ++left;
        --right;
    }
}

int main()
{
    char str[] = "hello bit";
    //������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��
    Reverse(str);
    return 0;
}


// ע�⣺���������OJʱ������Ҫ����ѭ�����룬
//��Ϊÿ���㷨�����ж����������������֤���ο�����main����д����
int main()
{
    char str[101] = { 0 };
    while (gets(str))
    {
        Reverse(str);
        printf("%s\n", str);
        memset(str, 0, sizeof(str) / sizeof(str[0]));
    }
    return 0;
}


////��ҵ����(728)
////����ˮ����
////��ҵ����
////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//int Count(int n)
//{
//	int count = 0;
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n % 2 == 0)
//	{
//		return (n + Count(n / 2));
//	}
//	else
//	{
//		return n + Count(n / 2) + 1;
//	}
//	n /= 2;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	scanf_s("%d", &n);
//	printf("%d",Count(n));
//	return 0;
//}
///*
//˼·��
//1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
//2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺ
//empty/2(������ƿ�ӻ��ĺ���������ƿ��) + empty%2(��������ƿ��)
//3. ���ƿ�Ӹ�������1�������Լ����������ظ�2
//*/
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//	scanf_s("%d", &money);
//
//	//����1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty%2;
//	}
//	printf("%d", total);
//	return 0;
//}
//
//// ������������������ˮ����ƿ�ӻ��Ĺ���Ļ���
////���Է��֣���ʵ���Ǹ��Ȳ����У�money*2-1