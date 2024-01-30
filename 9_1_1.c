/*
 * let user enter number M, N, then print M to N
 */
#include <stdio.h>
int main(void) {
	int M;
	int N;
	int count;
	printf("Please enter the number M: ");
	scanf("%d", &M);
	printf("Please enter the number N: ");
	scanf("%d", &N);
	for (count = M; count <= N; count++) {
		printf("%d\n", count);
	}
	return 0;
}
