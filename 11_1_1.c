/*
 * multiplication table using 1 for loop
 */
#include <stdio.h>
int main(void) {
	int i, j;
	for (int c = 1; c <= 81; c++) {
		i = (c-1)/9 + 1;
		j = (c-1)%9 + 1;
		printf("%d x %d = %d\n", i, j, i*j);
	}
	return 0;
}
