#include <stdio.h>
#include <string.h> // memset 함수를 사용하기 위해 필요

// 0과 1의 개수를 저장할 메모이제이션 배열
// dp[i][0]은 fibonacci(i) 호출 시 0의 개수
// dp[i][1]은 fibonacci(i) 호출 시 1의 개수
int dp[41][2];

// n에 대한 0과 1의 개수를 계산하는 재귀 함수
void fib_count(int n) {
    // 이미 계산된 값이면 즉시 함수 종료 (더 이상 재귀 호출 진행 안 함)
    if (dp[n][0] != -1) {
        return;
    }

    // 하위 문제들을 재귀적으로 호출
    fib_count(n - 1);
    fib_count(n - 2);

    // 하위 문제들의 결과를 조합하여 현재 문제의 답을 계산하고 저장
    dp[n][0] = dp[n - 1][0] + dp[n - 2][0];
    dp[n][1] = dp[n - 1][1] + dp[n - 2][1];
}

int main() {
    // dp 배열을 -1로 초기화하여 '아직 계산되지 않음'을 표시
    memset(dp, -1, sizeof(dp));

    // 기본값(재귀의 종료 조건)을 미리 설정
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;

    int T; // 테스트 케이스의 개수
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

        // 만약 N에 대한 값이 아직 계산되지 않았다면 재귀 함수 호출
        if (dp[N][0] == -1) {
            fib_count(N);
        }
        
        // 저장된 결과 출력
        printf("%d %d\n", dp[N][0], dp[N][1]);
    }

    return 0;
}