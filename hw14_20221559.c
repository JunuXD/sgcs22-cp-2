#include <stdio.h>

int main(void)
{
	int year, max_leap;
		
	printf("Enter the yeaer to be tested: ");
	scanf("%d", &year);

	if ((year%4)==0 && (year%100)==0)
			max_leap = year - 4;
	else
			max_leap = year - (year%4);

	if ((year%4)==0 && (year%100)!=0)
			printf("It is a leap year.\n");
	else{
			printf("It is not a leap year\n");
			printf("%d is a leap year\n", max_leap);
	}

	return 0;
}
