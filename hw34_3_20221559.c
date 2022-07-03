#include <stdio.h>

void input_array(int [][100], int);
void func(int [][100], int [][100], int [][100], int, int);
void print_array(int [][100], int);

int main(void)
{
	int N, op;
	int a[100][100], b[100][100], c[100][100];

	scanf("%d", &N);
	
	input_array(a, N);
	input_array(b, N);

	scanf("%d", &op);

	func(a, b, c, N, op);

	print_array(c, N);
}

void input_array(int a[][100], int N)
{
	int i, j;

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			scanf("%d", (*(a+i)+j));
		}
	}
}

void func(int a[100][100], int b[100][100], int c[100][100], int N, int op)
{
	int i,j,k;
	
	if(op==0){
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
			}
		}
	}
	else if(op==1){
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				*(*(c+i)+j)=*(*(a+i)+j)-*(*(b+i)+j);
			}
		}
	}
	else{
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				*(*(c+i)+j)=0;
				for(k=0;k<N;k++){
					*(*(c+i)+j)+=*(*(a+i)+k) * *(*(b+k)+j);
				}
			}
		}
	}
}

void print_array(int a[][100], int N)
{
	int i, j;

	for( i=0;i<N;i++ ){
		for( j=0;j<N;j++ ){
			printf("%d ", *(*(a+i)+j));
		}
		printf("\n");
	}
}
