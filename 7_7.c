/*
 * guesssing number
 */
#include <stdio.h>
int main(void) {
	int number = 4;
	int answer;
	int correct = 0;
	while(!correct) {
		printf("Please enter your guess: ");
		scanf("%d", &answer);
		if (answer == number) {
			printf("Correct!\n");
			correct = 1;
		} else if (answer < number) {
			printf("Too small\n");
		} else {
			printf("Too large\n");
		}

	}
	return 0;
}
