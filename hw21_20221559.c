#include <stdio.h>

int main(void)
{
	int a, i=0;
	printf("Input: ");
	scanf("%d", &a);

	while (i<a)
	{
		int temp1=0, temp2=a-i;	
		while (temp2>=1)
		{
			printf(" ");
			temp2 -= 1;
		}
		while (temp1<2*i+1)
		{
			printf("*");
			temp1 += 1;
		}
		printf("\n");
		i += 1;
	}

	return 0;
}
