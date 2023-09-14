#include <stdio.h>
#include <stdlib.h>

int main()
{
      //Kullanýcýdan 2 adet sayý ve isminin baþ harfini alýnýz ilk sayim bu
    // 2. sayým bu ismimim baþ harfi bu þeklinde ekrana bastýrýnýz

    int sayi1 ;
    printf("Lutfen Bir Deger Giriniz => \n\n");
    scanf("%d",&sayi1);
    printf("Ýlk Sayim => %d \n\n\n", sayi1);

    /*char karakter ;
    printf("Lutfen Bir Harf Giriniz => \n");
    scanf("%c",&karakter);
    printf("Harfim => %c ", karakter);*/

     char karakter ;

    printf("\n Lutfen Bir Karakter Giriniz => \n");
    scanf(" %c",&karakter);

    printf(" Girdiginiz Karakter Degeri => %c", karakter);



    int sayi2 ;

    printf("\n Lutfen Ýkinci Bir Deger Giriniz => \n\n" );
    scanf("%d",&sayi2);
    printf("Ýlk Sayim => %d \n\n\n", sayi2);




    return 0;
}
