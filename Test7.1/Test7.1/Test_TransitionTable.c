#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

//ת�Ʊ� eg��������

//1.��ͨ�汾
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}
void menu() {
	printf("*************************\n");
	printf(" 1:�ӷ�           2:���� \n");
	printf(" 3:�˷�           4:���� \n");
	printf(" 0:�˳�\n");
	printf("*************************\n");
}
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

int main() {
	int x = 0;
	int y = 0;
	int input = 0;
	int ret = 0;
	int(*arr[])(int, int) = { 0,add,sub,mul,div };
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		if (input==0)
		{
			printf("�˳�����\n");
		}
		else if (input>=1&&input<=4) {
			printf("�����������");
			scanf("%d %d", &x, &y);

			if (input == 4 && y == 0) {
				printf("���󣺳�������Ϊ�㣬����������\n");
			}
			else {
				ret = arr[input](x, y);
				printf("ret = %d\n", ret);
			}

		}else
		{
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}

