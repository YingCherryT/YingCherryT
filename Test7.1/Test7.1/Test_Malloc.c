#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include<string.h>
#include<errno.h>

//1.
//void GetMemory(char* p)//当你调用一个函数并传递一个指针时，函数接收到的是这个指针的副本。
////这意味着在函数内对这个指针的任何修改（比如重新分配内存）不会影响到调用函数中的原始指针。
//
////你想改变一级指针的值，需要二级指针来接收
//
////内存泄漏，局部变量，没有free，p调用结束，将会找不到分配的地址
//{
//	p = (char*)malloc(100);
//}
//
////正确写法
////第一种
//char* GetMemory() {
//	return (char*)malloc(100); // 分配 100 字节内存并返回指针
//}
////第二种
//void GetMemory(char** p) {
//	*p = (char*)malloc(100); // 使用指向指针的指针分配内存
//}
//
//void Test(void) {
//	//第一种
//	char* str = GetMemory(); // 调用 GetMemory 获取分配的内存
//	//第二种
//	char* str = NULL; // 初始化 str 为 NULL
//	GetMemory(&str); // 传
//	if (str) { // 检查内存分配是否成功
//		strcpy(str, "hello world"); // 将字符串复制到分配的内存中
//		printf("%s\n", str); // 打印 str 的内容
//		free(str); // 释放内存
//		str=NULL;
//	}
//	else {
//		printf("Memory allocation failed.\n");
//	}
//}
//
//void Test(void)
//{
//	char* str = NULL;//还是空指针
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////请问运行Test 函数会有什么样的结果？失败！
//int main() {
//
//	//Test();
//
//	return 0;
//}

//int main() {
//	//都是printf(str);的形式
//	printf("hello world\n");
//	char* p ="hello world\n";
//	printf(p);
//	printf("%s", p);
//
//}


//2.
// 
//char *GetMemory(void)
//{
//	////返回栈空间的地址的问题
//
//	char p[] = "hello world";
//	return p;
//}
//
////GetMemory 函数返回一个指向局部数组 p 的指针，而该数组在函数返回后会被销毁。
////还给操作系统，str就是野指针，指向的空间不属于我们
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//int main() {
//	//Test();
//}
// 

//修改之后的代码

//char* GetMemory(void)
//{
//    char* p = malloc(12); // 分配足够的空间
//    if (p != NULL) {
//        strcpy(p, "hello world"); // 复制字符串
//    }
//    return p; // 返回指向动态分配内存的指针
//}
//
//void Test(void)
//{
//    char* str = GetMemory();
//    if (str != NULL) {
//        printf("%s\n", str); // 使用 %s 格式化输出
//        free(str);
//        str = NULL;// 释放分配的内存
//    }
//}
//
//int main() {
//    Test();
//    return 0;
//}


//3.
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//内存泄漏
//    free(str);
//    str = NULL;// 释放分配的内存
//
//}
//int main() {
	//Test();
//

//4.

//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);//空间不属于我们 str还记得 野指针
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//
//}