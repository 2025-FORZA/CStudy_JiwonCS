#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char str[101];
    int index[26];

    // 알파벳 인덱스 배열 초기화
    for (int i = 0; i < 26; i++) {
        index[i] = -1;
    }

    // 문자열 입력
    scanf("%s", str);

    // 문자열 순회
    for (int i = 0; str[i] != '\0'; i++) {
        int num = str[i] - 'a';  // 'a' = 0, 'b' = 1, ..., 'z' = 25

        if (index[num] == -1) {
            index[num] = i;  // 처음 등장한 위치만 저장
        }
    }

    // 결과 출력
    for (int i = 0; i < 26; i++) {
        printf("%d ", index[i]);
    }

    return 0;
}