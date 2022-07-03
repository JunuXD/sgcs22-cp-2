#include <stdio.h>

void divideRemainder(int *a, int *b);

int main(void)
{
	//input
	int a, b;
	printf("Input two Number : ");
	scanf("%d %d", &a, &b);

	//function call
	divideRemainder(&a, &b);

	//output
	printf("OUTPUT : divide [%d] remainder[%d]\n", a, b);

	return 0;
}

void divideRemainder(int *a, int *b)
{
	int in1, in2;

	in1 = *a / *b;
	in2 = *a % *b;

	*a = in1;
	*b = in2;

}		
