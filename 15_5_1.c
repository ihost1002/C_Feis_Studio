#include <stdio.h>
int main(void) {
	int i, j, n, chart[10] = {0};
	char m;
	do {
		scanf("%d", &n);
		scanf("%c", &m);
		chart[(n-1)/10]++;
	} while (m != '\n');
	for (i = 1; i <= 10; i++) {
		printf("%3d: ", i*10);
		for (j = 1; j <= chart[i-1]; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
