#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;


int main() {
	int year = 0;
	int month = 0;
	int day = 0;
	printf("请输入年月日");
	scanf("%d %*c %d %*c %d*", &year, &month, &day); //赋值忽略符
	printf("%d%d%d", year, month, day);

	return 0;
}