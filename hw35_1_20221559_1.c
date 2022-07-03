#include <stdio.h>

void swap(int *a, int *b)
{
   int temp;

   temp = *a;
   *a = *b;
   *b = temp;
}
void submain(int*ap,int *cp,int n, int r, int q)
{
   int count = 0;
   if (r == 0)
   {
      for (int i = 0; i < q; i++){
         if (*(cp + i) == *(ap + i))
         {
            count++;
         }
      }
      if (count == n){
         for (int i = 0; i < q; i++){
            printf("%d ", *(ap + i));
         }
         printf("\n");
      }
      return;
   }
   for (int i = n - 1; i >= 0; i--)
   {
      swap((ap + i), (ap + n - 1));
      submain(ap,cp,n - 1, r - 1, q);
      swap((ap + i), (ap + n - 1));
   }
}
void main(void)
{
   int n, array[8],madearray[8];
   scanf("%d", &n);
   int *ap,*cp;
   ap = array;
   cp = madearray;

   for (int i = 0; i < n; i++){
      scanf("%d", ap + i);
      *(cp+i)=* (ap + i);
   }
   submain(ap,cp,n, n, n);
}