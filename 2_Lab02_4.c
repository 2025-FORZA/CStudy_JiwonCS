#include <stdio.h>

int main(void) {
    char line[101];  // 한 줄 최대 100글자 + '\0'

    while (fgets(line, sizeof(line), stdin) != NULL) {
        printf("%s", line);
    }

    return 0;
}
