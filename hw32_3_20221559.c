#include <stdio.h>

void calc(int*, int*, char);

int main(void)
{
	char oper;
	int a, b;

	scanf("%c", &oper);
	scanf("%d %d", &a, &b);
		
	calc(&a, &b, oper);

	printf("%d\n", a);
	
	return 0;
}


void calc(int *a, int *b, char op)
{
	switch(op){
		case '+': *a+=*b;break;
		case '-': *a-=*b;break;
		case '*': *a*=*b;break;
		case '/': *a/=*b;break;
	}
}
