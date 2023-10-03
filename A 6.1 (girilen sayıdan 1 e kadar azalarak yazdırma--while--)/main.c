#include <stdio.h>
#include <stdlib.h>

// girilen sayýdan 1 e kadar yazdýrma while azaltarak yap



int main()
{
    int x;

    printf("Bir x degeri giriniz ==> \n");
    scanf("%d",&x);

    while(x>=0)
    {
        printf("==>%d\n",x);
        x -= 1 ;

    }




}


