//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>;
////�ṹ��--����Java�е���
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[15];
//};
//void printStu(struct Stu* ps);//�������� ȡѧ����ַ
//int main() {
//	struct Stu s = { "����",20,"��","13453645678" };
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//�ṹ�����.��Ա��
//
//	printStu(&s);
//
//	return 0;
//}
//void printStu(struct Stu* ps){
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
//	//->
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s \n", ps->name, ps->age, ps->sex, ps->tele);
//}