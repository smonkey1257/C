#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("****************************************\n");
	printf("**********       1.PLAY       **********\n");
	printf("**********       0.EXCT       **********\n");
	printf("****************************************\n");
}

void int_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void board_printed(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ��һ��
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ڶ���
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}

void playmove(char board[ROW][COL], int row, int col)
{

	int x = 0;
	int y = 0;
	while (1)
	{
		//��������
		printf("�����\n");
		printf("����������:> ");
		scanf("%d %d", &x, &y);
		//��֤����Ϸ���
		if (x >= 1 && x <= row && y <= col && y >= 1)
		{
		//��֤�����Ƿ�Ƿ�ռ��
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';//Ϊʲô�������������������
				/*�϶��Ǵ�ӡ��������*/
				break;
			}
			else
			{
				printf("�����Ѿ���ռ�ã��������������꣡");
			}
		}
		else
		{
			printf("����Ƿ����������������꣡");
		}
	}
}

void computermove(char board[ROW][COL], int row, int col)//���Ż�
{
	printf("������\n");
	/*����Ϊ���ֵ*/
	while (1) 
	{
		//����㣺����Ѿ���ռ�ã���Ҫ��������
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}

/*״̬��
1.���Ӯ�������� O
2.����Ӯ�������� X
3.ƽ��  �������� A
4.����  �������� C
*/
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char who_win(char board[ROW][COL], int row, int col)
{
	/*Ӯ*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
	//���У�
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
			return board[i][0];
	}
	for (i = 0; i < col; i++)
	{
		//����;
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[0][i];
	}

	//�ɶԽ��ߣ�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
	{
		return board[0][0];
	}
	else if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[0][2];
	}
	/*ƽ��*/
	int ret = isfull(board, row, col);
	if (ret == 1)
		return 'A';
	return 'C';
}