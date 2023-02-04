#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("*****  1.play   *****\n");
	printf("*****  0.exit   *****\n");
	printf("*********************\n");
}

void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board,ROW,COL);//Ҫ���к���
	//��ʼ������Ϊ��Ϸģ���ϣ���game.h
	
	//��ӡһ������ - �����Ǵ�ӡ���������
	DisplayBoard(board,ROW,COL);

	char ret = 0;//Ϊ���ж�����ѭ����Ҳ��ʹ�����Զ�����ѭ����

	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);//��ҵ��к�����Ҫ����ȥ�ж���û��Խ��
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		ret=IsWin(board,ROW,COL);
		if (ret != 'C')//�ܹ������������Cʱ��Ϸ����
		{
			break;//�ֳ�ʤ���Ϳ���������Ϸ��
		}

		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ����Ϸ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')//��ֻ��ret�洢��Ӱ��
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);//����ӡ��֣�����ս��

}

int main()
{
	int input = 0;
	//rand����ʹ��ǰ����Ҫʹ��srand�����������һ�����Էŵ�main������ȥ��
	srand((unsigned int)time(NULL));//��time�����ķ���ֵ��Ϊ�������������
	//time��������ʱ��һ����ָ��
	//ͬʱsrand����Ҫ�����Ϊunsigned������ǿ������ת��һ��
	//����Ҫ��ͷ�ļ�������ͷ�ļ��ͺã���Ϊ����������ͷ�ļ�
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}