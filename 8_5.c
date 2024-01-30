/*
 * let user enter a positive number N, and print 1 ~ N
 */
#include <stdio.h>
int main(void) {
	int number;
	int start = 1;
	printf("Please enter the number: ");
	scanf("%d", &number);
	while (start <= number) {
		printf("%d\n", start);
		start = start + 1;
	}
	return 0;
}
