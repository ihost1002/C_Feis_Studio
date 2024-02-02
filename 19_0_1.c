/*
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(0));
	int i, j, n[10] = {0};
	for (i = 0; i < 10; i++) {
		while (1) {
			n[i] = rand() % 10 + 1;
			for (j = 0; j < i; j++) {
				if (n[j] == n[i]) break;
			}
			if (j == i) break;
		}
		printf("%d ", n[i]);
	}
	printf("\n");
	return 0;
}
