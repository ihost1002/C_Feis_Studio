/*
 * count all method numbers of stepping to floor N( N >=1)
 */
#include <stdio.h>
int steps(int);

int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	printf("%d\n", steps(N));
	return 0;
}

int steps(int i) {
	if (i == 1) return 1;
	if (i == 2) return 2;
	return steps(i-1) + steps(i-2);
}
