#include <stdio.h>

void dec2oct(int*, int*, int*, int*, int);
void dec2hex(char*, char*, char*, int);
char digit2hex(int);

int main(void)
{
//  input, save
	int decimal;

	printf("Input one number : ");
	scanf("%d", &decimal);

//  calling functions
	int oct1, oct2, oct3, oct4;
	dec2oct(&oct1, &oct2, &oct3, &oct4, decimal);

	char hex1, hex2, hex3;
	dec2hex(&hex1, &hex2, &hex3, decimal);

//  output
	printf("%.4o\n", decimal);
	printf("%d%d%d%d\n", oct1, oct2, oct3, oct4);
	printf("%.3X\n", decimal);
	printf("%c%c%c\n", hex1, hex2, hex3);

	return 0;
}

void dec2oct(int *a, int *b, int *c, int *d, int e)
{
	*a = e / 512;
	*b = (e % 512) / 64; 
	*c = (e % 64) / 8;
	*d = e % 8;
}

void dec2hex(char *a, char *b, char *c, int d)
{
	 int dec1, dec2, dec3;

	 dec1 = d / 256;
	 dec2 = (d % 256) / 16;
	 dec3 = d % 16;

	 *a = digit2hex(dec1);
	 *b = digit2hex(dec2);
	 *c = digit2hex(dec3);
}

char digit2hex(int a)
{
	char temp;

	if (a>=10)
	{
		temp = 65 + (a - 10);
	}
	else
	{
		temp = 48 + a;
	}

	return temp;
}		
