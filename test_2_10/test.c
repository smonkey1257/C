#define _CRT_SECURE_NO_WARNINGS

/*输入一个整数，求二进制位中1的个数*/

//方法一：右移
/* num = 15
00001111 & 00000001 = 00000001 ——> count + 1 = 1
num >> 1
00000111 & 00000001 = 00000001 ——> count + 1 = 2
……以此类推
*/
//#include<stdio.h>
//
//int statistics_1(int num)//函数创建
//{
//	int i = 0;
//	int count = 0;//定义count记录个数
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);//整数 - OK / 负数 - 也OK
//
//	printf("二进制位中1的个数为:%d\n", statistics_1(num));//链式访问
//
//	return 0;
//}

//方法二：
/*假设 num = 30
 30的二进制序列为11110，假如让30 % 2，结果为0，然后让30 / 2，结果为15，
 15的二进制序列为01111，假如让15 % 2，结果为1，接着让15 / 2，结果为 7，
 7 的二进制序列为00111，假如让 7 % 2，结果为1，接着让 7 / 2，结果为 3，
 3 的二进制序列为00011，假如让 3 % 2，结果为1，接着让 3 / 2，结果为 1，
 1 的二进制序列为00001，假如让 1 % 2，结果为1，接着让 1 / 2，结果为 0.
（其实这种方法和正整数N % 10可以求个位数是一样的）

*/
//#include<stdio.h>
//
////int statistics_1(int num)//当num<0时，不成立！
//int statistics_1(unsigned int num)//改成unsigned int类型
//{
//	int count = 0;//定义count记录个数
//	
//	while (num)
//	{
//		if (num % 2)
//			count++;
//		num /= 2;
//	}
//
//	return count;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);//整数 - OK / 负数 - 也OK
//
//	printf("二进制位中1的个数为:%d\n", statistics_1(num));//链式访问
//
//	return 0;
//}

//方法三：num & (num - 1)
//优化：减少循环次数，并且保持int类型
//#include<stdio.h>
//
//int statistics_1(int num)//函数创建
//{
//
//	int count = 0;//定义count记录个数
//
//	while (num)
//	{
//		num = num & (num - 1);//执行几次，有几个1
//		count++;
//	}
//
//	return count;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);//整数 - OK / 负数 - 也OK
//
//	printf("二进制位中1的个数为:%d\n", statistics_1(num));//链式访问
//
//	return 0;
//}


/*输入输入两个数，判断这两个数的二进制位中不同位的个数*/

//方法一：判断每一位是否相同？不相同加1。
#include<stdio.h>
//int statistics_save(int num1, int num2)
//{
//	int i = 0;
//	int count = 0;
//	for (; i < 32; i++)
//	{
//		if (((num1 >> i) & 1) != ((num2 >> i) & 1))
//			count++;
//	}
//	return count;
//}

//方法二：先异或，再找1
//int statistics_save(int num1, int num2)
//{
//	int ret = num1 ^ num2;
//
//	int count = 0;//定义count记录个数
//	
//	while (ret)
//	{
//		ret = ret & (ret - 1);//执行几次，有几个1
//		count++;
//	}
//	return count;
//}
//
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d",&num1, &num2);
//
//	printf("这两个数的二进制位中不同位的个数：%d\n", statistics_save(num1, num2));
//
//	return 0;
//}


/*打印一个数的二进制位中的奇数位和偶数位*/
//#include<stdio.h>
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	printf("偶数位：");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n奇数位：");
//	for (i = 32; i > 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	
//	return 0;
//}

/*考察操作符的优先级*/
//int main()
//{
//	int i = 20;
//	int j = 10;
//	int c = 3;
//
//	c *= i + j;
//
//	printf("%d\n", c);//50？90？
//	/*
//	+ 乘法的优先级 高于 *= 复合赋值符，因此为 90！
//	*/
//	return 0;
//}