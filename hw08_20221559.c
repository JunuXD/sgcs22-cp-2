//20221559 과제 8

#include <stdio.h>

float avg(int, int, int, int);
float dev(int, float);

int main(void)
{
	int num1, num2, num3, num4;

	float avg_n, dev1, dev2, dev3, dev4;

	printf("Enter the first number : ");
	scanf("%d",&num1);

	printf("Enter the second number : ");
	scanf("%d",&num2);

	printf("Enter the third number : ");
	scanf("%d",&num3);

	printf("Enter the fourth  number : ");
	scanf("%d",&num4);

	avg_n = avg(num1, num2, num3, num4);

	printf("******** average is %.2f *******\n", avg_n);

	dev1 = dev(num1, avg_n);
	dev2 = dev(num2, avg_n);
	dev3 = dev(num3, avg_n);
	dev4 = dev(num4, avg_n);

	printf("first number :\t%d -- deviation :\t%10.2f\n", num1, dev1);
	printf("second number :\t%d -- deviation :\t%10.2f\n", num2, dev2);
	printf("third number :\t%d -- deviation :\t%10.2f\n", num3, dev3);
	printf("fourth number :\t%d -- deviation :\t%10.2f\n", num4, dev4);

	return 0;

}

float avg(int num1, int num2, int num3, int num4)
{

	float a;

	a = ( (float)num1 + (float)num2 + (float)num3 + (float)num4 ) / (float)4;

	return a;
		
}

float dev(int num, float avgn)
{

	float a;

	a = (float)num - avgn;

	return a;

}
