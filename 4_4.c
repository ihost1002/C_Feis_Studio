#include <stdio.h>

int main(){
	int number1;
	int number2;
	int number3;
	printf("Please enter the lengths: ");
	scanf("%d%d%d", &number1, &number2, &number3);
	if (number1 == number2 && number2 == number3)
		printf("Regular triangle\n");
	else
		printf("Not a Regular triangle\n");
	return 0;
}
