#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <stdlib.h>
#include <time.h>


//编写一个猜数字游戏的程序，生成一个1到100之间的随机数，
//要求用户猜测该数字并输入。如果猜错了，提示用户输入的数字
//是“大”还是“小”，直到猜对为止。
int main() {
	int min = 1;
	int max = 100;
	int suijiNum ;
	int guNum;
	// 初始化随机数生成器种子
	srand(time(NULL));
	// 生成随机数
	int random_number = rand();
	// 生成 1 到 100 之间的随机数
	suijiNum = rand() % (max - min + 1) + min;
	printf("请猜测已经生成一个 1 到 100 之间的随机数。\n");
	printf("请输入：\n");
	printf("%d\n", suijiNum);
	while (1) {
		scanf("%d", &guNum);
		if (guNum>suijiNum)
		{
			printf("数字太大了\n");
			continue;
		}
		else if (guNum<suijiNum) {
			printf("数字太小了\n");
			continue;
		}
		else
		{
			printf("恭喜你！猜对了!\n");
			break;
		}
	}
	return 0;
}