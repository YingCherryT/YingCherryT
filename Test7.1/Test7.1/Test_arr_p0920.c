#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;


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
//	char ch = 'w';
//	char* pch = &ch;
//	*pch = 'a';
//	printf("%c\n", ch);
//	char* pcha = "hello world";//���ַ��ĵ�ַ
//	//C/C++��ѳ����ַ����洢��������һ���ڴ����򣬵�
//	//����ָ�롣ָ��ͬһ���ַ�����ʱ������ʵ�ʻ�ָ��ͬһ���ڴ�
//	const char* pcha = "hello world";//���ַ��ĵ�ַ
//	printf("%p\n", pcha);
//
//	return 0;
//}

//ָ������
//int main() {
//	int* arr1[10]; //����ָ�������
//	char* arr2[4]; //һ���ַ�ָ�������
//	char** arr3[5];//�����ַ�ָ�������
//	return 0;
//}

//����ָ��
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
			//printf("%d ", *((*p+i)+j));//err �Ƚ��������������
			//printf("%d ", (*(*p + i) + j));
			//printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}


//����ָ���ʹ�ã�������������
int main() {
	 int arr1[3][5] = { 1,2,3,4,5,6,7,8,9,10 };
	 //print_arr1(arr1, 3, 5);
	 print_arr2(arr1, 3, 5);
	return 0; 
}