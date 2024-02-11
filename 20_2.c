/*
 * create a function with one parameter type char[] that read user input data, with no return type
 */
#include <stdio.h>

void str_read(char[]);

int main(void) {
	char str[15] = {'\0'};
	str_read(str);
	printf("%s\n", str);
	return 0;
}

void str_read(char str[]) {
	int i = 0;
	char ch;
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n') break;
		str[i++] = ch;
	}
}
