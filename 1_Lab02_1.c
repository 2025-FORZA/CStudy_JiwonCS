#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    long long x, y, z, output;
    scanf("%lld %lld %lld", &x, &y, &z);
    output = x + y + z;
    printf("%lld\n", output);

    return 0;
}