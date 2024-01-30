/*
 * create a recursive funtion sumOfN(int number), return the sum of all 
 * continuous positive number from 1 to number
 */
#include <stdio.h>

int sumOfN(int);

int main(void) {
	int N;
	printf("N = ");
	scanf("%d", &N);
	printf("%d\n", sumOfN(N));
	return 0;
}

int sumOfN(int number) {
	if (number == 1) {
		return 1;
	}
	return number + sumOfN(number-1);
}
