/*
 * let user to enter Max number M, then return max number N satisfies that N % 3 = 2 && N % 5 = 3 && N % 7 = 2
 */
#include <stdio.h>
int main(void) {
	int M;
	int max;
	printf("Max = ");
	scanf("%d", &M);
	for (max = M; !(max % 3 == 2 && max % 5 == 3 && max % 7 == 2); max--) {
	}
	printf("%d\n", max);
	return 0;
}
