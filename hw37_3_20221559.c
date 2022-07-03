#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addintchar(char*, char*, char*);
void reverse(char*, int);

int main(void)
{
    int n, i;
    char **ptr;

    scanf("%d", &n);

    ptr = (char**)malloc(sizeof(char*)*n);
    if(ptr==NULL){
        printf("not allocated");
        return 1;
    }

    for(i=0;i<n;i++){
        ptr[i] = (char*)malloc(sizeof(char)*100);
        if(ptr[i]==NULL){
            printf("not allocated");
            return 1;
        }
    }

    if(n>0) ptr[0] = "1";
    if(n>1) ptr[1] = "1";

    for(i=2;i<n;i++){
        addintchar(ptr[i-1], ptr[i-2], ptr[i]);
    }

    printf("%s\n", ptr[n-1]);

/*    for(i=0;i<n;i++){
        free(ptr[i]);
    }
*/    
    free(ptr);

    return 0;
}

void addintchar(char *one, char *two, char *three)
{
    int carry=0, p1tp, p2tp;

    int i, n, m;
    n = strlen(one);
    m = strlen(two);

    i=0;
    while(n||m||carry){
        if(n) p1tp = one[(n--)-1]-'0';
        if(m) p2tp = two[(m--)-1]-'0';
        three[i++] = (char)((p1tp+p2tp+carry)%10+'0');
        carry = (p1tp+p2tp+carry)/10;
        p1tp = 0; p2tp = 0;
    }
    three[i]=0;

    reverse(three, i);
}

void reverse(char *arr, int len)
{
    int i;
    char temp;

    for(i=0;i<len/2;i++){
        temp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }
}