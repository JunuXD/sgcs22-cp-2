#include <stdio.h>
#include <stdlib.h>

int* merge(int*, int, int*, int, int*, int);
int* max(int*, int*, int*);
void sort(int*, int);
void swap(int*, int*);

int main(void)
{
    int i;
    int *ptr, *resptr;

    ptr = (int*)calloc(12, sizeof(int));

    printf("Input 12 integer : ");

    for(i=0;i<12;i++){
        scanf("%d", ptr+i);
    }

    printf("Array 1       : %d %d %d\n", *ptr, *(ptr+1), *(ptr+2));
    printf("Array 2       : %d %d %d %d\n", *(ptr+3), *(ptr+4), *(ptr+5), *(ptr+6));
    printf("Array 3       : %d %d %d %d %d\n", *(ptr+7), *(ptr+8), *(ptr+9), *(ptr+10), *(ptr+11));

    resptr = merge(ptr, 3, ptr+3, 4, ptr+7, 5);

    printf("result Array : ");

    for(i=0;i<12;i++){
        printf("%d ", *(resptr+i));
    }
    printf("\n");

    free(ptr);
    free(resptr);

    return 0;
}

int* merge(int *ary1, int size1, int *ary2, int size2, int *ary3, int size3)
{
    int i;
    int min_int = -2147483647;
    int *minint = &min_int;
    int *ptr1, *ptr2, *ptr3, *tempptr, *resptr;

    ptr1 = ary1+size1-1; ptr2 = ary2+size2-1; ptr3 = ary3+size3-1;

    sort(ary1, size1);
    sort(ary2, size2);
    sort(ary3, size3);

    int totalsize = size1+size2+size3;

    resptr = (int*)calloc(totalsize, sizeof(int));

    int tempsize = totalsize-1;

    while(size1||size2||size3){
        ptr1 = ary1+size1-1; 
        ptr2 = ary2+size2-1; 
        ptr3 = ary3+size3-1;

        if(size1==0) ptr1=minint;
        if(size2==0) ptr2=minint;
        if(size3==0) ptr3=minint;

        tempptr = max(ptr1, ptr2, ptr3);

        if(ptr1==tempptr) size1-=1;
        if(ptr2==tempptr) size2-=1;
        if(ptr3==tempptr) size3-=1;

        *(resptr+tempsize) = *(tempptr);

        tempsize-=1;
    }

    for(i=0;i<totalsize;i++){
        *(ary1+i)=*(resptr+i);
    }

    free(resptr);

    return ary1;
}

int* max(int *ptr1, int *ptr2, int *ptr3)
{
    int *temp = ptr1;

    if(*ptr2>=*temp) temp = ptr2;
    if(*ptr3>=*temp) temp = ptr3;

    return temp;
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