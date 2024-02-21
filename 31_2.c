/*
 * let use to enter multiple strings, then output string they entered while 
 * they enter END
 */
#include <stdio.h>
#include <stdlib.h>

char *readString(void);
void printString(const char *);

int main(void) {
    
    char *str = readString();
    printString(str);
    return 0;
}

char *readString(void) {
    char *str = 0;
    int length = 1;
    while (1) {
        char input = 0;
        scanf("%c", &input);
        if (input == '\n') break;
        char *newStr = (char *) malloc(sizeof(char) * (length + 1));
        for (int i = 0; length != 1 && i < length-1; i++) newStr[i] = str[i];
        free(str);
        str= newStr;
        str[length-1] = input;
        length++;
    }
    str[length] = '\0';
    return str;
}

void printString(const char * str) {
    for (char *c = (char *)str; *c != '\0'; c++) {
        printf("%c", *c);
    }
}
