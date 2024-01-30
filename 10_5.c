/*
 * let user to enter Max number M, then return 3 min number N satisfies that N % 3 = 2 && N % 5 = 3 && N % 7 = 2
 */
#include <stdio.h>
int main(void) {
	int M;
	int count = 0;
	printf("Max = ");
	scanf("%d", &M);
	for (int N = 1; N <= M && count < 3; N++) {
		if (N % 3 == 2 && N % 5 == 3 && N % 7 == 2) {
			printf("%d ", N);
			count++;
		}
	}
	printf("\n");
	return 0;
}
