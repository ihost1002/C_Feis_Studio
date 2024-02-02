/*
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(0));
	int i, n, count[10] = {0};
	for (i = 0; i < 10; i++) {
		do {
			n = rand() % 10 + 1;
		} while (count[n-1] != 0);
		printf("%d ", n);
		count[n-1]++;
	}
	printf("\n");
	return 0;
}
