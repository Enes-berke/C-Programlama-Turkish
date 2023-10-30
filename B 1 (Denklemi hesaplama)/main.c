#include <stdio.h>
#include <stdlib.h>

//ax^2 + bx + c degerini hesapla

int main()
{
   int a , b , c , x;

   printf("a,b,c ve x deðerini giriniz =>\n ");
   scanf("%d%d%d%d",&a,&b,&c,&x);

   printf("ax^2+bx+c ==>%d",(a*x*x+b*x+c));


return 0;
}
