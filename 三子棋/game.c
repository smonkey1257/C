//游戏逻辑函数的实现

#include "game.h"

//打印菜单
void menu()
{
	printf("****************************************\n");
	printf("**********       1.PLAY       **********\n");
	printf("**********       0.EXCT       **********\n");
	printf("****************************************\n");
}
//初始化棋盘
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

//打印棋盘
void board_printed(char board[ROW][COL], int row, int col)
{
	int j = 0;
	/*两行一组，组数*/
	for (j = 0; j < row; j++)
	{
		int i = 0;
		for (i = 0; i < col; i++)//一行的内容
		{
			//printf(" %c ", ' ');额外加空格造成重复赋值
			printf(" %c ", board[i][j]);
			if (i < col - 1)
				printf("|");
		}
		printf("\n");
		if (j < col - 1)//最后一组时，第二行的内容不打印了
		{
			for (i = 0; i < col; i++)//一行的内容
			{
				printf("---");
				if (i < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

/*玩家下棋*/
void playmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");

	while (1)
	{
		printf("请输入坐标；> ");
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
				printf("坐标被占用，请重新输入！\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}

/*电脑下棋*/
//要点1：随机坐标； 2：判断占用
void computermove(char board[ROW][COL], int row, int col)
{
	int x = rand();
	int y = rand();
	while (1)
	{
		/*当电脑给出的随机坐标的内存中存储的不再是空格时，要重新输入*/
		if (board[x][y] == ' ')
			board[x][y] == 'X';
	}
}

/*
玩家赢——>返回'*'
电脑赢——>返回'X'
平局  ——>返回'Q'
继续  ——>返回'C'
*/
char iswin(char board[ROW][COL], int row, int col)
{
	/*赢*/
	//三行；
	int i = 0;  
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//三列；
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//对角线
	if()
}