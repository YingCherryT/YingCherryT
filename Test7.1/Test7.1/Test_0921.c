#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

//整形的存储

//1.大小端
//int check_sys() {
//	int a = 1;
//	return *(char*)&a;
//}
////判断大小端
////栈区：在内存中先放高地址，位置再放地址位置
//int main() {
//	int rel = check_sys();
//	if (rel==1)
//	{
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	return 0;
//}

//判断大小端:方法二 union
//int check_sys()
//{
//	union//联合体:它允许在同一内存位置存储不同的数据类型
//		//但同一时间只能使用其中一个
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main() {
//	int rel = check_sys();
//	if (rel==1){
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0; 
//}

//char默认是有符号的数值，所以补码按位取反-1得到负1
//改成无符号数值，编译器很大的正数,符号位参与计算

//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//2.整形提升 ——先截断，高位补值
//.有符号char:在整型提升中， 负数会通过符写扩展(即高位补充符号位)来保持其值。
//.无符号char : 在整型提升中，通过零扩展(即高位填充0)来保持其值。

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}
//
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//
//int main() {
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}

//int main() {
//	unsigned int i;//不会有<0的时候
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//死循环
//	}
//	return 0;
//}

//strlen是求字符串的长度，关注的是字符串中'\0' (数字0)之前出现多少字符
//128+127=255;
//int main(){
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//unsigned char 类型的取值范围是0~255
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//浮点型在内存中的存储
//存储方式的不同

//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}

//(-1)^S * M * 2^E
//(-1) ^ s表示符号位，当s = 0，V为正数；当s = 1，V为负数。
//M表示有效数字，大于等于1，小于2。
//2 ^ E表示指数位。
//转2进制，科学计数法 
//1≤M<2 ，也就是说，M可以写成 1.xxxxxx 的形式，只保存xxxxxx
//等到读取的时候，再把第一位的1加上去
//将第一位的1舍去以后，等于可以保存24位有效数字。
//首先，E为一个无符号整数（unsigned int）
//9 -> 0000 0000 0000 0000 0000 0000 0000 1001
//V = (-1) ^ 0 × 0.00000000000000000001001×2 ^ (-126) = 1.001×2 ^ (-146)
//V是一个很小的接近于0的正数，所以用十进制小数表示就是0.000000
//9.0 -> 1001.0 ->(-1)^01.0012^3 -> s=0, M=1.001,E=3+127=130
//0 10000010 001 0000 0000 0000 0000 0000
//32位的二进制数，还原成十进制，正是 1091567616