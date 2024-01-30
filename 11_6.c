/*
 * find possible numbers X, Y such that X+Y = 30, X*Y = 221
 */
#include <stdio.h>
int main(void) {
	int y;
	for (int x = 1; x <= 30; x++) {
		y = 30-x;
		if ( x*y == 221) {
			printf("X = %d, Y = %d\n", x, y);
		}
	}
	return 0;
}
