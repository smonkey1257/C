#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

// ��ʼ��ջ
/*
* top ��ʼ��Ϊ0�� ��ζ�����top��ָ��ջ�����ݵ���һ��λ�ã�������ջ Ҫ ����ջ����++top��
* top ��ʼ��Ϊ-1����ζ�����top��ָ��ջ�����ݣ�������ջ Ҫ ��++top������ջ��
*/
void StackInit(ST* ps)
{
	//�ṹ��ĵ�ַ����Ϊ��
	assert(ps);

	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

// ����ջ(�ڴ�й¶)
void StackDestroy(ST* ps)
{
	//�ṹ���ַ����Ϊ��
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->top = 0;
}

// ��ջ
//ջ���ֽṹ���͵��ص��ǣ�ֻ�����һ����ջ����ջ��һ�˱���Ϊ��ջ����
void StackPush(ST* ps, STDataType x)
{
	//�������Ľṹ��ĵ�ַ����Ϊ�գ����Ҫ����
	assert(ps);

	//ջ����Ҫ��������
	if (ps->capacity == ps->top)
	{
		int NewCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//ע��realloc��malloc�ڲ����ϵĲ�ͬ�㣨�ڴ����ַΪ��ʱ��realloc���Ե���mallocʹ�ã�
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * NewCapacity);
		if (tmp == NULL)
		{
			printf("����ʧ�ܣ�\n");
			exit(-1);
		}
		//���ݳɹ�
		ps->a = tmp;
		ps->capacity = NewCapacity;
	}
	//��ջ
	ps->a[ps->top] = x;
	ps->top++;
}

// ��ջ
// ��ν��ջ������������ջ����������ʧ����һ����Ҫʵ��ɾ����ֻҪֱ���Ͽ���������
void StackPop(ST* ps)
{
	//�ṹ��ĵ�ַ����Ϊ�գ�����
	assert(ps);

	//֧�ֳ�ջ��ǰ����ջ�в�Ϊ�գ�������������Խ�磬����
	//(����Ҫ���ϴ����ʱ������벻����ȷʹ�÷�Χ)
	assert(!StackEmpty(ps));

	ps->top--;//���Կ�����ʾtop == -1 Խ������
}

// ��ȡջ��Ԫ��
STDataType StackTop(ST* ps)
{
/*
* top ��ʼ��Ϊ0�� ��ζ�����top��ָ��ջ�����ݵ���һ��λ�ã�
* top ��ʼ��Ϊ-1����ζ�����top��ָ��ջ�����ݣ�
*/
	//�������top��ʼ��Ϊ0

	//�ṹ���ַ����Ϊ��
	assert(ps);

	//ջ����Ϊ�գ�Ϊ����û���κ����ݿ��Է���
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

// ��ȡջ����ЧԪ�ظ���
int StackSize(ST* ps)
{
	//�ṹ���ַ����Ϊ��
	assert(ps);

	return ps->top;
}


// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ���true�������Ϊ��false 

////д��һ��
//bool StackEmpty(ST* ps)
//{
//	if (ps->top == 0)
//		return true;
//	else
//		return false;
//}

////д������
//bool StackEmpty(ST* ps)
//{
//	return ps->top == 0 ? true : false;
//}

//д�����������ࣩ
bool StackEmpty(ST* ps)
{
	return ps->top == 0;
}