/*
 * create a recursive function called countTo1(int i) to print from 3 to 1, with 1 parameter of type int and no return type
 */
#include <stdio.h>
void countTo1(int);

int main(void) {
	countTo1(1);
	return 0;
}

void countTo1(int i) {
	if (i <= 3) {
		countTo1(i+1);
		printf("%d\n", i);
	}
}
