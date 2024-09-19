//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>;
//int countCall();
//int main() {
//	int toCall = 6;
//	int i;
//	for (i = 1; i <= toCall; i++) {
//		countCall();
//	}
//
//	//countCall();
//	//countCall();
//	//countCall();
//	//countCall();
//
//	printf("调用的次数为%d", countCall());
//
//	return 0;
//}
//int countCall() {
//	static int num = 0;
//	return num++;
// }





//void countCall();
//int main() {
//	int toCall = 6;
//	int i;
//	for (i = 1; i <= toCall; i++) {
//		countCall();
//	}
//}
//void countCall() {
//	static int num = 0;
//	num++;
//	printf("调用的次数为%d\n", num);
//}


















//int countCall(int toCall, int lastcall);
//int main() {
//	int toCall = 6;
//	int i;
//	for (i = 1; i <= toCall; i++) {
//		countCall(toCall, i);
//	}
//
//	printf("调用的次数为%d", countCall(toCall,i));
//
//	return 0;
//}
//
//int countCall(int toCall,int lastcall) {
//	static int num = 0;
//	 num++;
//	if (lastcall == toCall) {
//		printf("最后一次调用 %d\n", num);
//	}
//	return num;
//}