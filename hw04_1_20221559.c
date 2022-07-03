/* hw04-1 20221559 박준우 22/03/18 */

#include <stdio.h>

int main(void)
{

	int b_year, b_month, b_date;

	printf("Birthday in yyyymmdd : ");
	scanf("%4d%2d%2d", &b_year, &b_month, &b_date);

	printf("Your birthday is %d / %d / %d \n", b_year, b_month, b_date);

	int year, age;

	printf("Year : ");
	scanf("%d",&year);

	age = year - b_year + 1;

	printf("In %d, your age is %d\n", year, age);

	return 0;
}
