#include <stdio.h>

int main(void)
{
	int a, b;
	int a1, a10, a100, b1, b10, b100;
	int carry, carry1 = 0, carry10 = 0, carry100 = 0;

	printf("Enter 2 numbers: ");
	scanf("%d %d", &a, &b);

	a100 = a/100;
	a10 = a%100/10;
	a1 = a%10;

	b100 = b/100;
	b10 = b%100/10;
	b1 = b%10;

	if (a1 + b1 >= 10)
		carry1 = 1;

	if (a10 + b10 + carry1 >= 10)
		carry10 = 1;

	if (a100 + b100 + carry10 >= 10)
		carry100 = 1;

	carry = carry1 + carry10 + carry100;

	printf("%d carry operations\n", carry);
	
	return 0;
}
