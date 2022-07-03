#include <stdio.h>

void swap(int*, int*);
void sort(int*, int);
void print_array(int*, int);

int main(void)
{
	int i, amount, inparr[1000];
	scanf("%d", &amount);
	for( i=0;i<amount;i++ ){
		scanf("%d", inparr+i);
	}
	sort(inparr, amount);
	print_array(inparr, amount);

	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp=*a;*a=*b;*b=temp;
}

void sort(int *a, int n)
{
	n--;
	while(n){
		for(int i=0;i<n;i++){
			if (*(a+i)>=*(a+i+1)){
				swap(a+i, a+i+1);
			}
		}
		n--;
	}	
}

void print_array(int* a, int n)
{
	for( int i=0;i<n;i++ ){
		printf("%d ", *(a+i));
	}
	printf("\n");
}
