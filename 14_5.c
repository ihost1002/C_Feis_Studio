/*
 * roll dice 100000 times, each time roll two dices, then record their sum's count
 * possible sum from 2 ~ 12
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int dice();

int main(void) {
	int diceCount[11] = {0};
	int dice1, dice2;
	srand(time(0));
	for (int i = 1; i <= 100000; i++) {
		dice1 = dice();
		dice2 = dice();
		diceCount[dice1+dice2-2]++;
	}
	for (int i = 0; i <= 10; i++) {
		printf("%d: %d\n", i+2, diceCount[i]);
	}
	return 0;
}

int dice() {
	return rand() % 6 + 1;
}
