//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>;
////结构体--类似Java中的类
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[15];
//};
//void printStu(struct Stu* ps);//声明函数 取学生地址
//int main() {
//	struct Stu s = { "张三",20,"男","13453645678" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//结构体对象.成员名
//
//	printStu(&s);
//
//	return 0;
//}
//void printStu(struct Stu* ps){
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %d %s %s \n", ps->name, ps->age, ps->sex, ps->tele);
//}