#include <stdio.h>

int main(void)
{
	int classnum, cutline, i=0, fails=0, totalscore=0;
	float avg;

	printf("Number of class: ");
	scanf("%d", &classnum);
	printf("Cutline: ");
	scanf("%d", &cutline);

	while(i<classnum)
	{
		int temp;
		printf("Input score #%d: ", i);
		scanf("%d", &temp);

		totalscore += temp;
		
		if (temp < cutline)
			fails += 1;

		i += 1;
	}

	avg = (float)totalscore / (float)classnum;

	printf("Average score: %.2f\n", avg);
	printf("Number of failures: %d\n", fails);

	return 0;
}
