/*
 * continue guessing number till right answer
 */

#include <stdio.h>
int main(void) {
	int answer = 7;
	int guess;
	printf("Please enter your guess: ");
	scanf("%d", &guess);
	while (guess != answer) {
		if (guess > answer) {
			printf("Too large!\n");
		} else {
			printf("Too small!\n");
		}
		printf("Please enter your guess: ");
		scanf("%d", &guess);
	}
	printf("Correct!\n");
	return 0;
}
