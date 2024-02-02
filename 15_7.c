/*
 * let user enter 10 numbers, then output the maximum number and average of them
 */
#include <stdio.h>
int main(void) {
	int i, n[10] = {0};
	int sum = 0;
	int count = 0;
	int max = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d", &n[i]);
		sum += n[i];
		count++;
		if (i > 0 && n[i] > n[max]) {
			max = i;
		}
	}
	printf("Max: %d\n", n[max]);
	printf("Avg: %d\n", sum/count );
	
	return 0;
}
