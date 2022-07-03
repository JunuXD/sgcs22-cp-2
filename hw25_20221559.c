#include <stdio.h>

int isDivisor(int, int);
int isPrime(int);

int main(void)
{
	int a, div, pri, i;

	printf("Input : ");
	scanf("%d", &a);

	for (i=1; i<=a; i++){
		div = isDivisor(a, i);
		pri = isPrime(i);

		if (div+pri == 2){
			printf("%d\t", i);
		}
	}

	printf("\n");

	return 0;
}

int isDivisor(int a, int b)
{
	if (a%b == 0){
		return 1;
	}
	else
		return 0;
}

int isPrime(int n)
{
	int i;
	int end = n/2;


	if (n<=1)
	{
		return 0;
	}

	for (i=2; i<=end; i++)
	{
		if((n%i) == 0)
		{
			return 0;
		}
	}

	return 1;
}	
