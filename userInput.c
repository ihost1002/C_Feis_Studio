#include <stdio.h>
int str_len(char[]);

int main(void) {
	char str[101] = {'\0'};
	while (1) {
		scanf("%5s", str);
		if (str_len(str) == 1 && str[0] == 'q') break;
		printf("%s\n", str);
	}
	return 0;
}

int str_len(char str[]) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
