/*
 * let user to enter positive integer N, then return N's row and each row has N stars and only using 1 for loop
 */
#include <stdio.h>
int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	for (int i = 1; i <= N*N; i++) {
		printf("*");
		if (i % N == 0) {
			printf("\n");
		}
	}
	return 0;
}
