/*
 * let user to enter positive number N, then return N x N square
 */
#include <stdio.h>
int main(void) {
	int N, square;
	printf("N = ");
	scanf("%d", &N);
	square = N*N;
	for (int i = 1; i <= square; i++) {
		if (i / N != 0 && i % N != 1 && i % N != 0 && i / N != (N-1) ) {
			printf(" ");
		} else {
			printf("*");
		}
		if (i % N == 0) {
			printf("\n");
		}
	}
	return 0;
}
