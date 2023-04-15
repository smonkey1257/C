#include "SingleList.h"

// �������ӡ
void SLPrint(SLNode* plist)
{
	//������ҲҪ��ӡ�����ö���

	//�ڲ�Ϊ��ָ��֮ǰ
	while (plist)
	{
		printf("%d->", plist->data);
		plist = plist->next;
	}
	//�����ʾ��ָ�벢�һ���
	printf("NULL\n");
}
//����Ҫ�Ķ�������˲���Ҫ����ָ��



// ������β��
//һ����������ֱ�����һ���ڵ㣬β�ڵ������½ڵ㣨���
//����ͨ��ά��һ��βָ�룬ֱ����βָ�������½ڵ㡪���Ժ��ٸİɣ����ڲ��о��ˣ�3.21��

void SLPushBack(SLNode** pphead, SLDataType x)
{
	assert(pphead);//ͷָ��ĵ�ַ����Ϊ��Ҫ����

	//һ�������Ƚ�һ���µĽڵ㣬������Ŵ������Ĳ���
	if (!(*pphead))
	{
		//ͷָ��Ϊ��
		*pphead = BuySListNode(x);
	}
	else
	{
		SLNode* newnode = BuySListNode(x);
		//�ҵ������β�ڵ㣬��newnode����µ�β�ڵ�
		SLNode* tail = *pphead;
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}


//��ͷ��Ϊ�ջ���β��Ϊ���Ƕ�Ҫ����һ���µĽڵ㣬�ɴ���ⲿ�ֹ鲢Ϊһ��������������
// ����һ���ڵ�
SLNode* BuySListNode(SLDataType x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if (!(newnode))
	{
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	
	return newnode;
}



// �������ͷ��
void SLPushFront(SLNode** pphead, SLDataType x)
{
	assert(pphead);//ͷָ��ĵ�ַ����Ϊ��Ҫ����

	if (!(*pphead))
	{
		//ͷָ��Ϊ��
		*pphead = BuySListNode(x);
	}
	else
	{
		//ͷָ�벻Ϊ��
		SLNode* newnode = BuySListNode(x);
		
		//ͷ��
		newnode->next = *pphead;
		*pphead = newnode;
	}
}
//���Ϊ�վͽ�һ���½ڵ����
//tmp = newnode;����ֻ��һ�ݿ������ģ��ѱ���newnode����ĵ�ַ��tmp�Ļ������˺����ͻ����٣�



// �������βɾ

void SLPopBack(SLNode** pphead)
{
	//ͷָ�벻��Ϊ�գ�Ϊ�վ�û�����ݿ���ɾ
	assert(*pphead);
	
	SLNode* tail = *pphead;
	SLNode* prev = NULL;//ָ��tail��ǰһ���ڵ�
	
	//������ = 1
	if (tail->next == NULL)
	{
		free(tail);
		*pphead = NULL;
	}
	else
	{//������ > 1
		while (tail->next)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}

void SLPopBack1(SLNode** pphead)
{
	//ͷָ�벻��Ϊ�գ�Ϊ�վ�û�����ݿ���ɾ
	assert(*pphead);

	SLNode* tail = *pphead;
	//ֻʣһ���ڵ���
	if (tail->next == NULL)
	{
		free(tail);
		*pphead = NULL;
	}
	else
	{
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}



// ������ͷɾ 

void SLPopFront(SLNode** pphead)
{
	assert(pphead);//ͷָ��ĵ�ַ����Ϊ��Ҫ����
	assert(*pphead);//ͷָ�벻��Ϊ�գ�Ϊ�վ�û�����ݿ���ɾ

	SLNode* tmp = *pphead;

	*pphead = (*pphead)->next;
	free(tmp);
	tmp = NULL;
}

//����Ҫ�ı�ͷָ�룬��Ҫ��ͷָ��ĵ�ַ�����������ö���ָ�����
//	head = head->next;ֻ�Ǹĵ���ͷָ��Ŀ�����head���˺����ͻᱻ����



// ���������

SLNode* SLFind(SLNode* pphead, SLDataType x)
{
	while (pphead)
	{
		if (pphead->data == x)
		{
			return pphead;
		}
		else
		{
			pphead = pphead->next;
		}
	}
	return NULL;
}

//plist->next��Ϊѭ��������˼����������һ���ڵ㣬Ȼ������ֻ��һ��ʱ��������е�����NULL����������Ҫ��ͷָ�뿪��ʼ
//����Ҳ�ǲ��ô�����ָ��ģ���Ϊ���øĶ�
//�ҵ��˾ͷ��ظýڵ�ĵ�ַ,�Ҳ����ͷ���NULL



// ��������posλ��֮ǰ����x
// pos������Find 
void SLInsert(SLNode** pphead, SLNode* pos, SLDataType x)
{
	assert(pphead);//ͷָ��ĵ�ַ����Ϊ��Ҫ����

	SLNode* cur = *pphead;
	SLNode* newnode = BuySListNode(x);
	if ((*pphead)->data == pos->data)
	{
		//ͷ��
		newnode->next = (*pphead);
		*pphead = newnode;
	}
	else
	{
		while (cur->next != pos)
		{
			cur = cur->next;
		}

		cur->next = newnode;
		newnode->next = pos;
	}
}
//�漰ͷ�����⣬����Ҫ������ָ��



// ��������posλ��֮�����x
void SLInsertAfter(SLNode* pos, SLDataType x)
{
	assert(pos);
	SLNode* newnode = BuySListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
//pos֮�����Ļ�������posָ���һ���ڵ㣬Ҳ���õ��ĸı�ͷ�ڵ��ˣ���˲���Ҫ������ָ����
//��������Ҫ�������ͷָ����



// ������ɾ��posλ�õ�ֵ
void SLErase(SLNode** pphead, SLNode* pos)
{
	assert(pphead);//ͷָ��ĵ�ַ����Ϊ��Ҫ����

	if (*pphead == pos)
	{
		//posָ��ڶ����ڵ㣬�漰ͷɾ��������
		SLPopFront(pphead);
	}
	else
	{
		//posָ����������������ڵ�֮��Ľڵ㣬���������
		SLNode* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = pos->next;
		free(pos);
	}
}
//pos �����������٣�û���ÿյı�Ҫ

// ������ɾ��posλ��֮���ֵ
void SLEraseAfter(SLNode* pos)
{
	assert(pos->next);//��������һ���ڵ�ʱ���ʺ������������
	
	SLNode* next = pos->next;
	pos->next = next->next;
	free(next);
}

//������� - �ͷ����нڵ�
void SLDestory(SLNode** pphead)
{
	assert(pphead);//ͷָ��ĵ�ַ����Ϊ��Ҫ����

	while (*pphead)
	{
		SLNode* tmp = *pphead;

		*pphead = (*pphead)->next;

		free(tmp);
	}
	*pphead = NULL;
}