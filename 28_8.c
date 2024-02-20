/*
 * increase array size using realloc
 */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int *numbers = NULL;
    int length = 0;
    while (1) {
        int input;
        scanf("%d", &input);
        if (input == 0) break;
        numbers = (int *) realloc(numbers, sizeof(int) * (length+1));
        numbers[length] = input;
        length++;
        
        
        
        
        
    }
    printf("Numbers: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
