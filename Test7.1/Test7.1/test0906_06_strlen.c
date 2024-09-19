//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>;
//#include <string.h>
//
////字符串
//int main() {
//	char arr1[] = "dsyyntd";
//	char arr2[] = "dsnyd";
//	char arr3[] = { 'a','b','c','d','f','g','fs','g','sfgd' };//字符串自己找\0才结束
//	char arr4[] = { 'a','b','c','d','f','g','fs','g','sfgd','\0'};//可以自己加\0使其结束
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//	int len1 = strlen(arr1);
//	int len2 = strlen(arr2);
//	int len3 = strlen(arr3);
//	int len4 = strlen(arr4);
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//	printf("%d\n", len4);
//	
//	printf("%d\n", sizeof(arr4));//seziof \0算内存 strlen \0不算内存
//
//	for (size_t i = 0; i < strlen(arr4); i++)
//	{
//		printf("%c\n", arr4[i]);
//	}
//
//	return 0;
//}