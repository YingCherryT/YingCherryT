#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

//转移表 eg：计算器

//1.普通版本
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
	printf(" 1:加法           2:减法 \n");
	printf(" 3:乘法           4:除法 \n");
	printf(" 0:退出\n");
	printf("*************************\n");
}
//普通版本main

//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			if (y == 0) {
//				printf("错误：除数不能为零，请重新输入\n");
//			}
//			else {
//				ret = div(x, y);
//				printf("ret = %d\n", ret);
//			}
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//发现每次运算都需要重新输入，只是运算过程不同
// 这几个函数的参数和返回值类型都相同

//2.通过函数调用函数

//void calc(int (*p)(int,int)) {
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("输入操作数：");
//	scanf("%d %d", &x, &y);
//
//	// 处理除法的特殊情况
//	if (p == div && y == 0) {
//		printf("错误：除数不能为零，请重新输入\n");
//		return; // 返回，避免调用除法
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
//		printf("请选择：");
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
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}


//3.用函数指针数组

//测试函数指针数组
//int main() {
//	int(*pf)(int, int) = add;//函数指针
//	int(*arr[4])(int, int) = { add,sub,mul,div };//arr函数指针数组
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d ", ret);
//	}
//	return 0;
//}

//实现计算器

int main() {
	int x = 0;
	int y = 0;
	int input = 0;
	int ret = 0;
	int(*arr[])(int, int) = { 0,add,sub,mul,div };
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		if (input==0)
		{
			printf("退出程序\n");
		}
		else if (input>=1&&input<=4) {
			printf("输入操作数：");
			scanf("%d %d", &x, &y);

			if (input == 4 && y == 0) {
				printf("错误：除数不能为零，请重新输入\n");
			}
			else {
				ret = arr[input](x, y);
				printf("ret = %d\n", ret);
			}

		}else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}

