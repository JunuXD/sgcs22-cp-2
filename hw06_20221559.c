#include <stdio.h>

int add2(int, int);

int main(void)
{

	int num1, num2, res;

	printf("Input first number: ");
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);

	res = add2(num1, num2);

	printf("%d + %d = %d\n", num1, num2, res);

}

int add2(int a, int b)
{

	int res;

	res = a + b;

	return res;

}
