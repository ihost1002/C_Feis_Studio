/*
 * let user to enter 10 numbers and record them in id from 1 to 10
 * , and enter a number, then output the nearest maximum number
 */
#include <stdio.h>
int main(void) {
	int numbers[10] = {0};
	int boundary;
	int nearMax;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
	}
	while (1) {
		printf("Q: ");
		scanf("%d", &boundary);
		if (boundary == 0) break;
		nearMax = -1;
		for (int i = 0; i < 10; i++) {
			if (numbers[i] <= boundary && numbers[i] > nearMax) {
				nearMax = numbers[i];
			}
		}
		if (nearMax == -1) continue;
		printf("%d\n", nearMax);
	}
	
	return 0;
}
