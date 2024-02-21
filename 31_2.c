/*
 * let use to enter multiple strings, then output string they entered while 
 * they enter END
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *str = 0;
	int length = 0;
    while (1) {
        char input = 0;
        scanf("%c", &input);
        if (input == '\n') break;
        char *newStr = (char *) malloc(sizeof(char) * (length + 1));
        for (int i = 0; i < length; i++) newStr[i] = str[i];
        free(str);
        str= newStr;
        str[length] = input;
        length++;
    }
    
    for (int i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
