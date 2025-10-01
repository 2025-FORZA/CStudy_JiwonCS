#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    int M = 0;            // 최고 점수
    int score[1000];      // 점수 저장 (최대 1000개 정도는 안전하게 선언)
    double sum_new = 0;   // 새로운 점수 합

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        if (score[i] > M)
            M = score[i];   // 최고 점수 갱신
    }

    for (int j = 0; j < N; j++) {
        sum_new += (double)score[j] / M * 100; // 새로운 점수 합
    }

    printf("%f\n", sum_new / N);  // 평균 출력 (소수점 그대로)

    return 0;
}
