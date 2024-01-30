/*
 * let user to enter a positive number N, then return a rectangle, from 1 to N, each row has it's row's number's star
 */
#include <stdio.h>
int main(void) {
	int N;
	int newLine = 0;
	int count = 1;
	printf("N = ");
	scanf("%d", &N);
	int triangle = (1+N)*N/2;
	newLine += count;
	count++;
	for (int i = 1; i <= triangle; i++) {
		printf("*");
		if (i == newLine) {
			printf("\n");
			newLine += count;
			count++;
		}
	}
	return 0;
}
