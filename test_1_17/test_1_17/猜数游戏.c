//дһ����������Ϸ
//1. �Զ�����һ��1-100֮��������
//2. ������
// a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
// b. ��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸһ��һֱ�棬�����˳���Ϸ

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//rand����ͷ�ļ�
#include<time.h>//time����ͷ�ļ�����ȡʱ���

void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}

void game()
{
	//��������Ϸ��ʵ��
	//1.���������
	//��һ���⺯�� - rand
	//rand����������һ��0-32767֮�������
	//ʱ����һֱ�仯�� - ʱ���

	//srand����㣬ÿ�δ���ֵ��һ������֮��ÿ�����rand���ɵ�ֵ�Ͳ�һ��
	//������Ҫ��ÿ��srand�ﴫ���ֵ��һ�����������������ʱ���

	//srand((unsigned int)time(NULL));
	//(1)time������������������óɿ�ָ��
	//(2)srand���������Ҫ��unsigned int����,������һ��ǿ��ת������
	//��һ������һ����㲻�������ɵ�����಻����������ȣ�
	// ��ֻ������һ�ξ͹��ˣ���ôʵ�֣���������һ��ͷѭ���⣡��

	//OK!�������ɵ���������ˣ�����Ҫ�����ɷ�ΧΪ1~100

	int ret = rand()%100+1;//%100��������0~99��Ȼ��+1����Χ����1~100
	//printf("%d\n",ret);//����ÿһ�����ɵ��������һ����˳�� - �������⣬������⣡

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//��Ϊһ��ʼ��Ҫ��һ��������do-whileѭ��
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);//defaultʱ���û��������룬
//ͬʱ�ж�������Ϊ0ѭ�������Խ��У�������input���ж�����������
	return 0;
}