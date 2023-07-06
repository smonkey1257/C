#define _CRT_SECURE_NO_WARNINGS 1

/*杨氏矩阵

作业内容
有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。

要求：时间复杂度小于O(N);*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int target = 12, flag = 0;
	for (int i = 2; i > 0; i--)
	{
		flag = 0;
		if (arr[i][0] > target)
		{
			continue;
		}
		else
		{
			for (int j = 0; j < 3; j++)
				if (arr[i][j] == target)
					flag = 1;
		}
		if (flag)
		{
			printf("找到了\n");
			break;
	}

	return 0;
}

void InitArr(int** parr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &parr[i][j]);
		}
	}
}


PrintArr(int** parr, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", parr[i][j]);
		}
	}
}

int main(void)
{
	int row = 0, col = 0;		//数字矩阵的行、列
	int target = 5;				//目标数字
	int flag = 0;				//判断是否找到的标志

	scanf("%d %d", &row, &col);
	int** parr = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
		parr[i] = (int*)malloc(col * sizeof(int));

	InitArr(parr, row, col);
	//PrintArr(parr, row, col);

	for(int i = row-1; i >= 0; i--)
	{
		flag = 0;
		if (parr[i][0] > target)
		{
			continue;
		}
		else
		{
			for (int j = 0; j < col; j++)
				if (parr[i][j] == target)
					flag = 1;
					
		}
		if (flag)
		{
			printf("找到了\n");
			break;
		}
	}
	return 0;
}



/* 字符串左旋

作业内容
实现一个函数，可以左旋字符串中的k个字符。

例如：

ABCD左旋一个字符得到BCDA

ABCD左旋两个字符得到CDAB */
#include <stdio.h>
#include <string.h>

char* levorotation(char str[], int k)
{
	int len = (int)strlen(str);//记录字符串长度

	int i = 0;
	for (i = 0; i < k; i++)//左旋K次
	{
		char tmp = str[0];
		int j = 0;
		for (j = 1; j < len; j++)//一次挪动 strlen(str)-1 个字符
		{
			str[j - 1] = str[j];
		}
		str[j-1] = tmp;//循环结束后 j = len
	}
	return str;
}

int main(void)
{
	int k = 0;
	char str[20] = "abcd";

	scanf("%d", &k);
	printf("%s\n", levorotation(str, k));

	return 0;
}



/*字符串旋转结果

作业内容
写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。

例如：给定s1 =AABCD和s2 = BCDAA，返回1

给定s1=abcd和s2=ACBD，返回0.

AABCD左旋一个字符得到ABCDA

AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC*/
#include <stdio.h>
#include <string.h>

int isLevorotation(char source[], char destination[])
{
	int len = (int)strlen(source);

	int i = 0;
	for (i = 0; i < len; i++)//字符排列结果有 len 个
	{
		char tmp = source[0];
		int j = 0;
		for (j = 1; j < len; j++)//一次挪动 strlen(str)-1 个字符
		{
			source[j - 1] = source[j];
		}
		source[j-1] = tmp;//循环结束后 j = len

		if (strcmp(source, destination) == 0)
			return 1;
	}
	return 0;
}

int main(void)
{
	char s1[20] = "AABCD";
	char s2[20] = "BCDAA";

	int ret = isLevorotation(s1, s2);
	ret == 1 ? printf("yes\n") : printf("no\n");

	return 0;
}