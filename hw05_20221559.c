/* 20221559 박준우 2022/03/23 hw5 */

#include <stdio.h>

void sqr(int);
void printOne(int);

int main(void)
{

	int input_i;

	printf("Input: ");
	scanf("%d", &input_i);

	sqr(input_i);

	return 0;
}

void sqr(int num)
{
	int result;
	result = num * num;

	printOne(result);

}

void printOne(int result)
{
	printf("Result : %d\n", result);

}

