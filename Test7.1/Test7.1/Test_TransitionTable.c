#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <stdlib.h>
#include <string.h>

//转移表 eg：计算器

//1.普通版本
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//void menu() {
//	printf("*************************\n");
//	printf(" 1:加法           2:减法 \n");
//	printf(" 3:乘法           4:除法 \n");
//	printf(" 0:退出\n");
//	printf("*************************\n");
//}
//普通版本main

//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			if (y == 0) {
//				printf("错误：除数不能为零，请重新输入\n");
//			}
//			else {
//				ret = div(x, y);
//				printf("ret = %d\n", ret);
//			}
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//发现每次运算都需要重新输入，只是运算过程不同
// 这几个函数的参数和返回值类型都相同

//2.通过函数调用函数

//void calc(int (*p)(int,int)) {
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("输入操作数：");
//	scanf("%d %d", &x, &y);
//
//	// 处理除法的特殊情况
//	if (p == div && y == 0) {
//		printf("错误：除数不能为零，请重新输入\n");
//		return; // 返回，避免调用除法
//	}
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//	
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		 menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//3.用函数指针数组

//测试函数指针数组
//int main() {
//	int(*pf)(int, int) = add;//函数指针
//	int(*arr[4])(int, int) = { add,sub,mul,div };//arr函数指针数组
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d ", ret);
//	}
//	return 0;
//}

//实现计算器

//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int ret = 0;
//	int(*arr[])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input==0)
//		{
//			printf("退出程序\n");
//		}
//		else if (input>=1&&input<=4) {
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//
//			if (input == 4 && y == 0) {
//				printf("错误：除数不能为零，请重新输入\n");
//			}
//			else {
//				ret = arr[input](x, y);
//				printf("ret = %d\n", ret);
//			}
//
//		}else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}


//函数指针数组的指针

//int main() {
//	//函数的指针数组
//	int (*parr[])(int, int) = { 0,add,sub,mul,div };
//	//函数指针数组的指针
//	int(*(*pparr)[5])(int, int) = &parr;
//	return 0;
//}


// 冒泡排序

//普通版

//void bubblw_sort(int arr[],int sz) {
//	int i = 0;
//	//趟数
//	for ( i = 0; i < sz-1; i++)
//	{
//		//一趟冒牌排序的过程
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
// }

//
//qsort -这个函数可以排序任意类型的数据--<stdlib.h>
//
void qsort(void* base,//你要排序的数据的起始位置
	size_t num, //待排序的数据元素的个数
	size_t width,//待排序的数据元素的大小(单位是字节)
	int(*cmp)(const void* e1, const void* e2)//函数指针-比较函数类型不同的比较函数不一样)
	);
//cmp_int 的参数 qsort 自己会获取 
//_ cdecl -函数调用约定

//比较函数cmp int普通版本  

//int cmp_int(const void* e1, const void* e2) {
//	if (*(int*)e1> *(int*)e2)
//	{
//		return 1;
//	}
//	else if (*(int*)e1 < *(int*)e2) {
//		return -1;
//	}
//	else
//		return 0;
//}

//简化——int普通版本 直接返回差值

//int cmp_int(const void* e1, const void* e2) {
//	return (*(int*)e1 - *(int*)e2);
//}

//声明结构体
struct Student
{
	char name[20];
	int age;
};

//比较函数cmp 比较结构体by 字符串比较
//int cmp_stu_by_name(const void* e1, const void* e2) {
//	return strcmp(((struct Student*)e1)->name, ((struct Student*)e2)->name);
//}
//int cmp_stu_by_age(const void* e1, const void* e2) {
//	return(((struct Student*)e1)->age - ((struct Student*)e2)->age);
//}
//
////int 比较
//void test() {
//	int arr[] = { 1,3,2,4,6,8,5,9,7,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubblw_sort(arr, sz);普通版
//
//		// 关于void*使用问题，泛型
//		// int a = 10;
//		//void* pv =&a;//void*是无具体类型的指针，可以接受任意类型的地址
//		//void*是无具体类型的指针，所以不能解引用操作，也不能+-整数
//		//
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////结构体比较 
//void test2() {
//	struct Student s[] = { {"zhangsan",15},
//		{"lisi",16},{"wangwu",27} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%s %d \n", s[i].name, s[i].age);
//	}
//}
//
//
//int main() {
//	//int 排序
//	//test();
//	
//	//结构体，按照年龄排序
//	test2();
//	return 0;
//}


// 模拟qsort实现冒泡排序
//一个字节的比较是比较好的，不知道传进来的是什么类型

int cmp_int(const void* e1, const void* e2) {
	return (*(int*)e1 - *(int*)e2);
}

//比较函数里的内核———— 交换
//转换成char是为了处理传入不同的参数
void sWap(char* buf1, char* buf2, int width) {
	int i = 0;
	for ( i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

//模拟qsort
void bubble_sort(void* base, int sz, int width, int(*tmp)(const void* e1, const void* e2)) {
	int i = 0;
	//趟数
	for ( i = 0; i < sz-1; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;//假设数组是排好的
		for ( j = 0; j < sz-1-i; j++)
		{
			//比较大小 --按照字节×宽度的大小对应类型，也就是下标以多少的方式进行移动

			if (cmp_int( (char*)base+j*width, (char*)base +( j+1 )* width )>0)
			{
				//交换
				sWap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag==1)
		{
			break;
		}
	}
}

int main() {
	int arr[] = { 2,5,1,3,6,7,4,9,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}







