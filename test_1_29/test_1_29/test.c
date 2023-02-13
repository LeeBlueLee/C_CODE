#include "game.h"
void menu()
{
	printf("*********************\n");
	printf("*****  1.play   *****\n");
	printf("*****  0.exit   *****\n");
	printf("*********************\n");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL);//��ʼ������
	PrintBoard(board, ROW, COL);//��ӡ����

	char ret = 0;
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);//��ӡ����
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		
		//��������
		ComputerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if(ret=='*')
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
	PrintBoard(board, ROW, COL);//����ӡ��֣�����ս��

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			printf("��Ϸ����");
			break;
		default:
			printf("���������룺>");
		}
	} while (input);
	return 0;
}