#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;
#include <stdlib.h>
#include <time.h>


//��дһ����������Ϸ�ĳ�������һ��1��100֮����������
//Ҫ���û��²�����ֲ����롣����´��ˣ���ʾ�û����������
//�ǡ��󡱻��ǡ�С����ֱ���¶�Ϊֹ��
int main() {
	int min = 1;
	int max = 100;
	int suijiNum ;
	int guNum;
	// ��ʼ�����������������
	srand(time(NULL));
	// ���������
	int random_number = rand();
	// ���� 1 �� 100 ֮��������
	suijiNum = rand() % (max - min + 1) + min;
	printf("��²��Ѿ�����һ�� 1 �� 100 ֮����������\n");
	printf("�����룺\n");
	printf("%d\n", suijiNum);
	while (1) {
		scanf("%d", &guNum);
		if (guNum>suijiNum)
		{
			printf("����̫����\n");
			continue;
		}
		else if (guNum<suijiNum) {
			printf("����̫С��\n");
			continue;
		}
		else
		{
			printf("��ϲ�㣡�¶���!\n");
			break;
		}
	}
	return 0;
}