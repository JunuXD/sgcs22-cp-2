#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **ptr;
    int n, m;
    int i, j;

    scanf("%d%d", &n, &m);

    ptr = (int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        ptr[i] = (int*)malloc(sizeof(int)*m);
    }

    for(i=0;i<m;i++){
        ptr[0][i] = 1;
    }

    for(i=0;i<n;i++){
        ptr[i][0] = 1;
    }

    for(i=1;i<n;i++){
        for(j=1;j<m;j++){
            ptr[i][j] = ptr[i-1][j]+ptr[i][j-1];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    for(i=n-1;i>=0;i--){
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}