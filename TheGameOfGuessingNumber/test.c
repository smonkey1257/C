#define _CRT_SECURE_NO_WARNINGS 1

//常用头文件包含
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

//打印菜单
void menu()
{
	printf("*************************\n");
	printf("***     1 开始游戏     ***\n");
	printf("***     0 退出游戏     ***\n");
	printf("*************************\n");
}


void game()
{
	//1. 电脑生成随机数，范围 0 ~ 100.
	int guess = rand() % 100 + 1;
	
	
	//2. 玩家猜数字
	int answer = 0;

	while (1)
	{
		printf("请输入数字:>");
		(void)scanf("%d", &answer);

		//判断是否正确
		if (answer < guess)
		{
			printf("很遗憾，猜小了\n");

		}
		else if (answer > guess)
		{
			printf("很遗憾，猜大了\n");
		}
		else
		{
			printf("\n*恭喜你，猜对了!*\n");
			int choose = 0;

			Sleep(1000);
			system("cls");

			printf("请问是否再继续游戏？\n");
			printf("Yes 请输入 1\n");
			printf("No  请输入 0\n");
			printf("请问您的选择是:>");
			(void)scanf("%d", &choose);
			if (!choose)
				exit(0);
			break;
		}
	}
}


//主函数（程序框架）
int main(void)
{
	//游戏根据输入执行不同的指令
	int input = 0;
	
	//随机数生成起点（只调用一次）(持续变化的数字 -> 时间戳)
	srand((unsigned int)time(NULL));

	do
	{
		//打印小游戏菜单
		menu();
		printf("请输入指令(0 或 1):>");
		(void)scanf("%d", &input);

		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			Sleep(500);
			system("cls");
			break;
		case 1:
			game();
			Sleep(1000);
			system("cls");
			break;
		default:
			printf("指令输入错误，请重新输入！\n");
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input);
	return 0;
}