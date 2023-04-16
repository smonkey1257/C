#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void game()
{
	char board[ROW][COL];

	//��ʼ��
	int_board(board, ROW, COL);

	//��ӡ����
	board_printed(board, ROW, COL);

	/*����*/
	char ret = 0;
	while (1)
	{
	//�������
		playmove(board, ROW, COL);
		board_printed(board, ROW, COL);
	//�ж�˭Ӯ
		ret = who_win(board, ROW, COL);
		/*û���˳�ѭ�������������򽫽�����ѭ��*/
		if (ret != 'C')
			break;

	//��������
		computermove(board, ROW, COL);
		board_printed(board, ROW, COL);
	//�ж�˭Ӯ
		ret = who_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'O')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if (ret == 'X')
	{
		printf("����Ӯ�ˣ�\n");
	}
	else if (ret == 'A')
	{
		printf("����൱��\n");
	}
	board_printed(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		/*�˵�*/
		menu();
		printf("���ڼ���������ѡ��> ");
		/*���ط�֧ʵ����Ϸ����*/
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("����ָ���������������\n");
			break;

		}
	} while (input);
	return 0;
}