#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

SLTNede* BuyListNode(SLTDateType x) {
	SLTNede* newnode = (SLTNede*)malloc(sizeof(SLTNede));
	//�ж�
	if (newnode==NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	newnode->date = x;
	newnode->nest = NULL;
	return newnode;
}
//��ӡ-ֻ��Ҫʹ��ָ��
void SListPrint(SLTNede* phead) {
	SLTNede* cur = phead;
	while (cur != NULL) {
		printf("%d->", cur->date);
		//�ṹ��ָ��������ҵ���һ���ڵ�ĵ�ַ
		cur = cur->nest;
	}
	printf("NULL\n");
}
//β��-��Ϊ��Ҫ�޸�ʵ��һ��ָ������ݣ����Բ���Ϊ����ָ��
void SListPushBack(SLTNede** pphead, SLTDateType x) {
	//β����½ڵ�
	SLTNede* newnode = BuyListNode(x);
	//����Ϊ��-�½ڵ�ͻ���ڵ�һ�� ͷָ����½ڵ�ָ���غϣ�
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else
	{
		//β��-��ͷָ���ҵ�NUll��������ԭ��ĩβ��
		//�ı�next��ֵָ���½ڵ�ĵ�ַ
		SLTNede* tail = *pphead;
		while (tail->nest != NULL) {
			tail = tail->nest;
		}
		tail->nest = newnode;
	}		
}

void SListPushFront(SLTNede** pphead, SLTDateType x) {
	//�����½ڵ�
	SLTNede* newnode = BuyListNode(x);
	//�½ڵ�next����ԭ��ͷ�ĵ�ַ
	newnode->nest = *pphead;
	//ͷָ�뱣���½ڵ��ָ��
	*pphead = newnode;

	//ͷΪ��Ҳû���⣨��ͼ��
}
//βɾ
void SListPopBack(SLTNede** pphead) {

	//if ((*pphead==NULL))
	//{
	//	return;
	//}
	//�������Ϊ�٣�������ֹ�������������Ϣ��
	//����Ϊ��
	assert(*pphead != NULL);
	//������һ��ֵ
	if ((*pphead)->nest==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//����һ����β
		//tailǰһ����ָ��/

		//SLTNede* prev = NULL;
		//SLTNede* tail = *pphead;
		////while (tail->next != NULL)����д��������
		////ָ�� ���� �߼��ж� 0�Ǽ٣���0Ϊ��
		//while (tail->nest) {
		//	prev = tail;
		//	tail = tail->nest;
		//}
		//free(tail);
		//tail = NULL;
		//prev->nest = NULL;

		//������ ֱ����β��ǰһ��
		SLTNede* tail = *pphead;
		while (tail->nest->nest) {
			tail = tail->nest;
		}
		free(tail->nest);
		tail->nest = NULL;
	}
}
//ͷɾ
void SListPopFront(SLTNede** pphead) {
	//if (*pphead==NULL)
	//{
	//	return;
	//}
	assert(*pphead != NULL);
	//һ��ֵ��Ҳ����
	SLTNede* nest = (*pphead)->nest;
	free(*pphead);
	*pphead = nest;
}
SLTNede* SListFind(SLTNede* phead, SLTDateType x) {
	SLTNede* cur = phead;
	while (cur) {
		if (cur->date==x)
		{
			return cur;
		}
		else {
			cur = cur->nest;
		}
	}
	return NULL;
}
void SListInsert(SLTNede** pphead, SLTNede* pos, SLTDateType x) {
	SLTNede* newnode = BuyListNode(x);
	if (*pphead==pos)
	{
		newnode->nest = *pphead;
		*pphead = newnode;
	}
	else {
		SLTNede* posPrev = *pphead;
		while (posPrev->nest != pos) {
			posPrev = posPrev->nest;
		}
		posPrev->nest = newnode;
		newnode->nest = pos;
	}
	
}
void SListEase(SLTNede** pphead, SLTNede* pos);
void SListDestory(SLTNede** pphead);
