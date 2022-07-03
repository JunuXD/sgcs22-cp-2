#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char**, char**);

int main(void)
{
    int n, i, j;
    char **ptr, **resptr;

    scanf("%d", &n);

    ptr = (char**)malloc(sizeof(char*)*n);
    resptr = (char**)malloc(sizeof(char*)*n);

    for(i=0;i<n;i++){
        *(ptr+i) = (char*)malloc(sizeof(char)*50);
    }

    for(i=0;i<n;i++){
        scanf("%s", *(ptr+i));
//        printf("%s\n", *(ptr+i));
    }

/*    for(i=0;i<n;i++){
        printf("%s", **(ptr+i));
    }
*/
    for(i=0;i<n;i++){
        *(resptr+i)=*(ptr+i);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(strcmp(*(resptr+j), *(resptr+j+1))>0) swap(resptr+j, resptr+j+1);
        }
    }

    printf("-Lexicographic Order-\n");
    for(i=0;i<n;i++){
        printf("%s\n", *(resptr+i));
    }    

    for(i=n-1;i>=0;i--){
        free(*(ptr+i));
    }
    free(resptr);
    free(ptr);

    return 0;
}

void swap(char** a, char** b)
{
    char* temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

