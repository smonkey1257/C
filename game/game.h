/*ͷ�ļ�����*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/*��������*/
#define ROW 3
#define COL 3



/*��������*/

//��ӡ�˵�
void menu();

//��ʼ������
void int_board(char board[ROW][COL], int row, int col);

//��ӡ����
void board_printed(char board[ROW][COL], int row, int col);

//�������
void playmove(char board[ROW][COL], int row, int col);

//��������
void computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char who_win(char board[ROW][COL], int row, int col);