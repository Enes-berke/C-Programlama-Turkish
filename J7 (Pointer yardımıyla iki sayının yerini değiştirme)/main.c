#include <stdio.h>
#include <stdlib.h>

void yerdegistir(int *sayi1,int *sayi2)
{
    int gecici;
    gecici=*sayi1;
    *sayi1 = *sayi2;
    *sayi2 = gecici;

    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",*sayi1);
    printf("Ikinci sayim = %d\n",*sayi2);
}


int main()
{
     //Pointer kullanarak iki sayýyýnýn yerini deðiþtirip sayýlarý yerdeðiþtirmeden önce
    //ve yerdeðiþtirdikten sonra console a bastýrýnýz

    int sayi1,sayi2;

    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    printf("Sayilarim yer degistirmeden once\n");
    printf("Ilk sayim = %d\n",sayi1);
    printf("Ikinci sayim = %d\n",sayi2);

    yerdegistir(&sayi1,&sayi2);
    printf("Sayilarim yer degistirdikten sonra\n");
    printf("Ilk sayim = %d\n",&sayi1);// adresi bastýrýr
    printf("Ikinci sayim = %d\n",&sayi2);//adresi bastýrýr
}
