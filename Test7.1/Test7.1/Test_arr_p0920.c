#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>;

//指针数组


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
//	//char ch = 'w';
//	//char* pch = &ch;
//	//*pch = 'a';
//	//printf("%c\n", ch);
//	//char* pcha = "hello world";//首字符的地址
//	//C/C++会把常量字符串存储到单独的一个内存区域，当
//	//几个指针。指向同一个字符串的时候，他们实际会指向同一块内存
//	  char* pcha = "hello world";//首字符的地址h，赋值给pcha；
//	 //*pcha = "bjf";//err
//	 //在 C 语言中，字符串字面量（如 "hello world"）存储在只读的内存区域。（只存一份）
//	 // 将 char* pcha 指向字符串字面量后，尝试修改它（通过 * pcha = "bjf"; ）将会导致未定义行为，因为你试图修改只读内存。
//	// 在这里，* pcha 代表字符串的第一个字符，而 "bjf" 是一个字符串字面量，不能直接赋值给 * pcha。
//	printf("%p\n", pcha);
//	printf("%s\n", pcha);
//	return 0;
//}

//指针数组

//int main() {
//	int* arr1[10]; //整形指针的数组
//	char* arr2[4]; //一级字符指针的数组
//	char** arr3[5];//二级字符指针的数组
//	return 0;
//}

//模拟二维数组

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,5,7,9 };
//	int arr3[] = { 2,4,6,8,10 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(parr + i) + j));//*(p+i)-->p[i]
//			printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//		return 0;
//}


//数组指针
	//整型指针是用来存放整型的地址
	// //字符指针是用来存放字符的地址
	// //数组指针是用来存放数组的地址

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

//一维数组遍历
//一位数组本身是数组，元素是整形（或字符），用整形指针或字符型指针，来接受收首元素地址

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//数组首元素地址
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* p)[10] = arr;//数组地址
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(*p+i));//p是指向数组的，*p相当于数组名数组名又是首元素地址
//		//所以*p本质 上是数组首元素的地址
//	}
//	return 0;
//}

//二维数组的遍历，二维数组本身是个数组，元素还是数组所以首元素的地址任需要用数组指针

//void print_arr1(int arr[3][5], int row, int col) {
//	int i = 0;
//	for ( i = 0; i < row; i++)
//	{
//		int j = 0;
//		for ( j = 0;  j  < col;  j ++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*p)[5], int row, int col) {
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			//printf("%d ", *((*p+i)+j));//err 先解引用整个数组会
//			//printf("%d ", (*(*p + i) + j));
//			//printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}


//数组指针的使用：遍历二级数组
//int main() {
//	 int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	 //print_arr1(arr1, 3, 5);
//	 print_arr2(arr1, 3, 5);
//	return 0; 
//}

// 一维数组传参

//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int* arr)//ok
//{}
//void test2(int* arr[20])//ok
//{}//这里 arr 被视为一个指针数组，即包含 20 个指向 int 的指针。函数内部可以使用这个数组来访问这些指针。
//void test2(int** arr)//ok
//{}//这里 arr 是一个指向指针的指针，意味着它可以指向一个指向 int 的指针。
////这样的声明允许函数操作指向指针的指针（即指向数组的数组）。
//int main() {
//	int arr[10] = {0};
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//
//		//如果是函数的参数部分是指針
//		//void print(int* p) {}
//		//int a = 10;
//		//int* ptr = &a;
//		//int arr[10];
//		//print(&a); 
//		//print(ptr);
//		//print(arr);
//}

//一级指针传参

//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}


//当一个函数的参数部分为一级指针的时候，函数能接收什么参数？
//test1(int* p) 可以接收指向 int 的指针、int 数组和 NULL。
//test2(char* p) 可以接收指向 char 的指针、字符数组、字符串字面量和 NULL。


//void test1(int* p) {
//	// 可以使用 p，访问指向的整型值
//}
//void test2(char* p) {
//	// 可以使用 p，访问指向的字符
//}
//int main() {
//	int arr[] = { 1, 2, 3 };
//	char str[] = "hello";
//
//	test1(arr);          // 合法
//	test1(NULL);        // 合法
//	test2(str);         // 合法
//	test2("world");     // 合法
//	test2(NULL);        // 合法
//
//	return 0;
//}


//二维数组传参

//void test(int arr[3][5])//ok？
//{}
////void test(int arr[][])//ok? err
////{}
//void test(int arr[][5])//ok？
//{}
////总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
////因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
////这样才方便运算。
//void test(int* arr)//ok? err
//{}
//void test(int* arr[5])//ok？err
//{}
//void test(int (*arr)[5])//ok
//{}
//void test(int** arr)//ok? err
//{}
//二维数组的数组名，表示首元素的地址，其实是第一行的地址
//第一行是一个一维数组的!
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//二级指针传参

//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//当函数的参数为二级指针的时候，可以接收什么参数？
//在 void test(char** p) 的情况下，可以接收：
//指向 char* 的指针（如 ppc）。
//字符指针数组（如 arr）。
//其他适当的指向字符指针的指针。(三级指针解引用)

//void test(char** p)
//{
//
//}
//int main()
//{
//	char c = 'b';
//	char* pc = &c;
//	char** ppc = &pc;
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//Ok
//	return 0;
//}

//函数指针

//int add(int x, int y) {
//	return x + y;
//}
//void calAdd(int (*p)(int, int)) {
//	int a = 3;
//	int b = 5;
//	int rel = (*p)(3, 5);
//	//int rel = p(3, 5);
//	printf("%d\n", rel);
//}
//int test(const char* x) {
//	printf("%c \n", *x);  // 打印字符串的第一个字符
//	printf("%s \n", x);    // 打印整个字符串
//
//	//const char*: 不能修改字符串内容。
//	//通过 char* : 可以通过指针解引用来修改字符串内容。
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	//数组名 - 取出数组的地址
//	int(*parr)[5] = &arr;//数组指针
//	printf("%p\n", add);
//	printf("%p\n", &add);//函数地址
//	//对于函数来说，&函数名和函数名都是函数的地址
//	int (*padd)(int, int) = &add;//函数指针
//	calAdd(add);
//
//	////指针数组
//	//int* arr[4];
//	//int* ch[5];
//	//int** p = arr;
//	////数组指针
//	//int arr2[5];
//	//int (*parr2)[5] = &arr2;
//
//	//char* arr3[6];//指针数组
//	//char* (*parr3)[6];//指针数组的指针
//
//	int (*pf)(const char*) = test;
//	char tarr[4] = { 'a','h','r','\0' };
//	//三种形式调用函数
//	(*pf)("abc");
//	test("bcd");
//	pf("ghj");
//	pf(tarr);
//	return 0;
//} 

//函数的理解

//int main() {
//	//代码1 
//	(*(void (*)())0)(); //函数的调用
//	//以上代码是一次函数调用，调用的是0作为地址处的函数。
//	//1.把0强制类型转换为:无参，返回类型是void的函数的地址
//	//2.调用0地址处的这个函数类比(*p)()
//	return 0;
//}
//
////代码2：回调函数会用
//void (*signal(int, void(*)(int)))(int);
////void ( *    signal(int, void(*)(int))    )(int);函数声明
//// 返回类型：void(*)(int) 函数名：signal 参数：int, void(*)(int)
//
////简化：
//typedef void(*pfun_t)(int);//把void(*)(int)类型重命名为pfun_t
//pfun_t signal(int, pfun_t); 

//函数指针数组

//int* arr[10];//指针数组
//
//int (*parr[5])();//函数指针数组

//用途转移表--转到Test_TransitionTable.c文件  (内含冒泡排序)

//

