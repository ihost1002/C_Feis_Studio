/*
 * sorting 3 numbers with ascending order
 *
 */
#include <stdio.h>
int main(void){
	int num1;
	int num2;
	int num3;
	int temp;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("Before: %d %d %d\n", num1, num2, num3);
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num2 > num3) {
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	printf("After: %d %d %d\n", num1, num2, num3);
	return 0;
}
