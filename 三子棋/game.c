//��Ϸ�߼�������ʵ��

#include "game.h"

//��ӡ�˵�
void menu()
{
	printf("****************************************\n");
	printf("**********       1.PLAY       **********\n");
	printf("**********       0.EXCT       **********\n");
	printf("****************************************\n");
}
//��ʼ������
void Int_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';

		}
	}
}

//��ӡ����
void board_printed(char board[ROW][COL], int row, int col)
{
	int j = 0;
	/*����һ�飬����*/
	for (j = 0; j < row; j++)
	{
		int i = 0;
		for (i = 0; i < col; i++)//һ�е�����
		{
			//printf(" %c ", ' ');����ӿո�����ظ���ֵ
			printf(" %c ", board[i][j]);
			if (i < col - 1)
				printf("|");
		}
		printf("\n");
		if (j < col - 1)//���һ��ʱ���ڶ��е����ݲ���ӡ��
		{
			for (i = 0; i < col; i++)//һ�е�����
			{
				printf("---");
				if (i < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

/*�������*/
void playmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����\n");

	while (1)
	{
		printf("���������ꣻ> ");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���걻ռ�ã����������룡\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}
}

/*��������*/
//Ҫ��1��������ꣻ 2���ж�ռ��
void computermove(char board[ROW][COL], int row, int col)
{
	int x = rand();
	int y = rand();
	while (1)
	{
		/*�����Ը��������������ڴ��д洢�Ĳ����ǿո�ʱ��Ҫ��������*/
		if (board[x][y] == ' ')
			board[x][y] == 'X';
	}
}

/*
���Ӯ����>����'*'
����Ӯ����>����'X'
ƽ��  ����>����'Q'
����  ����>����'C'
*/
char iswin(char board[ROW][COL], int row, int col)
{
	/*Ӯ*/
	//���У�
	int i = 0;  
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//���У�
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//�Խ���
	if()
}