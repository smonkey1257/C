#define _CRT_SECURE_NO_WARNINGS 1

/*���Ͼ���

��ҵ����
��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�

Ҫ��ʱ�临�Ӷ�С��O(N);*/

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
			printf("�ҵ���\n");
			break;
	}

	return 0;
}


//����һ��malloc���ٶ�ά����
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


//�Ľ���������ѭ���򻯳�һ��
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
	int row = 0, col = 0;		//���־�����С���
	int target = 5;				//Ŀ������
	int flag = 0;				//�ж��Ƿ��ҵ��ı�־

	scanf("%d %d", &row, &col);
	int** parr = (int**)malloc(row * sizeof(int*));
	for (int i = 0; i < row; i++)
		parr[i] = (int*)malloc(col * sizeof(int));

	InitArr(parr, row, col);
	//PrintArr(parr, row, col);

	if (findnum(parr, row, col, target))
		printf("�ҵ���\n");
	else
		printf("û�ҵ�\n");

	return 0;
}



/* �ַ�������

��ҵ����
ʵ��һ�����������������ַ����е�k���ַ���

���磺

ABCD����һ���ַ��õ�BCDA

ABCD���������ַ��õ�CDAB */
#include <stdio.h>
#include <string.h>

char* levorotation(char str[], int k)
{
	int len = (int)strlen(str);//��¼�ַ�������

	int i = 0;
	for (i = 0; i < k; i++)//����K��
	{
		char tmp = str[0];
		int j = 0;
		for (j = 1; j < len; j++)//һ��Ų�� strlen(str)-1 ���ַ�
		{
			str[j - 1] = str[j];
		}
		str[j-1] = tmp;//ѭ�������� j = len
	}
	return str;
}


//�Ľ�����ٷ�����>������ת
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



/*�ַ�����ת���

��ҵ����
дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����

���磺����s1 =AABCD��s2 = BCDAA������1

����s1=abcd��s2=ACBD������0.

AABCD����һ���ַ��õ�ABCDA

AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC*/
#include <stdio.h>
#include <string.h>

int isLevorotation(char source[], char destination[])
{
	int len = (int)strlen(source);

	int i = 0;
	for (i = 0; i < len; i++)//�ַ����н���� len ��
	{
		char tmp = source[0];
		int j = 0;
		for (j = 1; j < len; j++)//һ��Ų�� strlen(str)-1 ���ַ�
		{
			source[j - 1] = source[j];
		}
		source[j-1] = tmp;//ѭ�������� j = len

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



/*qsortʹ����ϰ
��ҵ����
��ϰʹ�ÿ⺯����qsort����������͵�����*/
/*�⺯�������������*/


//��ӡ��������(����)
void printArr(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


//��ӡ��������(������)
void printArr_f(double arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%.1lf ", arr[i]);
	}
	printf("\n");
}


//������������
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


//�����ַ�������
int cmp_char(const void* p1, const void* p2)
{
	return *((char*)p1) - *((char*)p2);     //�ַ��������ַ����� VS �ṹ����ַ�������
}

void test_char()
{
	char arr[20] = { "hello bit" };
	int len = (int)strlen(arr);

	printf("%s\n", arr);
	qsort(arr, len, sizeof(char), cmp_char);
	printf("%s\n", arr);
}


//���򸡵�������
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


//����ṹ������(�����ַ�������)
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



/*qsortģ��ʵ��

��ҵ����
ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������*/
//�Ƚ��������ݣ��û�ʵ�֣�
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

//�ڲ��������ȶ���
void swap(char* p1, char* p2, int size)
{
	for (int i = 0; i < size; i++)
	{
		char tmp = p1[i];
		p1[i] = p2[i];
		p2[i] = tmp;
	}
}

//ð�����򣨼ȶ���
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