#define _CRT_SECURE_NO_WARNINGS 1
#include "SList.h"

void TestSList1() {
	//²âÊÔÎ²²å
	SLTNede* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);
	//²âÊÔÍ·²åÈë
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	
	SListPrint(plist);
}

void TestSList2() {
	
	SLTNede* plist = NULL;
	//²âÊÔÍ·²åÈë
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);
	SListPrint(plist);
	//²âÊÔÎ²²å
	//SListPushBack(&plist, 1);
	//SListPushBack(&plist, 2);
	//SListPushBack(&plist, 3);
	//SListPushBack(&plist, 4);
	//SListPrint(plist);
	//²âÊÔÎ²É¾
	//SListPopBack(&plist);
	//SListPopBack(c);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	////SListPopBack(&plist);
	//SListPrint(plist);
	//²âÊÔÍ·É¾
	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);
}
void TestSList3() {
	SLTNede* plist = NULL;
	//²âÊÔÍ·²åÈë
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 2);
	SListPrint(plist);
	//²éÕÒ
	SLTNede* pos = SListFind(plist, 2);
		int i = 1;
	while (pos) {
		printf("µÚ%d¸öpos½Úµã%p->%d\n",i++, pos, pos->date);
		pos = SListFind(pos->nest,2);
	}
	//ÐÞ¸Ä
	pos = SListFind(plist, 3);
	if (pos)
	{
		pos->date = 30;
	}
	SListPrint(plist);
}
void TestSList4() {
	SLTNede* plist = NULL;
	//²âÊÔÍ·²åÈë
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 4);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 5);
	SListPrint(plist);
	//²éÕÒ
	SLTNede* pos = SListFind(plist, 3);
	//ÐÞ¸Ä
	if (pos)
	{
		//pos->date = 30;
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);

	pos = SListFind(plist, 5);
	if (pos)
	{
		//pos->date = 30;
		SListInsert(&plist, pos, 40);
	}
	SListPrint(plist);
}

int main() {
	//TestSList1();
	//TestSList2();
	//TestSList3();
	TestSList4();
	return 0;
}