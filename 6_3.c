/*
 *	Sort 3 number in ascending order
 */
#include <stdio.h>
int main(void) {
	int a;
	int b;
	int c;
	int min;
	int t;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	// choose minimum number
	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	// sorting minimum
	if (min == b){
		t = a;
		a = b;
		b = t;
	}
	if (min == c){
		t = a;
		a = c;
		c = t;
	}
	
	// sorting second minimum
	if (b > c){
		t = b;
		b = c;
		c = t;
	}
	printf("\n%d %d %d\n", a, b, c);
	return 0;
}
