/*
 * input ID number and return result:
 * 2: John
 * 13: Mary
 * 16: Amy
 * else Not found 
 */
#include <stdio.h>
int main(void) {
	int id;
	printf("ID: ");
	scanf("%d", &id);
	switch(id) {
		case 2:
			printf("John\n");
			break;
		case 13:
			printf("Mary\n");
			break;
		case 16:
			printf("Amy\n");
			break;
		default:
			printf("Not found\n");
	}
	return 0;
}
