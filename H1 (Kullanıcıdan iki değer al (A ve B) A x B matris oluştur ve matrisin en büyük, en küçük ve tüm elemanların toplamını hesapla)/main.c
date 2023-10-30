#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A=3 , B=2;
   char can[A][B];
   int i,j;

   printf("%d  *  %d boyutunda bir matris giriniz\n",A,B);
   for(i=0;i<A;i++)
   {
       for(j=0;j<B;j++)
       {
           scanf("%d",&can[i][j]);
       }
   }
}
