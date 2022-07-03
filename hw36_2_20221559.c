#include <stdio.h>

void func(int [], int, int [][1000]);
int min(int, int);

int main(void)
{
    int n, i, j;
    int arr[1000], res[1000][1000]={0,};

    scanf("%d", &n);

    for(i=0;i<n;i++){
        scanf("%d", arr[i]);
    }

    func(arr, n, res);
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            (res[i][j]==0)? :printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void func(int arr[], int n, int res[][1000])
{
    int i, j;

    for(i=0;i<n;i++){
        res[n-1][i]=arr[i];
    }

    for(i=n-2;i>=0;i--){
        for(j=0;j<i+1;j++){
            res[i][j]=min(res[i+1][j], res[i+1][j+1]);
        }
    }
}

int min(int a, int b)
{
    int temp = (a>=b)? b: a;

    return temp;
}