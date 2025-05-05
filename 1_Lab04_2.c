#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    int num;

    scanf("%d", &num);

    int sum[num];

    for (int i = 0; i < num; i++) {
        scanf("%d %d", &x, &y);
        sum[i] = x + y;
    }

    for (int i = 0; i < num; i++) {
        printf("%d\n", sum[i]);
    }

    return 0;
}