/*
 * increase array size using malloc and free old array memory using free
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *number = 0; // point to array location
    int length = 0; // array length
    while (1) {
        int input;
        scanf("%d", &input);
        if (input == 0) break;
        int *larger = (int *) malloc(sizeof(int) * (length+1));
        for (int i = 0; i < length; i++) larger[i] = number[i];
        free(number);
        number = larger;
        number[length] = input;
        length++;
    }
    printf("Numbers: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}
