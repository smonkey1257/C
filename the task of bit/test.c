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
	int row = 0, col = 0;		//���־�����С���
	int target = 5;				//Ŀ������
	int flag = 0;				//�ж��Ƿ��ҵ��ı�־

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
			printf("�ҵ���\n");
			break;
		}
	}
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