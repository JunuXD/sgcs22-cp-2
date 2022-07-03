#include <stdio.h>

void modular(int []);

int main(void)
{
	int input[50]={0,};

	int amt, i;

	printf("type amount of numbers to input  ");
	scanf("%d", &amt);

	for(i=0;i<amt;i++)
	{
		scanf("%d", &input[i]);
	}

	modular(input);

	for(i=0;i<amt;i++)
	{
		printf("%d ", input[i]);
	}

	printf("\n");

	return 0;
}

void modular(int a[])
{
	int i;

	for(i=0;i<50;i++)
	{
		if (i%2==0)
		{
			a[i]=a[i]%3;
		}
		else
		{
			a[i]=a[i]%2;
		}
	}	
}
