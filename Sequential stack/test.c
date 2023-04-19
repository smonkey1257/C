#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

//���Գ�ʼ���Ͳ��루��ɣ�
void test1()
{
	//��������ջ��˵������һ���ṹ��������дָ��дϰ���ˣ�
	ST st;
	
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	StackDestroy(&st);
}

//���Գ�ջ
void test2()
{
	ST st;

	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	StackPop(&st);
	StackPop(&st);
	StackPop(&st);
	StackPop(&st);

	StackDestroy(&st);
}

//���Է���ջ���ݸ���
void test3()
{
	ST st;

	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);

	printf("ջ�����ݸ���Ϊ��%d\n", StackSize(&st));
	StackPop(&st);
	StackPop(&st);
	//���Է���ջ��Ԫ�أ�ok��
	printf("ջ�����ݸ���Ϊ��%d������ջ��Ԫ��Ϊ��%d\n", StackSize(&st), StackTop(&st));

	StackDestroy(&st);
}

//��ӡ��ջ˳���Ƿ���Ϻ���ȳ�
void test4(st)
{
	
}

int main(void)
{
	//test1();
	//test2();
	//test3();
	test4();

	return 0;
}