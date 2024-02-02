/*
 * generate 10 numbers from 1 to 10 and they only appear once, using array
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int i, j, n[10] = {0};
	srand(time(0));
	for (i = 1; i <= 10; i++) {
		do {
			n[i-1] = rand() % 10 + 1;
			for (j = 1; j < i; j++) {
				if (n[j-1] == n[i-1]) break;
			}
		} while (j != i);
		printf("%d ", n[i-1]);
	}
	printf("\n");
	return 0;
}
