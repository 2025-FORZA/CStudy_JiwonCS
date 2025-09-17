#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000001];  // 문제 조건: 문자열 길이 ≤ 1,000,000
    int count = 0;
    char* token;

    // 문자열 입력 (공백 포함)
    fgets(str, sizeof(str), stdin);

    // 공백 기준으로 단어 분리
    token = strtok(str, " \n");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " \n");
    }

    printf("%d\n", count);
    return 0;
}
