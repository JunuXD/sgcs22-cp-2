#include <stdio.h>

int main(void)
{
	float a;
	int b;
	
	printf("Input: ");
	scanf("%f", &a);

	b = (int)a;

	printf ("Use \">\": %d\n", (int)(a-b+0.5) > 0);
	printf ("Use \">=\": %d\n", a-b >= 0.5);
	printf ("Use \"==\": %d\n", (int)(a - b + 0.5) == 1);
	printf ("Use \"!=\": %d\n", (int)(a-b+0.5) != 0);

	return 0;
}
