#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    int sum = x + y;
    printf("%d", sum);

    return 0;
}