#include <stdio.h>
#include <stdlib.h>

void reverse(char*, int);

int main(void)
{
    int n, m;
    char *p1, *p2, *p3;

    scanf("%d%d", &n, &m);

    p1 = (char*)malloc(sizeof(char)*51);
    p2 = (char*)malloc(sizeof(char)*51);
    p3 = (char*)malloc(sizeof(char)*52);

    if(p1==NULL){
        printf("not allocated");
        return 1;
    }
    if(p2==NULL){
        printf("not allocated");
        return 1;
    }
    if(p3==NULL){
        printf("not allocated");
        return 1;
    }

    int carry = 0, i, sum;
    int p1tp, p2tp;

    scanf("%s", p1);
    scanf("%s", p2);

//    reverse(p1, n);
//    reverse(p2, m);

/*    printf("%s\n", p1);
    printf("%s\n", p2);
*/

    i=0;
    while(n||m||carry){
        if(n) p1tp = p1[(n--)-1]-'0';
        if(m) p2tp = p2[(m--)-1]-'0';
        p3[i++] = (char)((p1tp+p2tp+carry)%10+'0');
        carry = (p1tp+p2tp+carry)/10;
        p1tp = 0; p2tp = 0;
    }
    p3[i]=0;

//    printf("%s\n", p3);
    
    reverse(p3, i);

    printf("%s\n", p3);

    free(p1);free(p2);free(p3);

    return 0;
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