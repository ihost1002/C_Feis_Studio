

#include <stdio.h>
int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	printf("*\n");
	for (int i = 0; i <= N-3; i++) {
		printf("*");
		for (int j = i; j <= i; j++) {
			printf(" ");
		}
		printf("*\n");

	}
	for (int i = 1; i <= N; i++) {
		printf("*");
	}
	printf("*\n");
	return 0;
}
