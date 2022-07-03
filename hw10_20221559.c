#include <stdio.h>

void swap(int *x, int *y);

int main(void)
{

	int x, y;

	//input	
	printf("Input two Number\n\tx : ");
	scanf("%d", &x);
	printf("\ty : ");
	scanf("%d", &y);

	printf("-------------------------------------------\n");
	printf("Before : x [%d] y [%d] \n", x, y);
	printf("-------------------------------------------\n");

	//function call
	swap(&x, &y);

	//output
	printf("After  : x [%d] y [%d] \n", x, y);
		

}

void swap(int *x, int *y)
{

	int a, b;
	a = *x;
	b = *y;

	*x = b;
	*y = a;

}
