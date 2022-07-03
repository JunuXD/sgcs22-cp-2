#include <stdio.h>
#include <stdlib.h>

void double_double(int **, int *);
void sort(int *, int);
void swap(int *, int *);

int main(void)
{
    int i, size;

    int *arr;
    int **arrpointer;

    scanf("%d", &size);

    arr = (int*)malloc(sizeof(int)*size);
    arrpointer = &arr;

    for(i=0;i<size;i++){
        scanf("%d", *arrpointer+i);
    }

    double_double(arrpointer, &size);

    for(i=0;i<size;i++){
        printf("%d ", *(*arrpointer+i));
    }
    printf("\n");

    double_double(arrpointer, &size);

    for(i=0;i<size;i++){
        printf("%d ", *(*arrpointer+i));
    }
    printf("\n");

    double_double(arrpointer, &size);

    for(i=0;i<size;i++){
        printf("%d ", *(*arrpointer+i));
    }
    printf("\n");

    free(arr);

    return 0;
}

void double_double(int **a, int *size)
{
    *a = (int*)realloc(*a, *size*2*sizeof(int));

    for(int i=0;i<*size;i++){
        *(*a+*size+i) = *(*a+i) * 2;
    }

    *size = (*size)*2;

    sort(*a, *size);
}

void sort(int* a, int m)
{
	for (int i = 0; i <= m - 1; i++) {
		for (int j = (m - 1); j > i; j--) {
			if (*(a + j) < *(a + j - 1)) swap(a + j, a + j - 1);
		}
	}
}

void swap(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}