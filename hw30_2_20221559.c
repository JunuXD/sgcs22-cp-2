#include <stdio.h>

void checknswap(int*, int*);

int main(void)
{
	int i, size=9, arry[10];
	
	for(i=0;i<10;i++){
		scanf("%d", &arry[i]);
	}

	while(size>0){
		for(i=0;i<size;i++){
			checknswap(&arry[i], &arry[i+1]);
		}
		size--;
	}

	for(i=0;i<10;i++){
		printf("%d ", arry[i]);
	}

	printf("\n");

	return 0;
}		

void checknswap(int *a, int *b)
{
	int temp;

	if (*a >= *b){
		temp = *b;
		*b = *a;
		*a = temp;
	}
}
