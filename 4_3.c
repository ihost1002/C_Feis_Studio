#include <stdio.h>

int main(){
	int customerNum = 0;
	int customerPrice = 300;
	printf("Please enter the number of customers: ");
	scanf("%d", &customerNum);
	int total = customerNum * customerPrice;
	if (total >= 3000)
		total *= 0.8;
	printf("Total: %d\n", total);
	return 0;
}
