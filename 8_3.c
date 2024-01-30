/*
 * let user keep entering positive integers till 0, and return the sum
 */
#include <stdio.h>
int main(void) {
	int sum = 0;
	int input;
	printf("Please enter positive numbers(0 to return sum of all numbers and quit): ");
	scanf("%d", &input);
	while (input != 0) {
		sum = sum + input;
		printf("Please enter positive numbers(0 to return sum of all numbers and quit): ");
		scanf("%d", &input);
	}
	printf("sum = %d\n", sum);
	return 0;
}
