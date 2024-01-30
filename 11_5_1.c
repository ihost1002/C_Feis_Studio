/*
 * draw right triangle with input N
 */
#include <stdio.h>
int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if ((i+j) == (N+1) || j == N || i == N) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
