/*
 * print sum of 1 + 2 + ... + 100
 */
#include <stdio.h>
int main(void) {
	int count;
	int sum = 0;
	for (count = 1; count <= 100; count++) {
		sum += count;
	}
	printf("sum = %d\n", sum);
	return 0;
}
