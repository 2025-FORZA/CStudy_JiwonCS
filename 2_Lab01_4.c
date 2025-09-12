#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int arr[9][9];
    int max = -1; // 입력이 0 이상이므로 -1로 초기화
    int row = 0, col = 0;

    // 입력 받기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max) {
                max = arr[i][j];
                row = i + 1; // 문제에서 행, 열은 1부터 시작
                col = j + 1;
            }
        }
    }

    printf("%d\n", max);
    printf("%d %d\n", row, col);

    return 0;
}
