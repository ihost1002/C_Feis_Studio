/*
 * let use to enter multiple strings, then output string they entered while 
 * they enter END
 */
#include <stdio.h>
#include <stdlib.h>

char *readString(void);
void printString(const char *);
void printManyStrings(char **, int);
int isEndOfString(const char *); // true return 1, else return 0
const char *endString = "END";

int main(void) {
    char **strings = 0; // store Strings location
    int length = 0;     // strings array size
    while (1) {
        char *str = readString();     // read user's input, end of char is '\n'
        if (isEndOfString(str)) break;  // end loop while user entered "END"
        char **largerStr = (char **) malloc(sizeof(char*) * (length + 1)); // reallocate larger string array to store new string's location
        for (int i = 0; i < length; i++) largerStr[i] = strings[i]; // copy strings
        free(strings); // free old string location
        strings = largerStr;  // assign larger string array
        strings[length] = str; // store new string
        length++;
    }
    printf("------\n");
    printManyStrings(strings, length);
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
    printf(" ");
}

void printManyStrings(char **str, int length) {
    for (int i = 0; i < length; i++) {
        printString(str[i]);
    }
    printf("\n");
}

int isEndOfString(const char *str) {
    const char *c = str;
    const char *endStr = endString;
    int i = 0;
    while (c[i] != '\0' || endStr[i] !='\0') {
        if (c[i] != endStr[i]) break;
        i++;
    }
    if (c[i] != '\0' || endStr[i] != '\0') return 0;
    return 1;
}
