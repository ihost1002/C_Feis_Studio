/*
 * let user to enter positive integer N, then return N's row and each row have N stars
 */
#include <stdio.h>
int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
