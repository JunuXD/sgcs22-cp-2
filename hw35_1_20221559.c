#include <stdio.h>

void permutation(int*, int*, int, int, int);
void swap(int*, int*);
int checkdiff(int*, int*, int);
int checkone(int*, int*);

int main(void)
{
	int n, i;
	int a[8]={0, };
	int b[8];

	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf("%d", (a+i));
	}

	permutation(a, b, n, n, n);
	
	return 0;
}

int checkdiff(int *a, int *b, int size)
{
	int i, temp=1;

	for(i=0;i<size;i++)
	{
		temp *= checkone((a+i), (b+i));
	}

	return temp;
}

void permutation(int* a, int* b, int N, int R, int q)
{
	if (R == 0){
		if(checkdiff(a, b, q)==1){
			for (int i=0;i<q;i++){
			printf("%d ", *(b+i));
			}
			printf("\n");
		}
	}

	for(int i=N-1;i>=0;i--){
		swap(a+i, a+N-1);
		*(b+R-1) = *(a+N-1);
		permutation(a, b, N-1, R-1, q);
		swap(a+i, a+N-1);
	}
}

int checkone(int *a, int *b)
{
	int temp;

	if(*a==*b){
		return 0;
	}
	else{
		return 1;
	}
}

void swap(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}