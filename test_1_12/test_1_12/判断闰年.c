//��ӡ1000�굽2000��֮�������
#include<stdio.h>
int main()
{
	//����һ��һ���겻���İ�������
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0)
		{
			if (i % 100 == 0)
			{
				if (i% 400 == 0)
				{
					printf("%d ", i);
				}
			}
			else
			{
				printf("%d ", i);
			}
		}
	}
	return 0;
}
int main()
{
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
