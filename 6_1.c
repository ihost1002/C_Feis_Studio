/*
 * Sorting two integers in ascending order
*/

#include <stdio.h>
int main(void) {
	int temp;
	int a;
	int b;
	printf("Enter two numbers, i will sort them with ascending order: ");
	scanf("%d %d", &a, &b);
	if (a > b){
		temp = a;
		a = b;
		b = temp;
	}
	printf("\nresult: %d %d\n", a, b);
	return 0;
}
