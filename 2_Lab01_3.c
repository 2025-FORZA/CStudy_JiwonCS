#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    long long result = 1;
    for (int i = 2; i <= N; i++) {
        result *= i;
    }

    printf("%lld\n", result);
    return 0;
}
