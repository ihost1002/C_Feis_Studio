/*
 * let user enter two numbers, then return maximum number, the comparison should be done by a function named max with an int return type and two int type parameter 	
 */
#include <stdio.h>

int max(int, int);

int main(void) {
	int a, b;
	printf("Please enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);
	printf("The maximum number is %d\n", max(a, b));
	return 0;
}

int max(int a, int b) {
	if (a >= b) {
		return a;
	} else
		return b;
}
