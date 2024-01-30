

#include <stdio.h>
int main(void) {
	int numbers[10] = {0};
	int boundary[2] = {0};
	for (int i = 0; i < 10; i++) {
		scanf("%d", &numbers[i]);
	}
	while (1) {
		printf("L R: ");
		for (int i = 0; i < 2; i++) 
			scanf("%d", &boundary[i]);
		if (boundary[0] == 0 && boundary[1] == 0) break;
		printf("Ans: ");
		for (int i = 0; i < 10; i++) {
			if (numbers[i] >= boundary[0] && numbers[i] <= boundary[1])
				printf("%d ", numbers[i]);
		}
		printf("\n");
	}
	return 0;
}
