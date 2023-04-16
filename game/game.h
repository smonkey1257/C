/*头文件包含*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/*符号声明*/
#define ROW 3
#define COL 3



/*函数声明*/

//打印菜单
void menu();

//初始化棋盘
void int_board(char board[ROW][COL], int row, int col);

//打印棋盘
void board_printed(char board[ROW][COL], int row, int col);

//玩家下棋
void playmove(char board[ROW][COL], int row, int col);

//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//判断输赢
char who_win(char board[ROW][COL], int row, int col);