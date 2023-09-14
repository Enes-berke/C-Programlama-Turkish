#include <stdio.h>
#include <stdlib.h>

//kendisi hariç pozitif tam bölenleri toplamý kendine eþit olacak
// mukemmel sayý


 void muksayi(int x)
 {
    int i , toplam ;
    toplam = 0;

    for( i=1 ; i<x ; i++)
    {
        if(x%i==0)
        {
            toplam = toplam + i ;
        }
    }

    printf("%d\n",toplam);

    if(x == toplam)
    {
        printf("Girilen sayi mukemmel sayidir!!!");

    }

    else
    {
        printf("Girilen sayi mukemmel sayi degildir!!");
    }


 }








int main()
{
    int x ;
    printf("Bir deger giriniz==>");
    scanf("%d",&x);
    muksayi(x);
    return 0;
}
