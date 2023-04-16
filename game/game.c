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
		//打印第一行
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
		//打印第二行
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
		//输入坐标
		printf("玩家走\n");
		printf("请输入坐标:> ");
		scanf("%d %d", &x, &y);
		//验证坐标合法性
		if (x >= 1 && x <= row && y <= col && y >= 1)
		{
		//验证坐标是否非法占用
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';//为什么不出结果？！！！！！
				/*肯定是打印出了问题*/
				break;
			}
			else
			{
				printf("坐标已经被占用，请重新输入坐标！");
			}
		}
		else
		{
			printf("坐标非法，请重新输入坐标！");
		}
	}
}

void computermove(char board[ROW][COL], int row, int col)//待优化
{
	printf("电脑走\n");
	/*坐标为随机值*/
	while (1) 
	{
		//错误点：如果已经被占用，就要重新输入
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}

/*状态：
1.玩家赢——返回 O
2.电脑赢——返回 X
3.平局  ——返回 A
4.继续  ——返回 C
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
	/*赢*/
	int i = 0;
	for (i = 0; i < row; i++)
	{
	//成行；
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][2] != ' ')
			return board[i][0];
	}
	for (i = 0; i < col; i++)
	{
		//成列;
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[2][i] != ' ')
			return board[0][i];
	}

	//成对角线；
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[2][2] != ' ')
	{
		return board[0][0];
	}
	else if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
	{
		return board[0][2];
	}
	/*平局*/
	int ret = isfull(board, row, col);
	if (ret == 1)
		return 'A';
	return 'C';
}