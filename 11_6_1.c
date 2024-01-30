#include <stdio.h>
int main(void) {
	int a, b;
	for (a = 0, b = 1; !(a+b == 30 && a*b == 221 ) && a < 30; a++) {
		for (b = 1; !(a+b == 30 && a*b == 221) && b < 30; b++) ;
	}
	printf("%d%d",a, b);
	return 0;
}
