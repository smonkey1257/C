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


//改良一：malloc开辟二维数组
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


//改进二：两个循环简化成一个
int findnum(int** parr, int row, int col, int target)
{
	int i = row - 1, j = 0;
	while (i >= 0 && j < col)
	{
		if (parr[i][j] < target)
			j++;
		else if (parr[i][j] > target)
			i--;
		else
			return 1;
	}
	return 0;
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

	if (findnum(parr, row, col, target))
		printf("找到了\n");
	else
		printf("没找到\n");

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


//改进：穷举法——>三步反转
char* levorotation(char str[], int k)
{

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



/*qsort使用练习
作业内容
练习使用库函数，qsort排序各种类型的数据*/
/*库函数排序各种数据*/


//打印数组数据(整型)
void printArr(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


//打印数组数据(浮点型)
void printArr_f(double arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%.1lf ", arr[i]);
	}
	printf("\n");
}


//排序整型数据
int cmp_int(const void* p1, const void* p2)
{
	return *((int*)p1) - *((int*)p2);
}

void test_int()
{
	int arr[] = { 7,8,6,5,0,4,9,3,1,2 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArr(arr, size);
	qsort(arr, size, sizeof(int), cmp_int);
	printArr(arr, size);

}


//排序字符型数据
int cmp_char(const void* p1, const void* p2)
{
	return *((char*)p1) - *((char*)p2);     //字符数组内字符排序 VS 结构体的字符串排序
}

void test_char()
{
	char arr[20] = { "hello bit" };
	int len = (int)strlen(arr);

	printf("%s\n", arr);
	qsort(arr, len, sizeof(char), cmp_char);
	printf("%s\n", arr);
}


//排序浮点数数据
int cmp_double(const void* p1, const void* p2)
{
	return *((double*)p1) > *((double*)p2) ? 1 : -1;
}

void test_double()
{
	double arr[] = { 1.1, 2.2, 3.3, 6.6, 7.7, 4.4, 5.5, 8.8, 9.9, 0.0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArr_f(arr, size);
	qsort(arr, size, sizeof(double), cmp_double);
	printArr_f(arr, size);
}


//排序结构体数据(侧重字符串排序)
typedef struct peoInfo
{
	char name[20];
	int age;
}peoInfo;

int cmp_by_name(const void* p1, const void* p2)
{
	return strcmp(((char*)p1), ((char*)p2));
}

void test_struct()
{
	peoInfo arr[] = { { "zhangsan", 15 }, {"lisi", 56}, {"wangwu", 1} };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("%s %s %s\n", arr[0].name, arr[1].name, arr[2].name);
	qsort(arr, size, sizeof(arr[0]), cmp_by_name);
	printf("%s %s %s\n", arr[0].name, arr[1].name, arr[2].name);
}

int main(void)
{
	test_int();
	test_char();
	test_double();
	test_struct();

	return 0;
}



/*qsort模拟实现

作业内容
模仿qsort的功能实现一个通用的冒泡排序*/
//比较整型数据（用户实现）
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

//内部交换（既定）
void swap(char* p1, char* p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = p1[i];
		p1[i] = p2[i];
		p2[i] = tmp;
	}
}

//冒泡排序（既定）
void BubbleSort(void* base, int num, int size, int (*cmp)(const void* p1, const void* p2))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + (j)*size, (char*)base + (j + 1) * size) > 0)
				swap((char*)base + (j)*size, (char*)base + (j + 1) * size, size);
		}
	}
}

int main(void)
{
	int arr[] = { 7,6,5,3,1,0,9,8,2,4 };
	int len = sizeof(arr) / sizeof(arr[0]);

	BubbleSort(arr, len, sizeof(arr[0]), cmp_int);

	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}