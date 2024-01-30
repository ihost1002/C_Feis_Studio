/*
 * continue guessing numbe, till you guess the right number
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
	srand(time(0));
    int answer = rand() % 100;
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
    return 0;
}
