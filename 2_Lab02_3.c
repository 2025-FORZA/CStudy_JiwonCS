#include <stdio.h>
#include <string.h>

int main(void) {
    char str[1000001];  // ���� ����: ���ڿ� ���� �� 1,000,000
    int count = 0;
    char* token;

    // ���ڿ� �Է� (���� ����)
    fgets(str, sizeof(str), stdin);

    // ���� �������� �ܾ� �и�
    token = strtok(str, " \n");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " \n");
    }

    printf("%d\n", count);
    return 0;
}
