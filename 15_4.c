/*
 * let the user enters 10 integers and enters the number to be queried, 
 * the closest one among the entered integers is displayed.
 * 1.When there are more than two results, the smaller one is displayed.
 * 2.Enter 0 to end
 */
#include <stdio.h>
int abs(int);

int main(void) {
	int i, numbers[10] = {0};
	int nearest_i;
	int q;
	for (i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
	}
	while (1) {
		nearest_i = 0;
		printf("Q: ");
		scanf("%d", &q);
		if (q == 0) break;
		for (i = 1; i < 10; i++) {
			if (abs(q-numbers[i]) < abs(q-numbers[nearest_i])) {
				nearest_i = i;
			}
		}
		printf("%d\n", numbers[nearest_i]);
	}
	return 0;
}

int abs(int number) {
	if (number < 0) number *= -1;
	return number;
}
