#include <stdio.h>
#include <stdlib.h>

int determinant(int**);
void swap(int*, int*);

int main(void)
{
    int **inpArr;

    float **resArr;

    inpArr = (int**)malloc(sizeof(int*)*2);
    inpArr[0] = (int*)malloc(sizeof(int)*2);
    inpArr[1] = (int*)malloc(sizeof(int)*2);

    resArr = (float**)malloc(sizeof(float*)*2);
    resArr[0] = (float*)malloc(sizeof(float)*2);
    resArr[1] = (float*)malloc(sizeof(float)*2);

    scanf("%d%d%d%d", &inpArr[0][0], &inpArr[0][1], &inpArr[1][0], &inpArr[1][1]);

    if(determinant(inpArr) == 0){
        printf("Singular Matrix\n");
    } else {
        int det = determinant(inpArr);

        resArr[0][0] = (float)inpArr[1][1];
        resArr[0][1] = -1*(float)inpArr[0][1];
        resArr[1][0] = -1*(float)inpArr[1][0];
        resArr[1][1] = (float)inpArr[0][0];

        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                resArr[i][j] /= det;
            }
        }
        printf("Invertive Matrix");
        printf("%.2f %.2f\n%.2f %.2f\n", resArr[0][0], resArr[0][1], resArr[1][0], resArr[1][1]);
    }

    free(resArr[1]);
    free(resArr[0]);
    free(resArr);

    free(inpArr[1]);
    free(inpArr[0]);
    free(inpArr);
    

    return 0;
}

int determinant(int** a)
{
    int temp;
    temp = a[0][0]*a[1][1] - a[1][0]*a[0][1];

    return temp;
}

void swap(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}