#define _CRT_SECURE_NO_WARNINGS

/*����һ���������������λ��1�ĸ���*/

//����һ������
/* num = 15
00001111 & 00000001 = 00000001 ����> count + 1 = 1
num >> 1
00000111 & 00000001 = 00000001 ����> count + 1 = 2
�����Դ�����
*/
//#include<stdio.h>
//
//int statistics_1(int num)//��������
//{
//	int i = 0;
//	int count = 0;//����count��¼����
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
//	scanf("%d", &num);//���� - OK / ���� - ҲOK
//
//	printf("������λ��1�ĸ���Ϊ:%d\n", statistics_1(num));//��ʽ����
//
//	return 0;
//}

//��������
/*���� num = 30
 30�Ķ���������Ϊ11110��������30 % 2�����Ϊ0��Ȼ����30 / 2�����Ϊ15��
 15�Ķ���������Ϊ01111��������15 % 2�����Ϊ1��������15 / 2�����Ϊ 7��
 7 �Ķ���������Ϊ00111�������� 7 % 2�����Ϊ1�������� 7 / 2�����Ϊ 3��
 3 �Ķ���������Ϊ00011�������� 3 % 2�����Ϊ1�������� 3 / 2�����Ϊ 1��
 1 �Ķ���������Ϊ00001�������� 1 % 2�����Ϊ1�������� 1 / 2�����Ϊ 0.
����ʵ���ַ�����������N % 10�������λ����һ���ģ�

*/
//#include<stdio.h>
//
////int statistics_1(int num)//��num<0ʱ����������
//int statistics_1(unsigned int num)//�ĳ�unsigned int����
//{
//	int count = 0;//����count��¼����
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
//	scanf("%d", &num);//���� - OK / ���� - ҲOK
//
//	printf("������λ��1�ĸ���Ϊ:%d\n", statistics_1(num));//��ʽ����
//
//	return 0;
//}

//��������num & (num - 1)
//�Ż�������ѭ�����������ұ���int����
//#include<stdio.h>
//
//int statistics_1(int num)//��������
//{
//
//	int count = 0;//����count��¼����
//
//	while (num)
//	{
//		num = num & (num - 1);//ִ�м��Σ��м���1
//		count++;
//	}
//
//	return count;
//}
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);//���� - OK / ���� - ҲOK
//
//	printf("������λ��1�ĸ���Ϊ:%d\n", statistics_1(num));//��ʽ����
//
//	return 0;
//}


/*�����������������ж����������Ķ�����λ�в�ͬλ�ĸ���*/

//����һ���ж�ÿһλ�Ƿ���ͬ������ͬ��1��
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

//�����������������1
//int statistics_save(int num1, int num2)
//{
//	int ret = num1 ^ num2;
//
//	int count = 0;//����count��¼����
//	
//	while (ret)
//	{
//		ret = ret & (ret - 1);//ִ�м��Σ��м���1
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
//	printf("���������Ķ�����λ�в�ͬλ�ĸ�����%d\n", statistics_save(num1, num2));
//
//	return 0;
//}


/*��ӡһ�����Ķ�����λ�е�����λ��ż��λ*/
//#include<stdio.h>
//int main(void)
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	int i = 0;
//	printf("ż��λ��");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n����λ��");
//	for (i = 32; i > 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	
//	return 0;
//}

/*��������������ȼ�*/
//int main()
//{
//	int i = 20;
//	int j = 10;
//	int c = 3;
//
//	c *= i + j;
//
//	printf("%d\n", c);//50��90��
//	/*
//	+ �˷������ȼ� ���� *= ���ϸ�ֵ�������Ϊ 90��
//	*/
//	return 0;
//}