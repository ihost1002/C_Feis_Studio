/*
 * create a function with one parameter of type char[], with int return type witch
 * return the length of the char array
 */

#include <stdio.h>

int str_len(char[]);

int main(void) {
	char str[] = "Hello World";
	printf("Length: %zu\n", sizeof(str));
	printf("Length: %d\n", str_len(str));
	return 0;
}

int str_len(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
