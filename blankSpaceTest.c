#include <stdio.h>
#include <ctype.h>
int main(void) {
	int num;
	char c;
	printf("%d\n", scanf("%d", &num));
	printf("%d\n", scanf("%c", &c));
	printf("%d\n", num);
	printf("next is whilespace? %d\n", isspace(c));

	return 0;
}
