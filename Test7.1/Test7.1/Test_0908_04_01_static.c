#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//全局变量-有外部链接属性
int g_val = 2024;
//静态全局变量—类似Java私有化
static int g_val1 = 2023;

int Add(int a, int b);
static int Add1(int a, int b);

int Add(int a, int b) {
	return a+b;
}
static int Add1(int a, int b){
	return a + b;
}


int main() {

	printf("");

	return 0;
}