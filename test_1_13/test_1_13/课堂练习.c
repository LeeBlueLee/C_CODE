//1.����n�Ľ׳�
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
//2.���� 1!+ 2!+ 3!+ ...... + 10!
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
2���Ż��ⷨ
˼·����Ϊn�Ľ׳˾�����n-1�Ľ׳˵Ļ������ٳ���n
#include<stdio.h>
int main()
{
    int n;
    int ret = 1;
    int sum = 0;
    //˼·֪�����Ժ��Ǻ���д����������
    //�ڼ���һ�����Ľ׳�ʱ��ѭ��������ʵÿһ��ѭ�������Կ�������С�����Ľ׳ˣ�����ÿһ��ѭ��������ӵ�sum��ȥ
    for (n = 1; n <= 10; n++)
    {
        ret *= n;
        sum += ret;
    }
    return 0;
}
/*3.��һ�����������в��Ҿ����ĳ������n����дint binsearch(int x, int vl, int n); 
    ����:��v[0] <= v[1] <= v[2] <= .... <= v[n - 1]�������в���x.*/ 
#include<stdio.h>
int main()
{
    int n=7;
    //scanf_s("%d", &n);
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    //��arr������������������n(7)��ֵ
    int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���Ϊ��ȷ�����±�
    int left = 0;//ȷ�����±�
    int right = sz - 1;
    while (left<=right)//˵���м仹��Ԫ��
    {
        int mid = (left + right) / 2;//���mid�Ķ���һ��Ҫ��ѭ������ÿһ��left/right�ı䶼Ҫ���¼���mid
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
            printf("�ҵ���,�±���:%d\n", mid);
            break;
        }//��һ��ifд�����Ƕ��ֲ��ҵ����п�����
    }
    if (left > right)
    {
        printf("�Ҳ�����\n");
    }
    return 0;
}
4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
    int right = strlen(arr1) - 1;//�����鳤�ȼ�һ��Ϊ���һ�������±�
    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        Sleep(1000);//msΪ��λ1000��Ϊ1s
        system("cls");//�����Ļ
        left++;
        right--;
    }
    return 0;
}
//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
// (ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    //������ȷ���������ַ�����123456��
    char password[20]={ 0 };
    for (i = 0; i < 3; i++)
    {
        printf("����������:>");
        scanf("%s", password);
        //if (password == "123456")//���������ڱȽ����ַ��ĵ�ַ
        //err - �����ַ����Ƚϲ���ʹ��==
        //Ӧ��ʹ��strcmp
        if (strcmp(password, "123456") == 0)//���Ƚ������ַ������ʱstrcmp�᷵��0
        {//strtmp���ڱȽϰ�˹����ֵ
            printf("��½�ɹ�\n");
            break;
        }
        else
        {
            printf("���������������");
        }
    }
    if (i == 3)
    {
        printf("��������������˳�����");
    }
    return 0;
}

