/*
 * create a recursive function called countTo3(int i), one parameter of type int and no return type
 */
#include <stdio.h>
void countTo3(int);

int main(void) {
	countTo3(1);
	return 0;
}

void countTo3(int i) {
	if (i <= 3) {
		printf("%d\n", i);
		countTo3(i+1);
	}
}
