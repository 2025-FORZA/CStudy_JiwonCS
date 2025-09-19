#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int total, n;
	int sum = 0;
	int price[100];
	int gaesu[10];
	int a = 0;

	scanf("%d", &total);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &price[i], &gaesu[i]);
		sum += price[i] * gaesu[i];
		a++;
	}

	if (total == sum && a == n)
		printf("Yes");
	else
		printf("No");

	return 0;
}
