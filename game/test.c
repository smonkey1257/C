#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void game()
{
	char board[ROW][COL];

	//初始化
	int_board(board, ROW, COL);

	//打印棋盘
	board_printed(board, ROW, COL);

	/*下棋*/
	char ret = 0;
	while (1)
	{
	//玩家下棋
		playmove(board, ROW, COL);
		board_printed(board, ROW, COL);
	//判断谁赢
		ret = who_win(board, ROW, COL);
		/*没有退出循环的条件，程序将进入死循环*/
		if (ret != 'C')
			break;

	//电脑下棋
		computermove(board, ROW, COL);
		board_printed(board, ROW, COL);
	//判断谁赢
		ret = who_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == 'O')
	{
		printf("玩家赢了！\n");
	}
	else if (ret == 'X')
	{
		printf("电脑赢了！\n");
	}
	else if (ret == 'A')
	{
		printf("旗鼓相当！\n");
	}
	board_printed(board, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		/*菜单*/
		menu();
		printf("请在键盘上输入选择：> ");
		/*多重分支实现游戏大框架*/
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入指令错误，请重新输入\n");
			break;

		}
	} while (input);
	return 0;
}