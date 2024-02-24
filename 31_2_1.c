/* 
 * practice from teacher's code
 *
 */
#include <stdio.h>
#include <string.h>

int main(void) {
    char strings[1000][10] = {{'\0'}};
    char input[10] = {'\0'};
    int size = 0;
    while (1) {
        scanf("%s", input);
        if (strcmp(input, "END") == 0) break;
        strcpy(strings[size], input);
		size++;
    }
    printf("------\n");
    for (int i = 0; i < size; i++) {
        printf("%s ", strings[i]);
    }
    printf("\n");
    return 0;
}
