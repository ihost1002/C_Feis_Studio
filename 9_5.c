/*
 * let user to enter positive number N, and ouput N's stars
 */
#include <stdio.h>
int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		printf("*");
	}
	printf("\n");
	return 0;
}
