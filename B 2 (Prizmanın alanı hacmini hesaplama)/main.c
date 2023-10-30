#include <stdio.h>
#include <stdlib.h>

/*

Taban alan == a * b
Yanal Alan == 2 * a * h + 2 * b * h
Toplam Alan == 2 * a * b + 2 * a * h + 2 * b * h
Hacim == a * b * h

*/

int main()
{
   int a , b , h ;

   printf("a,b ve h degerini giriniz =>\n ");
   scanf("%d%d%d",&a,&b,&h);

   printf("Taban Alan =>%d\n"  ,(a * b));
   printf("Yanal Alan =>%d\n"  ,(2 * a * h + 2 * b * h));
   printf("Toplam Alan =>%d\n"  ,(2 * a * b + 2 * a * h + 2 * b * h));
   printf("Hacim =>%d\n"  ,(a * b * h));





return 0;
}
