#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//�����ڵ�ṹ�壨������ָ����
typedef int SLDataType;
typedef struct SLNode
{
	SLDataType data;
	struct SLNode* next;
}SLNode;

// ��̬����һ���ڵ�
SLNode* BuySListNode(SLDataType x);

// �������ӡ
void SLPrint(SLNode* plist);

// ������β��
void SLPushBack(SLNode** pplist, SLDataType x);

// �������ͷ��
void SLPushFront(SLNode** pplist, SLDataType x);

// �������βɾ
void SLPopBack(SLNode** pplist);

// ������ͷɾ
void SLPopFront(SLNode** pplist);

// ���������
SLNode* SLFind(SLNode* plist, SLDataType x);

// ��������posλ��֮ǰ����x
void SLInsert(SLNode** pplist, SLNode* pos, SLDataType x);

// ��������posλ��֮�����x
void SLInsertAfter(SLNode* pos, SLDataType x);

// ������ɾ��posλ�õ�ֵ
void SLErase(SLNode** pplist, SLNode* pos);

// ������ɾ��posλ��֮���ֵ
void SLEraseAfter(SLNode* pos);

//�������
void SLDestory(SLNode** pplist);