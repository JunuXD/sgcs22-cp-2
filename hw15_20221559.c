#include <stdio.h>

int main(void)
{
	int num;

	printf("Input : ");
	scanf("%d", &num);

	(num%2==1)? printf("%d is odd number\n", num):printf("%d is even number\n", num);

	return 0;
}
