#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i, j;
    int **ary;

    scanf("%d", &n);

    ary = (int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        ary[i] = (int*)malloc(sizeof(int)*n);
    }

    int x, y;
    x = 0;
    y = n/2;

    for(i=1;i<=n*n;i++){
        ary[x][y] = i;
        if(i%n==0) x++;
        else{
            x--;y--;
            if(x<0) x = n-1;
            if(y<0) y = n-1;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%3d", ary[i][j]);
        }
        printf("\n");
    }

    return 0;
}