#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include<ctype.h>//大小写转换导包

//1.编写一个程序，输入一行字符串，统计并输出该字符串中出现的
//所有字母的次数。
//只统计字母，忽略大小写。


//int main() {
//	char str[1000];
//	int count[26] = { 0 };//初始化每一个字母出现的次数
//	printf("请输入一行字符串: ");
//	fgets(str, sizeof(str), stdin);
//	int i = 0;
//	for (i = 0; str[i]!='\0'; i++)
//	{
//		char c = tolower(str[i]);
//		if (c>='a'&&c<='z')
//		{
//			count[c - 'a']++;//当前字符与‘a’之间的差值得到当前字符的下标
//			//字母表中的索引
//		}
//	}
//	printf("字母出现次数:\n");
//	for ( i = 0; i < 26; i++)
//	{
//		if (count[i]>0)//如果 count[i]为0,说明该字母在字符串中没有出现，因此不需要输出。
//		{
//			printf("%c: %d\n",'a'+i,count[i]);
//		}
//		
//	}
//
//	return 0;
//}

//2.– 定义一个 Student 结构体，包含 name ， age 和 gpa 三个成
//员。
//– 声明一个结构体数组，用于存储 5 名学生的信息。编写函数，
//输入 5 名学生的信息并输出 age 最大的学生信息。

//typedef struct Student
//{
//	char name[20];
//	int age;
//	float gpa;
//}Stu;
//
//void Stu_input(Stu* stu, int num) {
//    for (int i = 0; i < num; i++) {
//        printf("输入第 %d 名学生的信息:\n", i + 1);
//        printf("姓名: ");
//        fgets(stu[i].name, sizeof(stu[i].name), stdin);
//        stu[i].name[strcspn(stu[i].name, "\n")] = 0; 
//
//        printf("年龄: ");
//        scanf("%d", &stu[i].age);
//
//        printf("GPA: ");
//        scanf("%f", &stu[i].gpa);
//        while (getchar() != '\n');
//    }
//}
//
//void Stu_printf(Stu* stu, int num) {
//    int cmpMax = 0; // 假设第一个学生为年龄最大者
//    for (int i = 1; i < num; i++) { // 从 1 开始，因为 cmpMax 已经是 0
//        if (stu[i].age > stu[cmpMax].age) {
//            cmpMax = i; 
//        }
//    }
//
//    printf("\n年龄最大的学生信息:\n");
//    printf("姓名: %s\n", stu[cmpMax].name);
//    printf("年龄: %d\n", stu[cmpMax].age);
//    printf("GPA: %.2f\n", stu[cmpMax].gpa);
//}
//
//int main() {
//    Stu stu_arr[5];
//    Stu_input(stu_arr, 5);
//    Stu_printf(stu_arr, 5);
//
//    return 0;
//}




//3.编写一个程序，使用栈将一个中缀表达式转换为后缀表达式（即逆波
//兰表达式）。输出转换后的后缀表达式。
//• 中缀表达式是我们常见的表达式，比如 3 + 5 ，其中操作符位于操作数
//中间。
//• 后缀表达式（逆波兰表达式）不需要括号，操作符位于操作数之后。例
//如，中缀表达式 3 + 5 的后缀表达式为 3 5 + 。后缀表达式的好处是
//不需要考虑运算符的优先级和括号问题，适合通过栈来求值。
//– 程序需支持加法、减法、乘法、除法的运算符。


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//#define MAX 100 // 定义栈的最大容量
//
//// 定义栈结构
//typedef struct Stack {
//    char items[MAX]; // 存储栈中的元素
//    int top;        // 栈顶索引
//} Stack;
//
//// 初始化栈
//void initStack(Stack* s) {
//    s->top = -1; // 栈顶索引初始化为 -1，表示栈为空
//}
//
//// 判断栈是否为空
//int isEmpty(Stack* s) {
//    return s->top == -1; // 如果 top 为 -1，表示栈为空
//}
//
//// 判断栈是否满
//int isFull(Stack* s) {
//    return s->top == MAX - 1; // 如果 top 达到 MAX - 1，表示栈满
//}
//
//// 入栈
//void push(Stack* s, char item) {
//    if (!isFull(s)) { // 检查栈是否满
//        s->items[++(s->top)] = item; // 将元素放入栈顶，并更新栈顶索引
//    }
//}
//
//// 出栈
//char pop(Stack* s) {
//    if (!isEmpty(s)) { // 检查栈是否为空
//        return s->items[(s->top)--]; // 返回栈顶元素，并更新栈顶索引
//    }
//    return '\0'; // 返回空字符表示栈为空
//}
//
//// 获取栈顶元素
//char peek(Stack* s) {
//    if (!isEmpty(s)) { // 检查栈是否为空
//        return s->items[s->top]; // 返回栈顶元素但不弹出
//    }
//    return '\0'; // 返回空字符表示栈为空
//}
//
//// 判断运算符优先级
//int precedence(char op) {
//    switch (op) {
//    case '+':
//    case '-':
//        return 1; // 加法和减法的优先级为 1
//    case '*':
//    case '/':
//        return 2; // 乘法和除法的优先级为 2
//    default:
//        return 0; // 未知运算符的优先级为 0
//    }
//}
//
//// 中缀表达式转后缀表达式
//void infixToPostfix(const char* infix, char* postfix) {
//    Stack s;          // 声明一个栈用于存放运算符
//    initStack(&s);   // 初始化栈
//    int j = 0;       // 后缀表达式的索引
//
//    // 遍历中缀表达式中的每一个字符
//    for (int i = 0; infix[i] != '\0'; i++) {
//        char token = infix[i]; // 当前字符
//
//        // 如果是空格，跳过
//        if (token == ' ') {
//            continue; // 继续到下一个字符
//        }
//
//        // 如果是操作数（数字），直接添加到后缀表达式
//        if (isdigit(token)) {
//            postfix[j++] = token; // 添加操作数到后缀表达式
//            postfix[j++] = ' ';    // 添加空格分隔操作数
//        }
//        // 如果是左括号，入栈
//        else if (token == '(') {
//            push(&s, token); // 将左括号推入栈中
//        }
//        // 如果是右括号，弹出栈直到遇到左括号
//        else if (token == ')') {
//            // 弹出所有运算符直到遇到左括号
//            while (!isEmpty(&s) && peek(&s) != '(') {
//                postfix[j++] = pop(&s); // 弹出运算符并添加到后缀表达式
//                postfix[j++] = ' ';      // 添加空格分隔运算符
//            }
//            pop(&s); // 弹出左括号，但不添加到后缀表达式
//        }
//        // 如果是运算符
//        else {
//            // 弹出栈中优先级高于或等于当前运算符的运算符
//            while (!isEmpty(&s) && precedence(peek(&s)) >= precedence(token)) {
//                postfix[j++] = pop(&s); // 弹出运算符并添加到后缀表达式
//                postfix[j++] = ' ';      // 添加空格分隔运算符
//            }
//            push(&s, token); // 将当前运算符推入栈中
//        }
//    }
//
//    // 弹出栈中剩余的运算符
//    while (!isEmpty(&s)) {
//        postfix[j++] = pop(&s); // 弹出剩余运算符
//        postfix[j++] = ' ';      // 添加空格分隔运算符
//    }
//    postfix[j] = '\0'; // 结束后缀表达式
//}
//
//int main() {
//    char infix[MAX];   // 用于存储输入的中缀表达式
//    char postfix[MAX]; // 用于存储输出的后缀表达式
//
//    printf("请输入中缀表达式: ");
//    fgets(infix, sizeof(infix), stdin); // 读取用户输入的中缀表达式
//    // 去掉输入行末的换行符
//    infix[strcspn(infix, "\n")] = '\0'; // 去除换行符
//
//    infixToPostfix(infix, postfix); // 调用函数转换中缀表达式为后缀表达式
//    printf("后缀表达式: %s\n", postfix); // 输出后缀表达式
//
//    return 0;
//}

//使用队列模拟一个任务处理系统，用户输入任务的 task_id 和
//priority 。将任务按输入顺序添加到队列中，并依次处理任务，
//输出每个任务的 task_id 。
//• 提示：
//– 使用结构体存储任务信息，队列按照先进先出的顺序处理任务。
//– 队列操作包括 enqueue 和 dequeue 。

#include <stdio.h>
#include <stdlib.h>

//#define MAX 100 // 定义队列的最大大小
//
//// 定义任务结构体
//typedef struct Task {
//    int task_id;    // 任务的唯一ID
//    int priority;   // 任务的优先级
//} Task;
//
//// 定义队列结构体
//typedef struct Queue {
//    Task tasks[MAX]; // 存储任务的数组，最大容量为 MAX
//    int front;       // 队列的前端索引
//    int rear;        // 队列的后端索引
//} Queue;
//
//// 初始化队列
//void initQueue(Queue* q) {
//    q->front = 0; // 设置队列前端索引为 0
//    q->rear = 0;  // 设置队列后端索引为 0
//}
//
//// 判断队列是否为空
//int isEmpty(Queue* q) {
//    return q->front == q->rear; // 如果前后索引相同，则队列为空
//}
//
//// 判断队列是否满
//int isFull(Queue* q) {
//    return (q->rear + 1) % MAX == q->front; // 如果后端索引+1等于前端索引，则队列满
//}
//
//// 入队操作
//void enqueue(Queue* q, Task task) {
//    if (!isFull(q)) { // 先检查队列是否已满
//        q->tasks[q->rear] = task; // 将任务添加到队列
//        q->rear = (q->rear + 1) % MAX; // 更新后端索引，使用模运算实现循环
//    }
//    else {
//        printf("队列已满，无法添加任务！\n"); // 提示队列已满
//    }
//}
//
//// 出队操作
//Task dequeue(Queue* q) {
//    if (!isEmpty(q)) { // 先检查队列是否为空
//        Task task = q->tasks[q->front]; // 获取队列前端的任务
//        q->front = (q->front + 1) % MAX; // 更新前端索引，使用模运算实现循环
//        return task; // 返回出队的任务
//    }
//    else {
//        printf("队列为空，无法出队！\n"); // 提示队列为空
//        Task emptyTask = { 0, 0 }; // 返回一个空任务，避免返回未定义的值
//        return emptyTask;
//    }
//}
//
//// 主函数
//int main() {
//    Queue q; // 声明一个队列
//    initQueue(&q); // 初始化队列
//
//    int n; // 任务数量
//    printf("请输入任务数量: ");
//    scanf("%d", &n); // 输入任务数量
//
//    for (int i = 0; i < n; i++) {
//        Task task; // 声明一个任务结构体
//        printf("请输入任务ID和优先级 (格式: ID 优先级): ");
//        scanf("%d %d", &task.task_id, &task.priority); // 输入任务ID和优先级
//        enqueue(&q, task); // 将任务入队
//    }
//
//    printf("\n处理任务:\n");
//    // 依次处理队列中的任务，直到队列为空
//    while (!isEmpty(&q)) {
//        Task task = dequeue(&q); // 出队
//        printf("处理任务 ID: %d\n", task.task_id); // 输出处理的任务ID
//    }
//
//    return 0; // 程序正常结束
//}


