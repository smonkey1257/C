//��Ϸ������ܱ�д��������

#include "game.h"

void game()
{
	/*��������������*/
	char board[ROW][COL];//����꣬�����޸�

	/*��ʼ������ ���� �ո� */
	Int_board(board, ROW, COL);

	/*��ӡ����*/
	board_printed(board, ROW, COL);

	//Ҫ�������ֱ���ֳ�ʤ������ѭ��
	while (1)
	{
		/*�������*/
		playmove(board, ROW, COL);
		board_printed(board, ROW, COL);
		/*�ж���Ӯ���Ƴ�ѭ��*/


		/*��������*/
		computermove(board, ROW, COL);
		board_printed(board, ROW, COL);
		/*�ж���Ӯ���Ƴ�ѭ��*/

	}

}



int main()
{
	int input = 0;

	do
	{
		/*�˵�*/
		menu();
		printf("���ڼ���������ѡ��> ");
		/*���ط�֧ʵ����Ϸ����*/
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("����ָ���������������\n");
			break;

		}
	} while (input);
	return 0;
}