#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char str[] = "- This, a sample string.";
//    char* pch;
//    printf("Splitting string \"%s\" into tokens:\n", str);
//    pch = strtok(str, " ,.-");
//    while (pch != NULL)
//    {
//        printf("%s\n", pch);
//        pch = strtok(NULL, " ,.-");
//    }
//    return 0;
//}
//int main()
//{
//	char arr[] = "192.168.3.212";
//	char buf[30] = { 0 };
//	strcpy(buf, arr);
//
//	const char* p = ".";
//	char* str = NULL;
//	for (str = strtok(buf, p); str != NULL; str = strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
////int main()
////{
////	char arr[] = "hello";
////	strcat(arr, arr);
////	puts(arr);
////	return 0;
////}
//#include <memory.h>
//#include<assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)//���ж���--����eg��num=5��5��4��3��2��1
//		         //�Ϳ��Խ������ѭ���ƶ�����ֽ�
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//void test1()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1,24);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	printf("\n");
//}
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//void test2()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr + 3, arr, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	test1();
//	test2();
//	/*int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1, 24);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}*/
//	return 0;
//}
char* my_strstr(const char* str1, const char* str2)
{
	char* s1 = NULL;
	char* s2 = NULL;
	char* cp = str1;//��������ƥ��ĵ�ַ
	while (*cp)//��cp��û�е�\0ʱ˵��str1��ûƥ������
	{
		s1 = cp;//s1Ӧ�õ��ڿ�ʼƥ�����ʼ��ַ
		s2 = str2;//s2���Ǳ�ƥ����Ǹ��ַ�ÿ�δ�����������
		while (*s1&&*s2&&*s1 == *s2)//��*s1��*s2������\0ʱ���ܼ�������
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;//��ȥ����һ��ȥƥ��
	}
	return NULL;//ȫ�����������Ժ�˵��û��ƥ����
}
int main()
{
	char arr1[] = "abbccc";
	char arr2[] = "bcc";
	char* p=my_strstr(arr1, arr2);
	if (p==NULL)
	{
		printf("δ�ҵ�\n");
	}
	else
	{
		printf("�ҵ���\n");
	}
}