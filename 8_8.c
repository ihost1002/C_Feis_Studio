/*
 * let user to keep entering item id till 0, and return total expense
 * id 		sale
 *  1		90
 *  2		75
 *	3		83
 *	4		89
 *  5		71
 */
#include <stdio.h>
int main(void) {
	int id;
	int sum = 0;
	printf("Please enter item(1 ~ 5, 0: quit):\n");
	do {
		scanf("%d", &id);
		switch(id) {
			case 0:
				break;
			case 1:
				sum += 90;
				break;
			case 2:
				sum += 75;
				break;
			case 3:
				sum += 83;
				break;
			case 4:
				sum += 89;
				break;
			case 5:
				sum += 71;
				break;
			default:
				printf("Wrong id, enter 1 ~ 5\n");
		}
	} while (id != 0);
	printf("Total: %d\n", sum);
	return 0;
}
