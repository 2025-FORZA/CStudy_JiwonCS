#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, C;
	int o1, o2, o3, o4;

	scanf("%d %d %d", &A, &B, &C);
	o1 = (A + B) % C;
	o2 = ((A % C) + (B % C)) % C;
	o3 = (A * B) % C;
	o4 = ((A % C)*(B % C)) % C;

	printf("%d\n",o1);
	printf("%d\n",o2);
	printf("%d\n",o3);
	printf("%d\n",o4);
	return 0;
}