#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//�����ⲿ����
extern int g_val;
extern int g_val1;
extern int Add(int a, int b);
int main() {
	int num1, num2;
	printf("%d\n",g_val);
	//printf("%d\n", g_val1);
	printf("������2������");
	scanf("%d %d", &num1, &num2);
	printf("%d\n", Add(num1, num2));
	return 0;
}