#include <stdio.h>
#include <string.h>

void split_string(char*, char*, char*);

int main(void)
{
    char inputstr[50];

    char resstr1[25], resstr2[25];

    gets(inputstr);

    int len = strlen(inputstr);

    strncpy(resstr1, inputstr, len/2);

    strcpy(resstr2, inputstr+len/2);

    printf("[%s] [%s]\n", resstr1, resstr2);

    return 0;
}