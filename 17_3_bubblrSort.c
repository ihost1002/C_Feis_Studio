/*
 *
 */

#include <stdio.h>
#include <string.h>
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
void bubbleSort(int [], int);

int main(void) {
	int i, numbers[10] = {0};
	for (i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
	}
	int size = arrayLength(numbers);
	bubbleSort(numbers, size);
	for (i = 0; i < 10; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	return 0;
}

void bubbleSort(int n[], int size) {
	for (int i = 0; i < size-1; i++) {
		for (int j = 0; j < size-1 - i; j++) {
			if (n[j] > n[j+1]) {
				int t = n[j];
				n[j] = n[j+1];
				n[j+1] = t;
			}
		}
	}
}
