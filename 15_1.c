/*
 * let user to enter 5 numbers then record to id from 1 to 5, 
 * then showed a search function to let user to enter id to search for the 
 * correspond number, 0 to quit
 */
#include <stdio.h>

int main(void) {
	int numbers[5] = {0};
	for (int i = 1; i <= 5; i++) {
		printf("%d: ", i);
		scanf("%d", &numbers[i-1]);
	}

	while (1) {
		int s;
		printf("Q: ");
		scanf("%d", &s);
		if (s == 0) break;
		if (s > 5 || s < 0) {
			printf("id out of range, should between 1 to 5, please try again!\n");
			continue;
		}
		printf("%d\n", numbers[s-1]);
	}
	return 0;
}
