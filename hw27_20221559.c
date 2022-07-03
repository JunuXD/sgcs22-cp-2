#include <stdio.h>

int main(void)
{
	int max, min, i, num[10];

	printf("Input (10 numbers): ");
	
	for(i=9; i>=0; i--)
		scanf("%d", &num[i]);
	for(i=0; i<=9; i++)
		printf("%d ", num[i]);

	if (num[0] >= num[1]){
		max = num[0];
		min = num[1];
	}

	for(i=2;i<=9;i++)
	{
		if (num[i]>=max)
			max = num[i];
		if (num[i]<=min)
			min = num[i];
	}

	printf("\nMax: %d, Min: %d\n", max, min);

	return 0;
}
