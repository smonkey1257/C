//【PTA】计算序列 1 - 1/3 + 1/5 - 1/7 + ... 的前N项之和。
//#include <stdio.h>
//int main(void)
//{
//    unsigned int n = 0, i = 0;
//    scanf("%d", &n);
//    double sum = 0, sum1 = 0, sum2 = 0;
//    for (i = 1; i <= n; i++)//一个赋值号终成千古恨，焯！
//    {
//        if (0 == i % 2)
//            sum1 -= 1.0 / (2 * i - 1);
//        else
//            sum2 += 1.0 / (2 * i - 1);//                                      第一版本
//    }
//    sum = sum1 + sum2;
//    printf("sum = %0.6lf\n", sum);
//    return 0;
//}
//有问题又说不上来……
//计算序列 1 - 1/3 + 1/5 - 1/7 + ... 的前N项之和。
//int main(void)
//{
//	unsigned int n = 0, i = 0, j = 1;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += j * 1.0 / (2 * i - 1);
//		j *= -1;             //隔一项符号发生变化可以考虑这么写                 第二版本
//	}
//	printf("sum = %0.6lf\n", sum);
//	return 0;
//}这是查了后的第二版本



//#include <stdio.h>
//int main()
//{
//    int N, i, flag = 1;
//    double sum = 0;
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++)
//    {
//        sum += flag * 1.0 / (2 * i - 1);                              //这是别人的答案
//        flag *= -1;
//    }
//    printf("%.10lf", sum);
//    return 0;
//}



//循环实践题目

//                                             一、计算 n 的阶乘

#include <stdio.h>

//方法一：循环；
//int main(void)
//{
//	int i = 1,n = 1;
//	double factorial = 1;
//	scanf("%d", &n);
//	if (0 == n)
//		printf("0 的阶乘为 1");
//	else
//	{
//		for (i = 1; i <= n; i++)
//			factorial *= i;
//		printf("%d 的阶乘为 %0.0lf",n,factorial);
//	}
//	return 0;
//}

//方法二：函数递归
//#include <stdio.h>
//double fun(int n)
//{
//	if (0 == n || 1 == n)
//		return 1;
//	else
//		return fun(n - 1) * n;
//}
//int main(void)
//{
//	int n = 0;
//	double factorial = 0;
//	scanf("%d", &n);
//	factorial = fun(n);
//	printf("%d 的阶乘为 %0.0lf\n", n, factorial);
//	return 0;
//}


//                                       二、计算1！+ 2! + 3！+ …… + n！
//方法：循环
//   首先：嵌套循环
//#include <stdio.h>
//int main(void)
//{
//	int n = 0, i = 0, ret = 1,j = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)//是否包括 n 要考虑清楚!!!
//			ret *= i;
//		sum += ret;
//	}
//	printf("前%d项的阶乘之和为%0.0lf\n", n, sum);
//	return 0;
//}


//         算法优化
//#include <stdio.h>
//int main(void)
//{
//	int n = 0, i = 0, ret = 1;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)//是否包括 n 要考虑清楚!!!
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("前%d项的阶乘之和为%0.0lf\n", n, sum);
//	return 0;
//}



//                            三、编写代码，演示多个字符从两端移动，向中间汇聚。
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main(void)
//{
//	char arr1[] = "welcome to language C!!!!!!";
//	char arr2[] = "###########################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//1.输出太快，视觉效果不够好，使用睡眠函数sleep()（该函数以毫秒为单位）{新函数}
//2.输出界面不够简洁，因此使用函数清屏system("cls");
//3.防止被清没了，循环结束后在输出一次
//                                 此处认识到两个新的函数，以及一个新的文件库。需恶补



//                                 四、编写代码实现，模拟用户登录情景，并且只能登陆三次。
//                              只允许输入三次密码，如果密码正确则提示登陆成功；否则退出程序
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main(void)
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (0 == strcmp(password, "12574680"))
//		{
//			printf("密码正确，登陆成功！\n");
//			break;
//		}
//		else
//			switch (i)
//			{
//			case 0:
//				printf("第一次密码输入错误，请重新输入密码！\n");
//				Sleep(800);
//				system("cls");
//				break;
//			case 1:
//				printf("第二次密码输入错误，请重新输入密码！\n");
//				Sleep(800);
//				system("cls");
//				break;
//			case 2:
//				printf("第三次密码输入错误，机会已用完！\n");//    switch语句是一条语句，else后可以不用大括号括起来
//			}
//	}
//	Sleep(1000);
//	system("cls");
//	if (i == 3)
//		
//		printf("三次密码输入均错误，即将退出程序！\n");
//	return 0;
//}
//




//                                           循环写一个猜数字游戏
//游戏内容：
// 游戏产生一个 1 - 100 之间的随机数，玩家可以输入一个区间内的数字
// a. 猜对了，就恭喜你，并且游戏结束
// b. 猜错了，就会告诉你，猜大了还是猜小了，然后继续猜，直至猜对
// c. 游戏可以一直玩，除非你选择主动退出游戏
// 
// 1. 生成菜单
// 2. 生成随机数（难，没学过相关的库函数）
// 3.建立循环
//

//#include <stdio.h>
//
////用途：菜单显示
//void menu()
//{
//	printf("***********************************\n");
//	printf("**********    1. PLAY    **********\n");
//	printf("**********    0. EXIT    **********\n");
//	printf("***********************************\n");
//}
//
////用途：猜数字
//#include <stdlib.h>
//#include <time.h> 
//#include <windows.h> 
//void GAME()
//{
//	int guess = 0;
//
//	int set = rand() % 100 + 1;//问题二：1 - 100的随机数，时间戳
//
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess > set)
//		{
//			printf("猜大了！\n");
//		}
//		else if (guess < set)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
//			Sleep(1000);
//			system("cls");
//
//			break;
//		}
//
//	}
//}
//
//int i = 1;
//int main(void)
//{
//	//do-while 循环，一上手先玩一次。
//	//下一步，显示菜单 -> 自定义一个void型函数
//	//建立一个变量，输入 1 开始游戏；输入 0 退出游戏，其余数字为无效输入
//	//自定义一个函数实现游戏过程
//
//	int input = 0;//问题一：不用每次循环创建变量input，因此放在函数外
//	srand((unsigned)time(NULL));//问题三：放在最前面避免放在循环内起点相同
//
//	do
//	{
//		menu();//菜单
//		if (1 == i)
//		{
//			printf("请选择操作（1/0）：>");
//		}
//		else
//		{
//			printf("是否开启新的游戏：>");
//		}
//		
//		scanf("%d", &input);
//
//		switch (input)//问题四：switch比if-slse实现起来好一点
//		{
//		case 1:
//			printf("游戏开始\n");
//			GAME();
//			i++;
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请输入正确的指令\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//                                                      求两个数的最大公约数
//                                         （拓展：最小公倍数 = m * n / 最大公约数）
//关键点在于数学逻辑，如何求公约数
//在数学逻辑上，最大公约数肯定 <= 两个数中的较小值
//因此，先找出较小值，然后找出令 min % x（最大公约数）== 0

//#include <stdio.h>
//int main(void)
//{
//	int m = 0, n = 0;
//	scanf("%d %d", &m, &n);
//
//	int min = 0;
//	if (m > n)
//		min = n;
//	else
//		min = m;
//
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("最大公约数是：%d\n", min);
//			break;
//		}
//		min--;
//	}
//
//	return 0;
//}

//此外可以用辗转相除法（逻辑上不太好懂） 算法优化！
// m % n == t  -->  m = n , n = t  -->  t == 0
//#include<stdio.h>
//int main(void)
//{
//	int m = 0, n = 0, t = 0;
//	scanf("%d %d", &m, &n);
//	while (t = m % n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("最大公约数是：%d\n", n);
//	return 0;
//}
//麻了，做学校给的题目时感觉辗转相除法难懂的一批，结果就这？学校误我！



//                                         goto语句 与 猪 与 关机
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main(void)
//{
//	char input[20] = { 0 };
//
//	//一打开程序就关机
//	system("shutdown -s -t 120");
//
//again:
//	printf("你的电脑将在两分钟后关机，如果输入：“我是猪”后按下回车你的电脑就会取消关机");
//	scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");//取消关机指令
//		}
//		else
//		{
//			goto again;//goto语句建立循环
//		}
//	return 0;
//}



//                               输出100 - 200内的素数

//什么是素数？
//素数 = 质数 --> 能够被1和它本身整除的数
//换而言之，不能够被 2 - n-1 整除
//
//int main(void)
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for(j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//跳出循环后如果j = i，则i是素数
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}

//接下来：算法优化时间
//1.偶数必不可能是素数，i 可以排除偶数
//2.由（1）得：j 必不可能是偶数
//3. 一个数 i = a * b，则a和b中至少有一个 <= i的被开方数
//I如果连小于被开方数的数都不能整除，那么大于被开方数的数也绝无可能
//#include<stdio.h>
//#include<math.h>
//int main(void)
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//修改一
//	{
//		int j = 0;
//		int flag = 1;
//		for(j = 3; j <= sqrt(i); j+=2)//修改二+三
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		//跳出循环后如果j = i，则i是素数
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}


///*
//求10个数的最大值
//*/
//
//int main()
//{
//	////定义数组存放十个数
//	int arr[10] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	/*定义变量max存放最大值*/
//
//	/*然而代码还是有问题的，当数组内存的数是负数时，输出是0*/
//	/*int max = 0;*/
//	int max = arr[0];//改后！！
//
//	/*建立循环寻找最大值*/
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d", max);
//
//	return 0;
//}



/*
打印9 * 9 乘法口诀表
本质上来说就是打印几行、打印几列的问题
*/
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	for (i = 1; i < 9; i++)
//	{
//		/*打印行*/
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			/*打印列*/
//			//printf("%d * %d = %d", i, j, i * j);
//			/*可以打印但很乱，*/
//			//printf("%d*%d=%2d ", i, j, i * j);
//			/* %d 表示宽度为二，不够用空格补充，右对齐*/
//			printf("%d*%d=%-2d ", i, j, i * j);
//			/* %d 表示宽度为二，不够用空格补充，'-'表示左对齐*/
//		}
//		/*每打印完一行后换行*/
//		printf("\n");
//	}
//
//	return 0;
//}