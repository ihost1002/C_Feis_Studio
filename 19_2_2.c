/*
 * create a function with two parameters: int[] type that takes an array and int * type that take the size of the array, then output the maximum number of the
 * array
 */
#include <stdio.h>
int max(int[], int);

int main(void) {
	int numbers[10] = {0};
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
	}
	printf("Max = %d\n", max(numbers, sizeof(numbers)/sizeof(numbers[0])));
	int b[5] = { 1, 55, -3, 7, 3};
	printf("Max = %d\n", max(b, sizeof(b)/sizeof(b[0])));
	return 0;
}

int max(int v[], int size) {
	int max = v[0];
	for (int i = 0; i < size; i++) {
		if (v[i] > max) max = v[i];
	}
	return max;
}
