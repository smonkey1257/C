//д�꺯���󣬸ô���Ҫ�Ǻ�������������������ͷ�ļ�����
/*ͷ�ļ�*/
#include<stdio.h>


/*��������*/
#define ROW 3
#define COL 3







/*��������*/

//�˵�
void menu();

//���̳�ʼ��
void Int_board(char board[ROW][COL], int row, int col);

//��ӡ����
void board_printed(char board[ROW][COL], int row, int col);

//�������
void playmove(char board[ROW][COL], int row, int col);

//��������
void computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char iswin(char board[ROW][COL], int row, int col);
