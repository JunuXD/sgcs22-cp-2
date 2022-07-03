#include <stdio.h>

int count(int[][100], int, int);

int main(void)
{
    int n, m;
    int i, j;
    int array[100][100];
    int countTotal;

    scanf("%d %d", &n, &m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d", *(array+i)+j);
        }
    }

    countTotal = count(array, n, m);

    printf("%d\n", countTotal);
    
    return 0;
}

int count(int board[][100], int n, int m)
{
    int a[100][100] = {0, };

    int i, j, count=0;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(*(*(board+i)+j)==0){
                if(*(*(a+i)+j)==0){
                    if(i+1<n){
                        if(*(*(a+i)+j+1)==0){
                            count+=1;
                            *(*(a+i)+j+1)+=count;
                            *(*(a+i)+j)+=count;
                            continue;
                        }
                    }
                    if(i>0){
                        if(*(*(a+i)+j-1)==0){
                            count+=1;
                            *(*(a+i)+j-1)+=count;
                            *(*(a+i)+j)+=count;
                            continue;
                        }
                    }
                }
            }
            else{
                if(*(*(a+i)+j)==0){
                    if(j+1<m){
                        if(*(*(a+i+1)+j)==0){
                            count+=1;
                            *(*(a+i+1)+j)+=count;
                            *(*(a+i)+j)+=count;
                            continue;
                        }
                    }
                    if(j>0){
                        if(*(*(a+i-1)+j)==0){
                            count+=1;
                            *(*(a+i-1)+j)+=count;
                            *(*(a+i)+j)+=count;
                            continue;
                        }
                    }
                }
            }

        }
    }

    return count;
}