#include <stdio.h>
#include <stdlib.h>

int main()
{
   float en , boy , yukseklik , hacim ;

   printf("Havuzun en, boy ve yukseklik degerini giriniz==>\n ");

   scanf("%f%f%f",&en,&boy,&yukseklik);

   hacim = en * boy * yukseklik;

   printf("Havuzun hacim degeri==> %.1f",hacim);




    return 0;
}
