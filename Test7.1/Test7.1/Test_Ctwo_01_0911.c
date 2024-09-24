#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include<string.h>
#include<errno.h>
#include <stdlib.h>

//1.编写一个程序，提示用户输入一个整数，判断该整数是正数、负
//数还是零，并输出相应的结果。使用 if...else if...else 语句。
//判断该整数是否为偶数或奇数，并输出结果


int main() {
	int num,rel;
	printf("请输入一个整数");
	rel=scanf("%d", &num);
	//printf("%d", num);
	if (rel ==1)
	{
		if (num >0)
		{
			printf("您输入的整数是正数。\n");
		}
		else if (num <0) {
			printf("您输入的整数是负数。\n");
		}
		else
		{
			printf("您输入的整数是零。\n");
		}

		if (num % 2 == 0) {
			printf("该整数是偶数。\n");
		}
		else {
			printf("该整数是奇数。\n");
		}
	}
	else
	{
		printf("输入无效，请输入一个有效的整数。\n");
		while (getchar() != '\n');
	}
	return 0;
}

//2.编写一个函数 findMax，接受两个整数作为参数，返回其中较大
//的一个。在 main 函数中调用该函数，输出两个整数的较大值。

int findMax(int a,int b);
int main() {
	int num1, num2,rel;
	printf("请输入两个整数，中间用空格隔开: ");
	rel=scanf("%d %d", &num1, &num2);
	//printf("%d %d", num1, num2);
	if (rel==2)
	{
		if (num1=num2)
		{
			printf("两个整数相等。\n");
		}
		else
		{
			rel = findMax(num1, num2);
			printf("两个整数中较大的值是: %d\n", rel);
		}
		
	}
	else {
		printf("输入无效，请输入2个有效的整数,整数之间需要空格。\n");
		while (getchar() != '\n');
	}
	return 0;
}
int findMax(int a, int b) {
	if (a>b)
	{
		return a;
	}
	else  {
		return b;
	}
	return 0;
}

//修改程序，使其能够使用 findMax 函数找出三个整数中的最大值

int findMax(int a, int b);
int main() {
	int num1, num2,num3,rel;
	while (2) {
		printf("请输入三个整数，中间用空格隔开: ");
		rel = scanf("%d %d %d", &num1, &num2, &num3);
		//printf("%d %d", num1, num2);
		if (rel == 3)
		{
			if (num1 == num2 && num2 == num3)
			{
				printf("三个整数相等。\n");
			}
			else  if (num1 == num2 || num2 == num3 || num1 == num3) {
				printf("有两个或者三个整数相等。\n");
				rel = findMax(findMax(num1, num2), num3);
				printf("三个整数中较大的值是: %d\n", rel);
				break;
			}
			else
			{
				rel = findMax(findMax(num1, num2), num3);
				printf("三个整数中较大的值是: %d\n", rel);
				break;
			}

		}
		else {
			printf("输入无效，请输入2个有效的整数,整数之间需要空格。\n");
			while (getchar() != '\n');
		}
	}
	return 0;
}
int findMax(int a, int b) {
	
	return (a > b) ? a : b;
}

// ！！！！运行的时候不使用使用其新定义的函数

int findMax(int a, int b, int c);
int findMax(int a, int b, int c); int findMax(int a, int b, int c) {
	// 找到 a 和 b 中的较大值
	int max = (a > b) ? a : b;
	// 在之前找到的较大值和 c 中的较大值中找出最大值
	max = (max > c) ? max : c;
	return max;
}
int findMaxThree(int a, int b, int c) {
	// 使用 findMax 函数找出 a 和 b 中的较大值
	int maxAB = findMax(a, b);
	// 使用 findMax 函数找出 maxAB 和 c 中的较大值
	return findMax(maxAB, c);
}

//3.编写一个程序，定义一个包含5个整数的数组，提示用户输入5个
//整数，将它们存储在数组中，然后输出这些整数的总和。

int main() {
	int arr[5];
	int sum = 0;
	printf("请输入5个整数，中间用空格隔开，或者 每个整数后面按回车键确认:\n");
	for (int i = 0; i < 5; i++)
	{
		//printf("请输入第 %d 个整数: ", i + 1);
		if (scanf("%d", &arr[i])!=1) {
			printf("输入无效，请从第%d个整数输入。\n",i+1);
			while (getchar()!= '\n');
			i--;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("输入的整数总和是: %d\n", sum);
	return 0;
}

//找出数组中的最大值和最小值，并输出结果
int main() {
	int arr[5];
	int sum = 0;
	int max, min;
	printf("请输入5个整数，中间用空格隔开，或者 每个整数后面按回车键确认:\n");
	for (int i = 0; i < 5; i++)
	{
		//printf("请输入第 %d 个整数: ", i + 1);
		if (scanf("%d", &arr[i])!=1) {
			printf("输入无效，请从第%d个整数输入。\n",i+1);
			while (getchar()!= '\n');
			i--;
		}
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];

		if (arr[i]>max)
		{
			max = arr[i];
		}
		if (arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("输入的整数总和是: %d\n", sum);
	printf("输入的整数中最大值是: %d\n", max);
	printf("输入的整数中最小值是: %d\n", min);
	return 0;
}

//函数的写法

void findMaxMin(int* arr, int size, int* max, int* min, int* sum);
int main() {
	int arr[5];
	int sum ;
	int max, min;
	printf("请输入5个整数，中间用空格隔开，或者 每个整数后面按回车键确认:\n");
	for (int i = 0; i < 5; i++)
	{
		//printf("请输入第 %d 个整数: ", i + 1);
		if (scanf("%d", &arr[i]) != 1) {
			printf("输入无效，请从第%d个整数输入。\n", i + 1);
			while (getchar() != '\n');
			i--;
		}
	}
	
	findMaxMin(arr, sizeof(arr) / sizeof(arr[0]), &max, &min,&sum);
	

	printf("输入的整数总和是: %d\n", sum);
	printf("输入的整数中最大值是: %d\n", max);
	printf("输入的整数中最小值是: %d\n", min);
	
	return 0;
}
void findMaxMin(int *arr, int size, int* max, int* min,int *sum) {
	
	*sum = 0; // 确保总和从0开始
	*max = arr[0];
	*min = arr[0];
	
	for (int i = 0; i < size; i++)
	{
	
		*sum += arr[i];
		if (arr[i]>*max)
		{
			*max = arr[i];
		}
		if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}

//4.编写一个程序，定义一个整数变量并赋值为10，然后定义一个指
//向该整数的指针，通过指针修改整数的值为20，并输出修改后的值。


void priArr(int*arr,int size);
int main() {
	int a = 10;
	int* p=&a;
	*p = 20;
	printf("整数%d", a);

	//扩展程序，定义一个指向数组的指针，使用指针遍历数组并输出
	//每个元素的值

	//函数解决
	int arr[5];
	printf("请输入5个整数，中间用空格隔开，或者 每个整数后面按回车键确认:\n");
	for (int i = 0; i < 5; i++)
	{
		if (scanf("%d", &arr[i]) != 1) {
			printf("输入无效，请从第%d个整数输入。\n", i + 1);
			while (getchar() != '\n');
			i--;
		}
	}
	//priArr(arr, 5);
	int* arrp = arr;
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", *(arrp + i));
	}

	return 0;
}

void priArr(int* arr,int size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
		//printf("%d ", *(arr + i));
	}
}


//1.1编写一个程序，实现简单的计算器功能。提示用户输入两个整数
//和一个操作符（ + , -, *, / ），根据操作符的不同，调用不同的
//函数执行相应的运算，并输出结果。
//– 确保处理除数为零的情况，并输出错误信息而不是退出程序

int Add(int x, int y);
int jian(int x, int y);
int chen(int x, int y);
int chu(int x, int y);
int main() {
	int num1, num2;
	int rel, rel2;
	char fuhao;
	while (1) {
		printf("请输入两个整数和一个操作符（ + , -, *, / ）: \n");
		rel2 =scanf("%d %d %c", &num1, &num2, &fuhao);
		if (rel2 ==3)
		{
			switch (fuhao)
			{
				case'+':
					rel = Add(num1, num2);
					printf("结果: %d\n", rel);
					break;
				case'-':
					rel = jian(num1, num2);
					printf("结果: %d\n", rel);
					break;
				case'*':
					rel = chen(num1, num2);
					printf("结果: %d\n", rel);
					break;
				case'/':
					if (num2!=0)
					{
						rel = Add(num1, num2);
						printf("结果: %.2f\n", (float)rel);
						break;
					}
					else {
						printf("错误: 除数不能为零。请重新输入。\n");
						continue;
					}
			}
			break;
		}
		else
		{
			printf("输入无效，请输入两个整数和一个操作符（ + , -, *, / ）\n");
			while (getchar() != '\n');
		}
	}
	return 0;
}

int Add(int x, int y){
	return x + y;
}
int jian(int x, int y) {
	return x - y;
}
int chen(int x, int y) {
	return x * y;
}
int chu(int x, int y) {
	return x / y;
}



//2.1编写一个程序，动态分配一个包含5个整数的数组内存，并提示用
//户输入这5个整数。
//– 计算并输出这些整数的平均值，然后释放分配的内存。

int* GetMemory(int num) {
	int* p = malloc(num * sizeof(int));
	if (p == NULL) {
		printf("内存分配失败: %s\n", strerror(errno));
	}
		return p;
}
void Test() {
	int num = 5;
	int* str = GetMemory(num);
	if (str==NULL)
	{
		return;
	}
		printf("请输入5个整数\n");
		scanf("%d %d %d %d %d", str);
		printf("你输入的整数是: ");
		int i = 0;
		for (i = 0; i < num; i++)
		{
			printf("%d ", *(str + i));
		}
		printf("\n"); // 添加换行符
		free(str);
		str = NULL;
	
}

int main() {
	//Test();
	int num = 5;
	int* p = (int*)malloc(num * sizeof(int));
	if (p==NULL)
	{
		printf("内存分配失败: %s\n", strerror(errno));
		return 1;
	}

	printf("请输入5个整数: ");
	for (int i = 0; i < num; i++) {
		scanf("%d", &p[i]); 
	}
	printf("输入的值为: ");
	for (int i = 0; i < num; i++) {
		printf("%d ", p[i]);
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += p[i];
	}
	double average = sum / (double)num; 

	printf("这5个整数的平均值是: %.2f\n", average);

	
	return 0;
}

//编写一个程序，使用指针和动态内存分配创建一个 struct 数组，
//存储3个学生的信息（姓名、年龄、GPA）。
//– 然后通过指针访问和修改其中一个学生的GPA，并输出修改后的信
//息。最后释放分配的内存。

typedef struct stu
{
	char name[20];
	int age;
	float gpa;
}Su;

void modifyGPA(Su* student, float newGPA) {
    student->gpa = newGPA;
}

int main() {
    Su* students = (Su*)malloc(3 * sizeof(Su));

    if (students == NULL) {
        printf("内存分配失败。\n");
        return 1;
    }

    strcpy(students[0].name, "zhangsan");
    students[0].age = 22;
    students[0].gpa = 2.2f;

    strcpy(students[1].name, "lisi");
    students[1].age = 24;
    students[1].gpa = 3.4f;

    strcpy(students[2].name, "wangwu");
    students[2].age = 26;
    students[2].gpa = 3.2f;

    printf("学生信息:\n");
    for (int i = 0; i < 3; i++) {
        printf("姓名: %s, 年龄: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }

    modifyGPA(&students[1], 3.8f); 

    printf("\n修改后的学生信息:\n");
    for (int i = 0; i < 3; i++) {
        printf("姓名: %s, 年龄: %d, GPA: %.2f\n", students[i].name, students[i].age, students[i].gpa);
    }

    free(students);
    students = NULL; 

    return 0;
}
