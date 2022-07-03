#include <stdio.h>

int main(void)
{
	int a;

	printf("input a : ");

	scanf("%d",&a);

	printf("\na = %d", a);

	printf("\na = a + 1 ; a = %d", ++a);

	printf("\na = a + 1 ; a = %d", ++a);

	printf("\na = a - 1 ; a = %d", --a);

	printf("\n");

	return 0 ;
}
