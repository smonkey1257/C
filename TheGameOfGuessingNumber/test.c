#define _CRT_SECURE_NO_WARNINGS 1

//����ͷ�ļ�����
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//��ӡ�˵�
void menu()
{
	printf("*************************\n");
	printf("***     1 ��ʼ��Ϸ     ***\n");
	printf("***     0 �˳���Ϸ     ***\n");
	printf("*************************\n");
}


void game()
{
	//1. �����������������Χ 0 ~ 100.
	int guess = rand() % 100 + 1;
	
	
	//2. ��Ҳ�����
	int answer = 0;

	while (1)
	{
		printf("����������:>");
		(void)scanf("%d", &answer);

		//�ж��Ƿ���ȷ
		if (answer < guess)
		{
			printf("���ź�����С��\n");

		}
		else if (answer > guess)
		{
			printf("���ź����´���\n");
		}
		else
		{
			printf("\n*��ϲ�㣬�¶���!*\n");
			int choose = 0;

			Sleep(1000);
			system("cls");

			printf("�����Ƿ��ټ�����Ϸ��\n");
			printf("Yes ������ 1\n");
			printf("No  ������ 0\n");
			printf("��������ѡ����:>");
			(void)scanf("%d", &choose);
			if (!choose)
				exit(0);
			break;
		}
	}
}


//�������������ܣ�
int main(void)
{
	//��Ϸ��������ִ�в�ͬ��ָ��
	int input = 0;
	
	//�����������㣨ֻ����һ�Σ�(�����仯������ -> ʱ���)
	srand((unsigned int)time(NULL));

	do
	{
		//��ӡС��Ϸ�˵�
		menu();
		printf("������ָ��(0 �� 1):>");
		(void)scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			Sleep(500);
			system("cls");
			break;
		case 1:
			game();
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("ָ������������������룡\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}