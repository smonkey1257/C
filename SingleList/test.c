#include "SingleList.h"


void test1()
{
	SLNode* head = NULL;
	int num = 0;
	//β��
	SLPushBack(&head, 1);
	SLPushBack(&head, 2);
	SLPushBack(&head, 3);
	SLPrint(head);
	//ͷ��
	//SLPushFront(&head, 1);
	//SLPushFront(&head, 2);
	//SLPushFront(&head, 3);
	//SLPrint(head);

}

void test2()
{
	SLNode* head = NULL;
	int num = 0;
	//β��
	SLPushBack(&head, 1);
	SLPushBack(&head, 2);
	SLPushBack(&head, 3);
	SLPrint(head);
	//ͷ��
	SLPushFront(&head, 1);
	SLPushFront(&head, 2);
	SLPushFront(&head, 3);
	SLPrint(head);

	SLPopBack(&head);
	SLPopBack(&head);
	SLPopBack(&head);
	SLPrint(head);

	SLPopFront(&head);
	SLPopFront(&head);
	SLPopFront(&head);
	SLPrint(head);

}

void test3()
{
	SLNode* head = NULL;
	//ͷ��
	SLPushFront(&head, 1);
	SLPushFront(&head, 2);
	SLPushFront(&head, 3);
	SLPushFront(&head, 3);
	SLPushFront(&head, 3);
	SLPushFront(&head, 3);
	SLPrint(head);

	SLNode* ret = SLFind(head, 3);
	if (!(ret))
	{
		printf("û�ҵ�\n");
	}
	else
	{
		int i = 1;
		printf("�ҵ���\n");
		while (ret)
		{
			printf("��%d��ret�ڵ㣺%p->%d\n", i++, ret, ret->data);
			ret = SLFind(ret->next, 3);
		}

	}
	//������ֶ����ֵͬ��β��ң�
	//�ҵ���һ�����ؽڵ�ĵ�ַ��ѭ������һ��λ�ÿ�ʼ��
}

void test4()
{
	//���ҹ��ܿ��������һ���޸Ĺ���
	SLNode* head = NULL;
	//ͷ��
	SLPushFront(&head, 1);
	SLPushFront(&head, 2);
	SLPushFront(&head, 3);
	SLPushFront(&head, 3);
	SLPushFront(&head, 3);
	SLPushFront(&head, 3);
	SLPrint(head);

	SLNode* ret = SLFind(head, 3);
	if (ret)
	{
		ret->data = 30;
	}
	SLPrint(head);
	//���������������е�3���ĳ�30�Ļ��ʹ���һ���ڵ㿪ʼ�ң��ҵ����޸�
}

void test5()
{
	//���ҹ��ܿ��������һ���޸Ĺ���
	SLNode* head = NULL;
	//ͷ��
	SLPushFront(&head, 1);
	SLPushFront(&head, 2);
	SLPushFront(&head, 3);
	SLPushFront(&head, 4);
	SLPrint(head);
	
	SLNode* ret = SLFind(head, 4);
	//SLInsert(&head, ret, 30);
	if (ret)
	{
		SLInsert(&head, ret, 30);
	}
	SLPrint(head);
	//�ﵽ����ͷ�����Ч��
	//����һ��ͷ�������
	//�ĺ��ˣ������ճ���ͷ�ڵ�ǰ�Ѿ�û�нڵ��ˣ�����ѭ��
}

void test6()
{
	SLNode* head = NULL;
	//ͷ��
	SLPushFront(&head, 1);
	SLPushFront(&head, 2);
	SLPushFront(&head, 3);
	SLPrint(head);
	
	SLNode* ret = SLFind(head, 3);
	SLErase(&head, ret);
	SLPrint(head);

}

void test7()
{
	SLNode* head = NULL;
	//ͷ��
	SLPushFront(&head, 1);
	SLPushFront(&head, 2);
	SLPushFront(&head, 3);
	SLPrint(head);

	SLDestory(&head);
	SLPrint(head);

}

int main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	//test6();
	test7();

	return 0;
}