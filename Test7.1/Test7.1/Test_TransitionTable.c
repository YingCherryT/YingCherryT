#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <stdlib.h>
#include <string.h>

//ת�Ʊ� eg��������

//1.��ͨ�汾
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
//	printf(" 1:�ӷ�           2:���� \n");
//	printf(" 3:�˷�           4:���� \n");
//	printf(" 0:�˳�\n");
//	printf("*************************\n");
//}
//��ͨ�汾main

//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			if (y == 0) {
//				printf("���󣺳�������Ϊ�㣬����������\n");
//			}
//			else {
//				ret = div(x, y);
//				printf("ret = %d\n", ret);
//			}
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//����ÿ�����㶼��Ҫ�������룬ֻ��������̲�ͬ
// �⼸�������Ĳ����ͷ���ֵ���Ͷ���ͬ

//2.ͨ���������ú���

//void calc(int (*p)(int,int)) {
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("�����������");
//	scanf("%d %d", &x, &y);
//
//	// ����������������
//	if (p == div && y == 0) {
//		printf("���󣺳�������Ϊ�㣬����������\n");
//		return; // ���أ�������ó���
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
//		printf("��ѡ��");
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//3.�ú���ָ������

//���Ժ���ָ������
//int main() {
//	int(*pf)(int, int) = add;//����ָ��
//	int(*arr[4])(int, int) = { add,sub,mul,div };//arr����ָ������
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d ", ret);
//	}
//	return 0;
//}

//ʵ�ּ�����

//int main() {
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int ret = 0;
//	int(*arr[])(int, int) = { 0,add,sub,mul,div };
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input==0)
//		{
//			printf("�˳�����\n");
//		}
//		else if (input>=1&&input<=4) {
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//
//			if (input == 4 && y == 0) {
//				printf("���󣺳�������Ϊ�㣬����������\n");
//			}
//			else {
//				ret = arr[input](x, y);
//				printf("ret = %d\n", ret);
//			}
//
//		}else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}


//����ָ�������ָ��

//int main() {
//	//������ָ������
//	int (*parr[])(int, int) = { 0,add,sub,mul,div };
//	//����ָ�������ָ��
//	int(*(*pparr)[5])(int, int) = &parr;
//	return 0;
//}


// ð������

//��ͨ��

//void bubblw_sort(int arr[],int sz) {
//	int i = 0;
//	//����
//	for ( i = 0; i < sz-1; i++)
//	{
//		//һ��ð������Ĺ���
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
//qsort -����������������������͵�����--<stdlib.h>
//
void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
	size_t num, //�����������Ԫ�صĸ���
	size_t width,//�����������Ԫ�صĴ�С(��λ���ֽ�)
	int(*cmp)(const void* e1, const void* e2)//����ָ��-�ȽϺ������Ͳ�ͬ�ıȽϺ�����һ��)
	);
//cmp_int �Ĳ��� qsort �Լ����ȡ 
//_ cdecl -��������Լ��

//�ȽϺ���cmp int��ͨ�汾  

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

//�򻯡���int��ͨ�汾 ֱ�ӷ��ز�ֵ

//int cmp_int(const void* e1, const void* e2) {
//	return (*(int*)e1 - *(int*)e2);
//}

//�����ṹ��
struct Student
{
	char name[20];
	int age;
};

//�ȽϺ���cmp �ȽϽṹ��by �ַ����Ƚ�
//int cmp_stu_by_name(const void* e1, const void* e2) {
//	return strcmp(((struct Student*)e1)->name, ((struct Student*)e2)->name);
//}
//int cmp_stu_by_age(const void* e1, const void* e2) {
//	return(((struct Student*)e1)->age - ((struct Student*)e2)->age);
//}
//
////int �Ƚ�
//void test() {
//	int arr[] = { 1,3,2,4,6,8,5,9,7,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubblw_sort(arr, sz);��ͨ��
//
//		// ����void*ʹ�����⣬����
//		// int a = 10;
//		//void* pv =&a;//void*���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//		//void*���޾������͵�ָ�룬���Բ��ܽ����ò�����Ҳ����+-����
//		//
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////�ṹ��Ƚ� 
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
//	//int ����
//	//test();
//	
//	//�ṹ�壬������������
//	test2();
//	return 0;
//}


// ģ��qsortʵ��ð������
//һ���ֽڵıȽ��ǱȽϺõģ���֪������������ʲô����

int cmp_int(const void* e1, const void* e2) {
	return (*(int*)e1 - *(int*)e2);
}

//�ȽϺ�������ںˡ������� ����
//ת����char��Ϊ�˴����벻ͬ�Ĳ���
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

//ģ��qsort
void bubble_sort(void* base, int sz, int width, int(*tmp)(const void* e1, const void* e2)) {
	int i = 0;
	//����
	for ( i = 0; i < sz-1; i++)
	{
		//һ��ð������Ĺ���
		int j = 0;
		int flag = 1;//�����������źõ�
		for ( j = 0; j < sz-1-i; j++)
		{
			//�Ƚϴ�С --�����ֽڡ���ȵĴ�С��Ӧ���ͣ�Ҳ�����±��Զ��ٵķ�ʽ�����ƶ�

			if (cmp_int( (char*)base+j*width, (char*)base +( j+1 )* width )>0)
			{
				//����
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







