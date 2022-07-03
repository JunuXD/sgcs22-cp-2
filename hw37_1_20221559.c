#include <stdio.h>
#include <stdlib.h>

int pibonacci(int);

int main(void)
{
    int N, i;
    int* pp;

    scanf("%d", &N);

    pp = (int*)malloc(N*sizeof(int));

    if(pp==NULL){
        printf("not allocated");
        return 1;
    }

    for(i=0;i<N;i++){
        *(pp+i)=pibonacci(i+1);
    }

    for(i=0;i<N;i++){
        printf("%d ", *(pp+i));
    }

    free(pp);

    return 0;
}

int pibonacci(int n)
{
    if(n==1) return 1;
    if(n==2) return 1;
    
    return pibonacci(n-1)+pibonacci(n-2);
}