#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

int main() {
	int a;
	int he;
	printf("请输入一个整数：");
	scanf("%d", &a);
	he = a * a;
	printf("整数%d的平方为%d", a, he);
	return 0;
}