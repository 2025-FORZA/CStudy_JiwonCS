#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int input[10];
    int output[10];

    for (int i = 0; i < 10; i++) {
        int x;
        while (1) {
            scanf("%d", &x);
            if (0 <= x && x < 1000) {
                input[i] = x;
                break;
            }
        }
    }

    int a = 1;
    for (int i = 0; i < 10; i++) {
        output[i] = input[i] % 42;
        if (i > 0) {
            if (output[i] != output[i - 1])
                a++;
        }
        if (i == 9)
            printf("%d", a);
    }
        
        return 0;
}
