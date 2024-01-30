/*
 *
 */
#include <stdio.h>
int main(void) {
	int N;
	int triangle = 0;
	int count = 1;
	int newLine = 0;
	int newLineBegin = 0;
	printf("N = ");
	scanf("%d", &N);
	triangle = (1+N)*N/2;
	newLine = 1;
	count++;
	for (int i = 1; i <= triangle; i++) {
		if (i >= 2 && newLineBegin == 1) {
			newLineBegin = 0;
			printf("*");
		} else if (N >= 3 && i > (triangle-N) && i < (triangle)) {
			printf("*");
		} else if (i == newLine) {
			printf("*\n");
			newLine += count;
			count++;
			newLineBegin = 1;
		} else {
			printf(" ");
		}
	}
	return 0;
}
