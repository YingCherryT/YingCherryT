#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;


//int main() {
//	//int arr[10] = {0};
//	//int* parr = arr; //数组指针，首元素地址
//	//printf("%p\n",parr);
//
//	int* parr[5];//指针数组
//
//	int a = 10;
//	int b = 20;
//	int *pa = &a;
//	int **ppa = &pa;//*pa的地址没有变化
//	**ppa = 30;
//	printf("%p %d\n", pa, a);
//	*ppa = &b;
//	**ppa = 30;
//	printf("%p %d", pa, b);
//
//	return 0;
//}


//字符指针
//int main() {
//	char ch = 'w';
//	char* pch = &ch;
//	*pch = 'a';
//	printf("%c\n", ch);
//	char* pcha = "hello world";//首字符的地址
//	//C/C++会把常量字符串存储到单独的一个内存区域，当
//	//几个指针。指向同一个字符串的时候，他们实际会指向同一块内存
//	const char* pcha = "hello world";//首字符的地址
//	printf("%p\n", pcha);
//
//	return 0;
//}

//指针数组
//int main() {
//	int* arr1[10]; //整形指针的数组
//	char* arr2[4]; //一级字符指针的数组
//	char** arr3[5];//二级字符指针的数组
//	return 0;
//}

//数组指针
//int main() {
//	int* p1[10];//指针数组
//	int (*p2)[10];//数组指针 
//	//[]的优先级要高于*号的，所以必须加上（）来保证p先和*结合
//
//	//&arr 表示的是数组的地址 &arr 的类型是： int(*)[10] ，是一种数组指针类型
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//}



void print_arr1(int arr[3][5], int row, int col) {
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		int j = 0;
		for ( j = 0;  j  < col;  j ++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*p)[5], int row, int col) {
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//printf("%d ", *((*p+i)+j));//err 先解引用整个数组会
			//printf("%d ", (*(*p + i) + j));
			//printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}


//数组指针的使用：遍历二级数组
int main() {
	 int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	 //print_arr1(arr1, 3, 5);
	 print_arr2(arr1, 3, 5);
	return 0; 
}