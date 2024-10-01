#pragma once
#include <stdio.h>;
#include <stdlib.h>;
#include <assert.h>
typedef int SLTDateType;
//链表结构体
typedef struct SListNode
{
	SLTDateType date;
	struct SListNode* nest;
}SLTNede;
//产生新节点
SLTNede* BuyListNode(SLTDateType x);
//打印
void SListPrint(SLTNede* phead);
//尾插
void SListPushBack(SLTNede** pphead, SLTDateType x);
//头插
void SListPushFront(SLTNede** pphead, SLTDateType x);
//尾删
void SListPopBack(SLTNede** pphead);
//头删
void SListPopFront(SLTNede** pphead);
//查找
SLTNede* SListFind(SLTNede* phead, SLTDateType x);
//在pos位置之前去插入一个节点
void SListInsert(SLTNede** pphead, SLTNede* pos, SLTDateType x);
void SListEase(SLTNede** pphead, SLTNede* pos);
void SListDestory(SLTNede** pphead);

//void SListInsert(SLTNode* phead, int pos, SLTDateType x);