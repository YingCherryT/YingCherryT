#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

SLTNede* BuyListNode(SLTDateType x) {
	SLTNede* newnode = (SLTNede*)malloc(sizeof(SLTNede));
	//判断
	if (newnode==NULL)
	{
		printf("malloc fail");
		exit(-1);
	}
	newnode->date = x;
	newnode->nest = NULL;
	return newnode;
}
//打印-只需要使用指针
void SListPrint(SLTNede* phead) {
	SLTNede* cur = phead;
	while (cur != NULL) {
		printf("%d->", cur->date);
		//结构体指针解引用找到下一个节点的地址
		cur = cur->nest;
	}
	printf("NULL\n");
}
//尾插-因为需要修改实参一级指针的内容，所以参数为二级指针
void SListPushBack(SLTNede** pphead, SLTDateType x) {
	//尾插的新节点
	SLTNede* newnode = BuyListNode(x);
	//链表为空-新节点就会放在第一个 头指针和新节点指针重合；
	if (*pphead == NULL) {
		*pphead = newnode;
	}
	else
	{
		//尾插-当头指针找到NUll就来到了原来末尾。
		//改变next的值指向新节点的地址
		SLTNede* tail = *pphead;
		while (tail->nest != NULL) {
			tail = tail->nest;
		}
		tail->nest = newnode;
	}		
}

void SListPushFront(SLTNede** pphead, SLTDateType x) {
	//产生新节点
	SLTNede* newnode = BuyListNode(x);
	//新节点next保存原来头的地址
	newnode->nest = *pphead;
	//头指针保存新节点的指针
	*pphead = newnode;

	//头为空也没问题（画图）
}
//尾删
void SListPopBack(SLTNede** pphead) {

	//if ((*pphead==NULL))
	//{
	//	return;
	//}
	//如果条件为假，它会终止程序并输出错误信息。
	//链表为空
	assert(*pphead != NULL);
	//链表还有一个值
	if ((*pphead)->nest==NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		//方法一：找尾
		//tail前一个的指针/

		//SLTNede* prev = NULL;
		//SLTNede* tail = *pphead;
		////while (tail->next != NULL)两种写法都可以
		////指针 整型 逻辑判断 0是假，非0为真
		//while (tail->nest) {
		//	prev = tail;
		//	tail = tail->nest;
		//}
		//free(tail);
		//tail = NULL;
		//prev->nest = NULL;

		//方法二 直接找尾的前一个
		SLTNede* tail = *pphead;
		while (tail->nest->nest) {
			tail = tail->nest;
		}
		free(tail->nest);
		tail->nest = NULL;
	}
}
//头删
void SListPopFront(SLTNede** pphead) {
	//if (*pphead==NULL)
	//{
	//	return;
	//}
	assert(*pphead != NULL);
	//一个值的也可以
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
