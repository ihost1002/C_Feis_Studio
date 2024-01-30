/*
 * create a dice, who generate a random number from 1-6, using srand and rand to 
 * achieve this
 */
#include <stdio.h>
#include <stdlib.h> // usgin rand and srand
#include <time.h>   //

int dice();

int main(void) {
	int c;
	do {
		printf("Enter 1 to roll the dice(0: exit): ");
		scanf("%d", &c);
		while (getchar() != '\n') ;
		if (c == 1) {
			printf("%d\n", dice());
		} else if (c != 0) {
			printf("Wrong input, try again!\n");
		}
	} while (c != 0);
	return 0;
}

int dice() {
	srand(time(0));
	return rand() % 6 + 1;
}
