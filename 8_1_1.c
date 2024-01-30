/*
 * continue guessing number using do while loop
 */
#include <stdio.h>
int main(void) {
	int answer = 7;
	int guess;
	do {
		printf("Please enter your guess: ");
		scanf("%d", &guess);
		if (guess > answer) {
			printf("Too large!\n");
		} else if (guess < answer) {
			printf("Too small!\n");
		}
	} while (guess != answer);
	printf("Correct!\n");
}
