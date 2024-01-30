/*
 * enter grade, pass with grade greater then or equal to 60, else fail
 */
#include <stdio.h>
int main(void) {
	int grade;
	printf("Please enter the grade: ");
	scanf("%d", &grade);
	if (grade < 0 || grade > 100) {
		printf("grade must between 0 to 100.\n");
	} else if (grade >= 60) {
		printf("PASS.\n");
	} else {
		printf("FAIL.\n");
	}
	return 0;
}
