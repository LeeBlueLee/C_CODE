#include <stdio.h>
int main()
{
    int a = 2;
    int b = 3;
    int c = 1;
    scanf_s("%d%d%d", &a, &b, &c);
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b < c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("a=%d b=%d c=%d\n", a, b, c);
    return 0;
}
//����˼·��������������ظ�ִ�н���ֵ�Ķ��������Ա�һ������
#include <stdio.h>
 exc(int num1, int num2)
{
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
}
 //����������д���ܷ�������ֵ�Ǵ������ʱ������