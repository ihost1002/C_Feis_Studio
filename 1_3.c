#include <stdio.h>
int main() {
    int integer1 = 0;
    int integer2 = 0;
    int sum = 0;
    printf("Please enter the first number:");
    scanf("%d", &integer1);
    printf("Please enter the second number:");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Sum is %d\n", sum);
    return 0;

}
