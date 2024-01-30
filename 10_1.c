/*
 * let user to enter positive number N, and output all positive factors( with ascending order
 */
#include <stdio.h>
int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
