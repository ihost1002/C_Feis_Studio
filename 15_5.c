
/* Let the user input 10 integers between 1 and 100
 * , and then draw a bar chart divided into intervals of 10
 */
#include <stdio.h>
int main(void) {
	int i, numbers[10] = {0};
	int interval;
	int begin;
	for (i = 0; i < 10; i++){
		scanf("%d", &numbers[i]);
	}
	for (interval = 10; interval <= 100; interval += 10) {
		printf("%3d: ", interval);
		begin = interval - 9;
		for (i = 0; i < 10; i++) {
			if (numbers[i] >= begin && numbers[i] <= interval) {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}
