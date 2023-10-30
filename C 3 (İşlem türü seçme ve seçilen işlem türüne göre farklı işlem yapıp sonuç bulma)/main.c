#include <stdio.h>
#include <stdlib.h>

int main()
{
   int no1,no2;
   char op;

   printf("Lutfen isleminizi seciniz (+,-):");
   scanf("%c",&op);

   printf("Lutfen iki tamsayi giriniz\n");
   scanf("%d%d",&no1,&no2);
   if((no1==0)||(no2==0))

   {
       printf("Islem yapilamiyooo");
   }
   else if(op = '+')
   {
     printf("%d/%d",no1+no2,no1*no2);

   }

    else //(op = '+')
   {
    printf("%d/%d",no1-no2/no1*no2);

   }
    return 0;
}
