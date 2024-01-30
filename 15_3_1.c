/*
 * Refer to 15_3.c
 */
#include <stdio.h>
int main(void) {
	int numbers[10] = {0};
	int nearMax_i = -1;
	int q;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
	}
	while (1) {
		printf("Q: ");
		scanf("%d", &q );
		if (q == 0) break;
		nearMax_i = -1;
		for (int i = 0; i < 10; i++) {
			if (numbers[i] <= q && (nearMax_i == -1 || numbers[i] > numbers[nearMax_i])) {
				nearMax_i = i;
			}
		}
		if (nearMax_i == -1) continue;
		printf("%d\n", numbers[nearMax_i]);
	}
	return 0;
}
