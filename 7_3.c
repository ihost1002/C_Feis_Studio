/*
 *Enter 2 numbers and an operator, respond their calculation
 */

#include <stdio.h>
int main(void) {
	int num1;
	int num2;
	char op;
	float answer;
	printf("Enter numbers and operators(+ - * /): ");
	scanf("%d%c%d", &num1, &op, &num2);
	if (op == '+') {
		answer = num1 + num2;	
	} else if (op == '-'){
		answer = num1 - num2;
	} else if (op == '*'){
		answer = num1 * num2;
	} else if (op == '/'){
		answer = 1. * num1 / num2;
	} else {
		printf("Wrong operators!\n");
		return 0;
	}


	printf("Answer: %.2f\n", answer);
	return 0;
}
