#include <stdio.h>

int main(void)
{
	int a, b, temp, res=-1;
	printf("Input two integers: ");
	scanf("%d %d", &a, &b);

	if (a==b){
		printf("Both numbers are same\n");
	}
	else if (a>b){
		temp = b;
		b = a;
		a = temp;
	}

	b *= 2;
		
	do
	{
		a *= 2;
		res += 1;
	} while(a<b);

	if (res !=0){
		printf("%d times x2 needed\n", res);
	}

	return 0;
}
