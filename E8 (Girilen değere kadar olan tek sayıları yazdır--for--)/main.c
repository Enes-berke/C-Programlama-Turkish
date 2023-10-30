#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , i = 1 ;
     printf(" Bir x degeri giriniz==>\n");
     scanf("%d",&x);

     while(i<=x)
     {
         printf("%4.d",i);
         i +=2 ;
     }
    return 0;
}
