#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , toplam = 0;

    printf("Bir deger giriniz ==> \n");
    scanf("%d",&i);


    while(i>0)
    {
        toplam = toplam + i ;
        i--;
    }

    printf("Istenen sonuc ==> %d",toplam);

    return 0;
}
