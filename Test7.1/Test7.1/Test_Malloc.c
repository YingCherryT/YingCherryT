#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include<string.h>
#include<errno.h>

//1.
//void GetMemory(char* p)//�������һ������������һ��ָ��ʱ���������յ��������ָ��ĸ�����
////����ζ���ں����ڶ����ָ����κ��޸ģ��������·����ڴ棩����Ӱ�쵽���ú����е�ԭʼָ�롣
//
////����ı�һ��ָ���ֵ����Ҫ����ָ��������
//
////�ڴ�й©���ֲ�������û��free��p���ý����������Ҳ�������ĵ�ַ
//{
//	p = (char*)malloc(100);
//}
//
////��ȷд��
////��һ��
//char* GetMemory() {
//	return (char*)malloc(100); // ���� 100 �ֽ��ڴ沢����ָ��
//}
////�ڶ���
//void GetMemory(char** p) {
//	*p = (char*)malloc(100); // ʹ��ָ��ָ���ָ������ڴ�
//}
//
//void Test(void) {
//	//��һ��
//	char* str = GetMemory(); // ���� GetMemory ��ȡ������ڴ�
//	//�ڶ���
//	char* str = NULL; // ��ʼ�� str Ϊ NULL
//	GetMemory(&str); // ��
//	if (str) { // ����ڴ�����Ƿ�ɹ�
//		strcpy(str, "hello world"); // ���ַ������Ƶ�������ڴ���
//		printf("%s\n", str); // ��ӡ str ������
//		free(str); // �ͷ��ڴ�
//		str=NULL;
//	}
//	else {
//		printf("Memory allocation failed.\n");
//	}
//}
//
//void Test(void)
//{
//	char* str = NULL;//���ǿ�ָ��
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////��������Test ��������ʲô���Ľ����ʧ�ܣ�
//int main() {
//
//	//Test();
//
//	return 0;
//}

//int main() {
//	//����printf(str);����ʽ
//	printf("hello world\n");
//	char* p ="hello world\n";
//	printf(p);
//	printf("%s", p);
//
//}


//2.
// 
//char *GetMemory(void)
//{
//	////����ջ�ռ�ĵ�ַ������
//
//	char p[] = "hello world";
//	return p;
//}
//
////GetMemory ��������һ��ָ��ֲ����� p ��ָ�룬���������ں������غ�ᱻ���١�
////��������ϵͳ��str����Ұָ�룬ָ��Ŀռ䲻��������
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}

//int main() {
//	//Test();
//}
// 

//�޸�֮��Ĵ���

//char* GetMemory(void)
//{
//    char* p = malloc(12); // �����㹻�Ŀռ�
//    if (p != NULL) {
//        strcpy(p, "hello world"); // �����ַ���
//    }
//    return p; // ����ָ��̬�����ڴ��ָ��
//}
//
//void Test(void)
//{
//    char* str = GetMemory();
//    if (str != NULL) {
//        printf("%s\n", str); // ʹ�� %s ��ʽ�����
//        free(str);
//        str = NULL;// �ͷŷ�����ڴ�
//    }
//}
//
//int main() {
//    Test();
//    return 0;
//}


//3.
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//�ڴ�й©
//    free(str);
//    str = NULL;// �ͷŷ�����ڴ�
//
//}
//int main() {
	//Test();
//

//4.

//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);//�ռ䲻�������� str���ǵ� Ұָ��
//    if (str != NULL)
//    {
//        strcpy(str, "world");
//        printf(str);
//    }
//
//}