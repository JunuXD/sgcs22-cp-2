#include <stdio.h>

double calc(int*, int);

int main(void)
{
	int amt, i;
	int arrinp[10000];
	double res;

	scanf("%d", &amt);
	for( i=0;i<amt;i++ ){
		scanf("%d", arrinp+i);
	}
	
	res = calc(arrinp, amt);

	printf("%.2lf\n", res);

	return 0;
}

double calc(int *a, int n)
{
	int i, temp;
	for( i=0;i<n;i++ ){
		temp += *(a+i);
	}
	
	return ((double)temp/n);
}
