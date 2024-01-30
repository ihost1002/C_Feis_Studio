/*
 * Let the user input 10 integers between 0 and 9, and then output the mode.
 * When there are more than two of the same number, output the largest
 */
#include <stdio.h>
int main(void) {
    int i, num, numbers[10] = {0};
    int ans = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        numbers[num]++;
        if (numbers[num] > numbers[ans] || (numbers[num] == numbers[ans] && num > ans)) {
            ans = num;
        }
    }
    printf("Ans: %d\n", ans);
    return 0;
}
