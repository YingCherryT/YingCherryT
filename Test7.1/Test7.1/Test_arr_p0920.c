#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>;

//ָ������


//int main() {
//	//int arr[10] = {0};
//	//int* parr = arr; //����ָ�룬��Ԫ�ص�ַ
//	//printf("%p\n",parr);
//
//	int* parr[5];//ָ������
//
//	int a = 10;
//	int b = 20;
//	int *pa = &a;
//	int **ppa = &pa;//*pa�ĵ�ַû�б仯
//	**ppa = 30;
//	printf("%p %d\n", pa, a);
//	*ppa = &b;
//	**ppa = 30;
//	printf("%p %d", pa, b);
//
//	return 0;
//}


//�ַ�ָ��
//int main() {
//	//char ch = 'w';
//	//char* pch = &ch;
//	//*pch = 'a';
//	//printf("%c\n", ch);
//	//char* pcha = "hello world";//���ַ��ĵ�ַ
//	//C/C++��ѳ����ַ����洢��������һ���ڴ����򣬵�
//	//����ָ�롣ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ�
//	  char* pcha = "hello world";//���ַ��ĵ�ַh����ֵ��pcha��
//	 //*pcha = "bjf";//err
//	 //�� C �����У��ַ������������� "hello world"���洢��ֻ�����ڴ����򡣣�ֻ��һ�ݣ�
//	 // �� char* pcha ָ���ַ����������󣬳����޸�����ͨ�� * pcha = "bjf"; �����ᵼ��δ������Ϊ����Ϊ����ͼ�޸�ֻ���ڴ档
//	// �����* pcha �����ַ����ĵ�һ���ַ����� "bjf" ��һ���ַ���������������ֱ�Ӹ�ֵ�� * pcha��
//	printf("%p\n", pcha);
//	printf("%s\n", pcha);
//	return 0;
//}

//ָ������

//int main() {
//	int* arr1[10]; //����ָ�������
//	char* arr2[4]; //һ���ַ�ָ�������
//	char** arr3[5];//�����ַ�ָ�������
//	return 0;
//}

//ģ���ά����

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


//����ָ��
	//����ָ��������������͵ĵ�ַ
	// //�ַ�ָ������������ַ��ĵ�ַ
	// //����ָ���������������ĵ�ַ

//int main() {
//	int* p1[10];//ָ������
//	int (*p2)[10];//����ָ�� 
//	//[]�����ȼ�Ҫ����*�ŵģ����Ա�����ϣ�������֤p�Ⱥ�*���
//
//	//&arr ��ʾ��������ĵ�ַ &arr �������ǣ� int(*)[10] ����һ������ָ������
//	int arr[10] = { 0 };
//	printf("arr = %p\n", arr);
//	printf("&arr= %p\n", &arr);
//	printf("arr+1 = %p\n", arr + 1);
//	printf("&arr+1= %p\n", &arr + 1);
//	return 0;
//}

//һά�������
//һλ���鱾�������飬Ԫ�������Σ����ַ�����������ָ����ַ���ָ�룬����������Ԫ�ص�ַ

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;//������Ԫ�ص�ַ
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* p)[10] = arr;//�����ַ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(*p+i));//p��ָ������ģ�*p�൱��������������������Ԫ�ص�ַ
//		//����*p���� ����������Ԫ�صĵ�ַ
//	}
//	return 0;
//}

//��ά����ı�������ά���鱾���Ǹ����飬Ԫ�ػ�������������Ԫ�صĵ�ַ����Ҫ������ָ��

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
//			//printf("%d ", *((*p+i)+j));//err �Ƚ��������������
//			//printf("%d ", (*(*p + i) + j));
//			//printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}


//����ָ���ʹ�ã�������������
//int main() {
//	 int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	 //print_arr1(arr1, 3, 5);
//	 print_arr2(arr1, 3, 5);
//	return 0; 
//}

// һά���鴫��

//void test(int arr[])//ok
//{}
//void test(int arr[10])//ok
//{}
//void test(int* arr)//ok
//{}
//void test2(int* arr[20])//ok
//{}//���� arr ����Ϊһ��ָ�����飬������ 20 ��ָ�� int ��ָ�롣�����ڲ�����ʹ�����������������Щָ�롣
//void test2(int** arr)//ok
//{}//���� arr ��һ��ָ��ָ���ָ�룬��ζ��������ָ��һ��ָ�� int ��ָ�롣
////��������������������ָ��ָ���ָ�루��ָ����������飩��
//int main() {
//	int arr[10] = {0};
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//
//		//����Ǻ����Ĳ���������ָ�
//		//void print(int* p) {}
//		//int a = 10;
//		//int* ptr = &a;
//		//int arr[10];
//		//print(&a); 
//		//print(ptr);
//		//print(arr);
//}

//һ��ָ�봫��

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
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}


//��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô������
//test1(int* p) ���Խ���ָ�� int ��ָ�롢int ����� NULL��
//test2(char* p) ���Խ���ָ�� char ��ָ�롢�ַ����顢�ַ����������� NULL��


//void test1(int* p) {
//	// ����ʹ�� p������ָ�������ֵ
//}
//void test2(char* p) {
//	// ����ʹ�� p������ָ����ַ�
//}
//int main() {
//	int arr[] = { 1, 2, 3 };
//	char str[] = "hello";
//
//	test1(arr);          // �Ϸ�
//	test1(NULL);        // �Ϸ�
//	test2(str);         // �Ϸ�
//	test2("world");     // �Ϸ�
//	test2(NULL);        // �Ϸ�
//
//	return 0;
//}


//��ά���鴫��

//void test(int arr[3][5])//ok��
//{}
////void test(int arr[][])//ok? err
////{}
//void test(int arr[][5])//ok��
//{}
////�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
////��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
////�����ŷ������㡣
//void test(int* arr)//ok? err
//{}
//void test(int* arr[5])//ok��err
//{}
//void test(int (*arr)[5])//ok
//{}
//void test(int** arr)//ok? err
//{}
//��ά���������������ʾ��Ԫ�صĵ�ַ����ʵ�ǵ�һ�еĵ�ַ
//��һ����һ��һά�����!
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//}


//����ָ�봫��

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

//�������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ���ʲô������
//�� void test(char** p) ������£����Խ��գ�
//ָ�� char* ��ָ�루�� ppc����
//�ַ�ָ�����飨�� arr����
//�����ʵ���ָ���ַ�ָ���ָ�롣(����ָ�������)

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

//����ָ��

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
//	printf("%c \n", *x);  // ��ӡ�ַ����ĵ�һ���ַ�
//	printf("%s \n", x);    // ��ӡ�����ַ���
//
//	//const char*: �����޸��ַ������ݡ�
//	//ͨ�� char* : ����ͨ��ָ����������޸��ַ������ݡ�
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	//������ - ȡ������ĵ�ַ
//	int(*parr)[5] = &arr;//����ָ��
//	printf("%p\n", add);
//	printf("%p\n", &add);//������ַ
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
//	int (*padd)(int, int) = &add;//����ָ��
//	calAdd(add);
//
//	////ָ������
//	//int* arr[4];
//	//int* ch[5];
//	//int** p = arr;
//	////����ָ��
//	//int arr2[5];
//	//int (*parr2)[5] = &arr2;
//
//	//char* arr3[6];//ָ������
//	//char* (*parr3)[6];//ָ�������ָ��
//
//	int (*pf)(const char*) = test;
//	char tarr[4] = { 'a','h','r','\0' };
//	//������ʽ���ú���
//	(*pf)("abc");
//	test("bcd");
//	pf("ghj");
//	pf(tarr);
//	return 0;
//} 

//���������

//int main() {
//	//����1 
//	(*(void (*)())0)(); //�����ĵ���
//	//���ϴ�����һ�κ������ã����õ���0��Ϊ��ַ���ĺ�����
//	//1.��0ǿ������ת��Ϊ:�޲Σ�����������void�ĺ����ĵ�ַ
//	//2.����0��ַ��������������(*p)()
//	return 0;
//}
//
////����2���ص���������
//void (*signal(int, void(*)(int)))(int);
////void ( *    signal(int, void(*)(int))    )(int);��������
//// �������ͣ�void(*)(int) ��������signal ������int, void(*)(int)
//
////�򻯣�
//typedef void(*pfun_t)(int);//��void(*)(int)����������Ϊpfun_t
//pfun_t signal(int, pfun_t); 

//����ָ������

//int* arr[10];//ָ������
//
//int (*parr[5])();//����ָ������

//��;ת�Ʊ�--ת��Test_TransitionTable.c�ļ�  (�ں�ð������)

//

