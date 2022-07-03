#include <stdio.h>

int mul23(int, int);
void biggerback(int*, int*);

int main(void)
{
	int num1, num2, res;

	printf("Input first number: ");
	scanf("%d", &num1);
	printf("Input second number: ");
	scanf("%d", &num2);

	if (num1<1)
		printf("Input is less than 1");
	else if (num2<2)
		printf("input is less than 1");

	biggerback(&num1, &num2);

	res = mul23(num1, num2); 

	printf("Result: %d\n", res);

	return 0;
}

int mul23(int num1, int num2)
{
	int res=0, i;
	for(i=num1; i<=num2; i++){
		if (i%3 == 0)
			res += i;
		else if (i%2 == 0)
			res += i;
	}

	return res;
}

void biggerback(int *a, int *b)
{
	int temp1, temp2;
	if (*a >= *b){
		temp1 = *b;
		temp2 = *a;
		*a = temp1;
		*b = temp2;
	}	
}
