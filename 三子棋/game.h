//写完函数后，该处主要是函数声明，符号声明，头文件引用
/*头文件*/
#include<stdio.h>


/*符号声明*/
#define ROW 3
#define COL 3







/*函数声明*/

//菜单
void menu();

//棋盘初始化
void Int_board(char board[ROW][COL], int row, int col);

//打印棋盘
void board_printed(char board[ROW][COL], int row, int col);

//玩家下棋
void playmove(char board[ROW][COL], int row, int col);

//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//判断输赢
char iswin(char board[ROW][COL], int row, int col);
