/*
 * pointer variable operation
 */
#include <stdio.h>

int main(void) {
    int v[5]= {1, 2, 3, 4, 5};
    int *n = NULL;
    printf("&v[1] - &v[0] = %ld\n", &v[1] - &v[0]);
    printf("&v[0] - &v[1] = %ld\n", &v[0] - &v[1]);
    for (n = v; n != &v[5]; n++) {
        printf("%d\n", *n);
    }
    return 0;
}
