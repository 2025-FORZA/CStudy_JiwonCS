#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    int M = 0;            // �ְ� ����
    int score[1000];      // ���� ���� (�ִ� 1000�� ������ �����ϰ� ����)
    double sum_new = 0;   // ���ο� ���� ��

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        if (score[i] > M)
            M = score[i];   // �ְ� ���� ����
    }

    for (int j = 0; j < N; j++) {
        sum_new += (double)score[j] / M * 100; // ���ο� ���� ��
    }

    printf("%f\n", sum_new / N);  // ��� ��� (�Ҽ��� �״��)

    return 0;
}
