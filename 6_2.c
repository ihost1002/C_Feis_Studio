/*
 * numeric swap, ABC - > BCA
 */
#include <stdio.h>
int main(void) {
	int a;
	int b;
	int c;
	int t;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	t = a;
	a = b;
	b = c;
	c = t;
	printf("\n%d %d %d\n", a, b, c);
	return 0;
}
