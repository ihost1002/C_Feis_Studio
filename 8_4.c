/*
 * let user to keep entering positive numbers till 0, and return average
 */
#include <stdio.h>
int main(void) {
	int number;
	int sum = 0;
	int count = 0;
	double average = 0.0;
	printf("Please enter the numbers (0 to quit):\n");
	scanf("%d", &number);
	while (number != 0) {
		sum = sum + number;
		count = count + 1;
		scanf("%d", &number);
	}
	average = (double) sum / count;
	if (count == 0) {
		printf("The average is N/A\n");
	} else {
		printf("The average is %f\n", average);
	}
	return 0;
}
