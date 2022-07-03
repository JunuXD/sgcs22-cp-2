#include <stdio.h>

void pascal(int, long long[][50]);

int main(void)
{
    int level, i, j;
    long long tri[50][50]={0,};

    scanf("%d", &level);

    pascal(level, tri);

    for(i=0;i<level;i++){
        for(j=0;j<level;j++){
            (tri[i][j]==0)? :printf("%d ", tri[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void pascal(int level, long long tri[][50])
{
    int i, j;

    for(i=0;i<level;i++){
        tri[i][0]=1;
        for(j=1;j<level;j++){
            tri[i][j]+=tri[i-1][j]+tri[i-1][j-1];
        }
    }
}