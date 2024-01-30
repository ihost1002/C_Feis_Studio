#include <stdio.h>
int main(void) {
    char letter = '\0', c = 0;
    printf("Enter an upper case letter, i'll convert to lower case letter for you.\n");
    printf("enter non-letter(or lower case) to exit.\n");
    while (scanf("%[A-Z]%c", &letter, &c) == 2 ) {
        printf("lower case of %c is %c.\n", letter, letter + 32);
        printf("continue (or enter non-letter to exit):\n");
    }
    printf("Bye bye.\n");
    fflush(stdin);
    return 0;
}
