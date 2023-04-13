//游戏代码大框架编写，及测试

#include "game.h"

void game()
{
	/*创建数组存放棋盘*/
	char board[ROW][COL];//定义宏，方便修改

	/*初始化棋盘 —— 空格 */
	Int_board(board, ROW, COL);

	/*打印棋盘*/
	board_printed(board, ROW, COL);

	//要多次下棋直至分出胜负——循环
	while (1)
	{
		/*玩家下棋*/
		playmove(board, ROW, COL);
		board_printed(board, ROW, COL);
		/*判断输赢并推出循环*/


		/*电脑下棋*/
		computermove(board, ROW, COL);
		board_printed(board, ROW, COL);
		/*判断输赢并推出循环*/

	}

}



int main()
{
	int input = 0;

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