/*
 *
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    const char *endString = "END";
    char raw[5000] = {0};
    char *str[100] = {0};
    char input[50] = {0};
    int size = 0;
    int len = 0;
    while (1) {
        scanf("%s", input);
        if (strcmp(input, endString) == 0) break;
        str[len] = raw + size;
        strcpy(str[len], input);
        size += strlen(input) + 1;
        len++;
        
    }
    printf("-------\n");
    for (int i = 0; i < len; i++) {
        printf("%s ", str[i]);
    }
	printf("\n(%d %d)\n", len, size);
    return 0;
}
