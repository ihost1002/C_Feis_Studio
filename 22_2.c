/*
 * create a function sort() that sort two integers with ascending order, with 
 * two parameter of int * type
 */
#include <stdio.h>

void sort(int *, int *);

int main(void) {
	int num1, num2;
	printf("Enter two integers: ");
	scanf("%d%d", &num1, &num2);
	printf("You entered: %d %d\n", num1, num2);
	sort(&num1, &num2);
	printf("After sorting, result: %d %d\n", num1, num2);
	return 0;
}

void sort(int *n1, int *n2) {
	int t;
	if (*n1 <= *n2)	return;
	t = *n1;
	*n1 = *n2;
	*n2 = t;
}
