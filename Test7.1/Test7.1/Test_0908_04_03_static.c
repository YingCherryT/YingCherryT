#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

//static 局部变量
void test();
int main() {
	int i = 0;
	for (size_t i = 0; i < 10; i++)
	{
		test();
		printf("hh%d\n",i);
	}
	return 0;
}

void test() {
	//int i = 0; 
	static int i = 0;
	i++;
	printf("%d\n", i);
}
