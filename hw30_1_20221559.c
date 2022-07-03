#include <stdio.h>

int arry[20][20];

void snail(int);
void print_snail(int);

int main(void)
{
	int size;

	printf("size: ");
	scanf("%d", &size);

 	while(size>0)
	{
	snail(size);
	print_snail(size);
	printf("\n");
	size--;
	}

	return 0;
}

void snail(int n)
{
	int i, row=0, col= -1, cont=1, temp=1;

	while(1){
		for(i=0;i<n;i++){
			col += cont;
			arry[row][col]=temp++;
		}
		if(--n == 0)
			break;
		for(i=0;i<n;i++){
			row += cont;
			arry[row][col]=temp++;
		}
		cont = -cont;
	}
}

void print_snail(int n)
{
	int i, j;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%4d", arry[i][j]);
		}
		printf("\n");
	}
}
