#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
//ȫ�ֱ���-���ⲿ��������
int g_val = 2024;
//��̬ȫ�ֱ���������Java˽�л�
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