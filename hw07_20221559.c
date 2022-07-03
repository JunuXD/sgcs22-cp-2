/* 1차 방정식 풀기 */

#include <stdio.h>

float solve_x(int, int, int, int);
float solve_y(int, int, int, int);

int main(void)
{

	int a, b, c, d;
	float x, y;

	printf("1st equation: y = ax - b, input 'a' and 'b'\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("2nd equation: y = cx - d, input 'c' and 'd'\n");
	printf("c = ");
	scanf("%d", &c);
	printf("d = ");
	scanf("%d", &d);

	x = solve_x(a, b, c, d);

	y = solve_y(a, b, c, d);

	printf("result:\nx is %f\ny is %f\n", x, y);

	return 0;

}

float solve_x(int a, int b, int c, int d)
{

	float x;

	x = ((float)b - (float)d) / ((float)a - (float)c);

	return x;

}

float solve_y(int a, int b, int c, int d)
{

	float y;

	y = a * ((float)b - (float)d) / ((float)a - (float)c) - b;

	return y;

}
