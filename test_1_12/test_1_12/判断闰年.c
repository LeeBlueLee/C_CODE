//打印1000年到2000年之间的闰年
#include<stdio.h>
int main()
{
	//四年一闰，一百年不闰，四百年再闰
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
