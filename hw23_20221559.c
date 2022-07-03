#include <stdio.h>

void func_gcd(int, int, int*);

int main(void)
{
	int num1, num2, gcd;

	printf("Input first number: ");
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);

	func_gcd(num1, num2, &gcd);

	printf("GCD: %d\n", gcd);

	return 0;
}

void func_gcd(int a, int b, int *gcd)
{
	int temp1, temp2;

	while (b != 0)
	{
		temp2 = a%b;
		temp1 = b;
		a = temp1;
		b = temp2;
	}

	*gcd = a;
}
