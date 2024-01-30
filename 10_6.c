/*
 * let user to enter number N, then return if it's prime number or return it's factor if it's not prime number
 */
#include <stdio.h>
#include <math.h>
int main(void) {
	int N;
	int M;
	int isPrime = 1;
	printf("Number = ");
	scanf("%d", &N);
	M = (int) sqrt(N);
	for (int factor = 2; factor <= M; factor++) {
		if (N % factor == 0) {
			printf("%d ", factor);
			isPrime = 0;
		}
	}
	printf("\n");
	if (isPrime) {
		printf("%d is a prime number.\n", N);
	} else {
		printf("%d is not a prime number.\n", N);
	}
	return 0;
}
