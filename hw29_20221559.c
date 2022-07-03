#include <stdio.h>

void input4x4matrix(int [][4]);
void print4x4matrix(int [][4]);
void multmatrix(int [][4][4]);

int main(void)
{
	int M[3][4][4];

	printf("First Matrix: \n");
	input4x4matrix(M[0]);

	printf("Second Matrix: \n");
	input4x4matrix(M[1]);

	multmatrix(M);

	printf("Result:\n");
	print4x4matrix(M[2]);
	
	return 0;
}

void input4x4matrix(int x[][4])
{
	int i, j;

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d", &x[i][j]);
		}
	}
}

void print4x4matrix(int x[][4])
{
	int i, j;

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}

void multmatrix(int x[][4][4])
{
	int i, j;

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			x[2][i][j] = 0;
			x[2][i][j] += x[0][i][0] * x[1][0][j];
			x[2][i][j] += x[0][i][1] * x[1][1][j];
			x[2][i][j] += x[0][i][2] * x[1][2][j];
			x[2][i][j] += x[0][i][3] * x[1][3][j];
		}
	}
}
