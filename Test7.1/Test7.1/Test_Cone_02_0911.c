#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>;

1. ��дһ������Ҫ���û�����һ����������ʹ��forѭ������
�������1������������������֮�͡�
int main() {
    int num, sum = 0;

    printf("������һ����������");
    scanf("%d", &num);

    if (num <= 0) {
        printf("������Ч��������һ����������\n");
        return 1; // �˳����򣬷��ش������
    }

    for (int i = 1; i <= num; i++) {
        sum += i;
    }
		//while ѭ��
    int i = 0;
    while (i <= num) {
        sum += i;
        i++;
    }

    printf("�� 1 �� %d ����������֮���ǣ�%d\n", num, sum);

    return 0;
}

int main() {
    int num;
    int sum = 0;
    int count = 0;
    printf("�����������������븺��ʱֹͣ����\n");
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
        printf("��������������ƽ��ֵ�ǣ�%.2f\n", average);
    }
    else {
        printf("û�������κ���������\n");
    }
    return 0;
}
