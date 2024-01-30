/*
 * simulate roll dice 6000 times, and output their appearance of each number from 1 to 6
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dice();

int main(void) {
	int diceNumCount[6] = {0};
	srand(time(0));
	for (int i = 1; i <= 6000; i++) {
		diceNumCount[dice()-1]++;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d: %d\n", i+1, diceNumCount[i]);
	}
	return 0;
}

int dice() {
	return rand() % 6 + 1;
}
