#pragma once

//����ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>



//����ʵ��ջ������

// �����Ƕ����ľ�̬ջ�Ľṹ��ʵ����һ�㲻ʵ�ã�����������Ҫʵ�������֧�ֶ�̬������ջ
//typedef int STDataType;
//#define N 10
//typedef struct Stack
//{
//	STDataType _a[N];
//	int _top; // ջ��
//}Stack;

// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top; // ջ��
	int capacity; // ����
}ST;

// ��ʼ��ջ
void StackInit(ST* ps);

// ����ջ
void StackDestroy(ST* ps);

// ��ջ
void StackPush(ST* ps, STDataType data);

// ��ջ
void StackPop(ST* ps);

// ��ȡջ��Ԫ��
STDataType StackTop(ST* ps);

// ��ȡջ����ЧԪ�ظ���
int StackSize(ST* ps);

// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
bool StackEmpty(ST* ps);