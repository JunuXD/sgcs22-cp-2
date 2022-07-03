#include <stdio.h>

void getPsum(int [], int, int [1000][1000]);

int main(void)
{
    int n, i, a, b;
    int arr[1000], psum[1000][1000];

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", arr[i]);
    }

    scanf("%d %d", &a, &b);

    getPsum(arr, n, psum);

    printf("%d\n", psum[a][b]);

    return 0;
}

void getPsum(int arr[], int n, int psum[1000][1000])
{
    int i, j, k;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=i;k<=j;k++){
                psum[i][j]=0;
                psum[i][j]+=arr[k];
            }
        }
    }
}