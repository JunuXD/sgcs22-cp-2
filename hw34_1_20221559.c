#include <stdio.h>

void shift_n_left(int*, int);
void shift_n_right(int*, int);
void print_array(int*);

int main(void)
{
	int deg, dir;
	int a[10]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };	

	scanf("%d", &deg);
	scanf("%d", &dir);

	dir? shift_n_right(a, deg):shift_n_left(a, deg);

	print_array(a);

	return 0;
}

void shift_n_left(int *a, int n)
{
	int i, temp;

	while(n){
		temp=*a;
		for( i=0;i<9;i++ ){
			*(a+i)=*(a+i+1);
		}
		*(a+9)=temp;
		n--;
	}
}

void shift_n_right(int *a, int n)
{
	int i, temp;

	while(n){
		temp=*(a+9);
		for( i=9;i>0;i-- ){
			*(a+i)=*(a+i-1);
		}
		*a=temp;
		n--;
	}
}

void print_array(int *a)
{
	for(int i=0;i<10;i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
}
