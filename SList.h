#pragma once
#include <stdio.h>;
#include <stdlib.h>;
#include <assert.h>
typedef int SLTDateType;
//����ṹ��
typedef struct SListNode
{
	SLTDateType date;
	struct SListNode* nest;
}SLTNede;
//�����½ڵ�
SLTNede* BuyListNode(SLTDateType x);
//��ӡ
void SListPrint(SLTNede* phead);
//β��
void SListPushBack(SLTNede** pphead, SLTDateType x);
//ͷ��
void SListPushFront(SLTNede** pphead, SLTDateType x);
//βɾ
void SListPopBack(SLTNede** pphead);
//ͷɾ
void SListPopFront(SLTNede** pphead);
//����
SLTNede* SListFind(SLTNede* phead, SLTDateType x);
//��posλ��֮ǰȥ����һ���ڵ�
void SListInsert(SLTNede** pphead, SLTNede* pos, SLTDateType x);
void SListEase(SLTNede** pphead, SLTNede* pos);
void SListDestory(SLTNede** pphead);

//void SListInsert(SLTNode* phead, int pos, SLTDateType x);