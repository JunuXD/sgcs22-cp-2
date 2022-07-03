#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str1, *str2;
    int len1, len2;

    str1 = (char*)malloc(sizeof(char)*50);
    str2 = (char*)malloc(sizeof(char)*50);

    gets(str1);
    gets(str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

//    printf("[%s]\n", str1);
//    printf("[%s]\n", str2);

//    printf("%d %d\n", len1, len2);

    if(len1!=len2){
        printf("Not equal\n");
        return 0;
    } else {
        for(int i=0;i<len1;i++){
            if(*(str1+i)!=*(str2+i)&&*(str1+i)!=*(str2+i)+32&&*(str1+i)+32!=*(str2+i)){
                printf("Not equal\n");
                return 0;
            }
        }
        printf("Equal\n");
        return 0;
    }
}