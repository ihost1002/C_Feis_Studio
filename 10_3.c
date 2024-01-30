/*
 * let user to enter Max number M, then return any number N satisfies that N % 3 = 2 && N % 5 = 3 && N % 7 = 2
 */
#include <stdio.h>
int main(void) {
	int M;
	printf("Max = ");
	scanf("%d", &M);
	for (int N = 1; N <= M; N++) {
		if (N % 3 == 2 && N % 5 == 3 && N % 7 == 2) {
			printf("%d ", N);
		}
	}
	printf("\n");
	return 0;
}
