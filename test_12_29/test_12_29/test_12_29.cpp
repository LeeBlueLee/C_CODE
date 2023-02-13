#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 3000)
	{
		printf("写代码：%d\n", line);
		line++;
	}
	if (line == 3000)
		printf("好工作");
	return 0;
}