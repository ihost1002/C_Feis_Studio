/*
 * print 2 dimentionl array with type **, height, width
 */
#include <stdio.h>

void print(int **, int, int);

int main(void) {
    int v[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *p[3] = {v[0], v[2], v[1]};
    print(p, 3, 3);
    return 0;
}

void print(int **v, int height, int width) {
    int i, j;
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf("%d ", v[i][j]);
        }
        printf("\n");
    }
}
