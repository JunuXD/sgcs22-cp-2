#include <stdio.h>

int main(void)
{
	float a, b, res;
	char op;
		
	printf("Operator (+, -, *, /)\nPlease enter the formula. (ex : 12.3 + 5.5)\n");
	scanf("%f %c %f", &a, &op, &b);	

	int b_in, b_fl;

	b_in = (int)b;
	b_fl = (int)(100 * (b - b_in));

	switch(op)
	{
		case '/' : switch(b_in)
					{
						case 0 : switch(b_fl)
									{
										case 0 : printf("Divide by zero\n"); break;
										default : res = a/b; printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
									}; break;
						default : res = a/b; printf("%.2f %c %.2f = %.2f\n", a, op, b, res);
					}; break;
		case '-' : res = a-b; printf("%.2f %c %.2f = %.2f\n", a, op, b, res); break;
		case '+' : res = a+b; printf("%.2f %c %.2f = %.2f\n", a, op, b, res); break;
		case '*' : res = a*b; printf("%.2f %c %.2f = %.2f\n", a, op, b, res); break;
		default : printf("Invalid operator : %c\n", op);
	}

	return 0;
}
