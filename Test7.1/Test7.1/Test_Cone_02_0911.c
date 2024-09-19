#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

1. 编写一个程序，要求用户输入一个正整数，使用for循环计算
并输出从1到该整数的所有整数之和。
int main() {
    int num, sum = 0;

    printf("请输入一个正整数：");
    scanf("%d", &num);

    if (num <= 0) {
        printf("输入无效，请输入一个正整数。\n");
        return 1; // 退出程序，返回错误代码
    }

    for (int i = 1; i <= num; i++) {
        sum += i;
    }
		//while 循环
    int i = 0;
    while (i <= num) {
        sum += i;
        i++;
    }

    printf("从 1 到 %d 的所有整数之和是：%d\n", num, sum);

    return 0;
}

int main() {
    int num;
    int sum = 0;
    int count = 0;
    printf("请输入正整数（输入负数时停止）：\n");
    while (1) {
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        sum += num;
        count++;
    }
    if (count > 0) {
        double average = (double)sum / count;
        printf("所有输入整数的平均值是：%.2f\n", average);
    }
    else {
        printf("没有输入任何正整数。\n");
    }
    return 0;
}
