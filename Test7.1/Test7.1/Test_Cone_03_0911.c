#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

////九九乘法表
int main() {
	int chen;
	int i = 1;
	int j = 1;
	for ( i = 1; i < 10; i++)
	{
		//printf("%d", i);
		for ( j = 1; j < i; j++)
		{
			chen = i * j;
			//printf("%d\n",chen);
			printf("%d * %d = %d  ", j, i, chen);
		}
		printf("\n");
	}
	return 0;
}
 


//允许用户输入一个正整数n，输出n*n的乘法表
int main() {
	int chen;
	int num;
	int i = 1;
	int j = 1; 
	printf("请输入一个正整数：\n");
	scanf("%d", &num);
	//printf("菽粟 %d",num);
	//printf("%d %d %d", i, j,num);
	// 检查用户输入是否合法
	if (num <= 0) {
		printf("输入无效，请输入一个正整数。\n");
		return 1; // 退出程序，返回错误代码
	}
	for (i = 1; i <= num; i++)
	{
		//printf("%d", i);
		for (j = 1; j <= i; j++)
		{
			chen = i * j;
			//printf("%d\n",chen);
			printf("%d * %d = %d  ", j, i, chen);
		}
		printf("\n");
	}
	return 0;

}