#include <stdio.h>

void input_array(int*, int);
void make_array(int*, int*, int);
void print_array(int*, int);

int main(void)
{
	int n;
	int a[10], b[10];

	scanf("%d", &n);

	input_array(a, n);	

	make_array(a, b, n);

	print_array(b, n);

	return 0;
}

void input_array(int *a, int n)
{
	int i;

	for(i=0;i<n;i++){
		scanf("%d", (a+i));
	}
}

void make_array(int *a, int *b, int n)
{
	int temp=(n/2), even;

	even = (n/2)? 0:1;

	if(n==1){
		*a = *b;
	}
	else if(even){
		while(temp){
			*(b+temp*2-2)=*(a+temp*2-1);
			*(b+temp*2-1)=*(a+temp*2-2);
			temp--;
		}
	}
	else{
		*b=*(a+1);
		*(b+1)=*(a+2);
		*(b+2)=*a;

		temp-=1;

		while(temp){
			*(b+temp*3)=*(a+temp*3-1);
			*(b+temp*3-1)=*(a+temp*3);
		}
	}
}

void print_array(int *a, int n)
{
	for(int i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
}
