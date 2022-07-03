#include <stdio.h>
#include <stdlib.h>

void push_back(int**, int*, int);
void pop_back(int**, int*);
double average(int*, int);
double variance(int*, int);

int main(void)
{
    int n, i, choice, temp;
    int size=0;

    int *arr;
    int **arrpointer;

    arr = (int*)malloc(size*sizeof(int));
    arrpointer = &arr;

    scanf("%d", &n);

    while(n){
        scanf("%d", &choice);
        if(choice==1){
            scanf("%d", &temp);
//            printf("temp = %d\n", temp);
            push_back(arrpointer, &size, temp);
            for(i=0;i<size;i++){
                printf("%d ", *(*arrpointer+i));
                if(i==size-1) printf("\n");
            }
            printf("%.6lf %.6lf\n", average(*arrpointer, size), variance(*arrpointer, size));
        }
        else if(choice==2){
            pop_back(arrpointer, &size);
            for(i=0;i<size;i++){
                printf("%d ", *(*arrpointer+i));
                if(i==size-1) printf("\n");
            }
            printf("%.6lf %.6lf\n", average(*arrpointer, size), variance(*arrpointer, size));
        }
/*        switch(choice){
            case 1: {
                scanf("%d", &temp);
                push_back(arrpointer, &size, temp);
                for(i=0;i<size;i++){
                    printf("%d ", *arrpointer[i]);
                    if(i==size-1) printf("\n");
                }
                printf("%.6lf %.6lf\n", average(*arrpointer, size), variance(*arrpointer, size));
            } break;
            case 2: {
                pop_back(arrpointer, &size);
                for(i=0;i<size;i++){
                    printf("%d ", *arrpointer[i]);
                    if(i==size-1) printf("\n");
                }
                printf("%.6lf %.6lf\n", average(*arrpointer, size), variance(*arrpointer, size));
            } break;
            default: printf("wrong\n");
        }*/ //switch문이 문제인지 확인하려고 주석처리함
        n--;
    }

    free(arr);

    return 0;
}

void push_back(int** a, int* size, int value)
{
    *size+=1;
//    printf("size = %d\n", *size);
    *a = (int*)realloc(*a, *size*sizeof(int));
    *(*a+*size-1)=value;
}

void pop_back(int **a, int *size)
{
    if(*size>0) *size-=1;
    else *size=0;
    *a = (int*)realloc(*a, *size*sizeof(int));
}

double average(int *a, int size)
{
    double temp = 0;
    int i;

    for(i=0;i<size;i++){
        temp+=*(a+i);
    }

    return (size==0)? 0: temp/size;
}

double variance(int *a, int size)
{
    double avg = average(a, size);
    double temp = 0;
    int i;

    for(i=0;i<size;i++){
        temp += (*(a+i)-avg)*(*(a+i)-avg);
    }

    return (size==0)? 0: temp/size;
}