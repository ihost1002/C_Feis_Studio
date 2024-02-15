/*
 * create a function swap() that swap two variable's content, with 2 int * type 
 * variable
 */
#include <stdio.h>

void swap(int *, int *);

int main(void) {
	int a, b;
	printf("Enter two integers: ");
	scanf("%d%d", &a, &b);
	printf("You entered: %d %d\n", a, b);
	swap(&a, &b);
	printf("After swap, result = %d %d\n", a, b);
	return 0;
}

void swap(int *n1, int *n2) {
	int t = *n1;
	*n1 = *n2;
	*n2 = t;
}
