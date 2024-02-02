/*
 * generate a 3 x 3 matrix, random value from 1 - 9 and this number only appear once
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(0));
	int i, j, k = 1, v[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (k == 9) continue;
			int r = rand() % (9-k) + k;
			int m = r / 3;
			int n = r % 3;
			int t = v[i][j];
			v[i][j] = v[m][n];
			v[m][n] = t;
			k++;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", v[i][j]);
		}
		printf("\n");
	}
	return 0;
}
