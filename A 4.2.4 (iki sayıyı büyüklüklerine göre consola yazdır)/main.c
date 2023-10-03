#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Kullanýcýdan 2 adet sayý alýnýz büyüklük küçüklük durumuna göre
   // ekrana bastýrma iþlemini yapýnýz

   int sayi1,sayi2;

   printf("Lutfen 2 adet sayi giriniz\n");
   scanf("%d%d",&sayi1,&sayi2);

   if(sayi1 == sayi2)
   {
       printf("Sonuc : %d = %d",sayi1,sayi2); // printf içine kullanýzýdan girilen deðeri yazmak istiyorsak kullandýðýmýz
                                              // deðiþkeni deðil %d tarzý ifade kullanmamýz gerekir.!!
   }
   else if(sayi1 > sayi2)
   {
        printf("Sonuc : %d > %d",sayi1,sayi2);
   }
   else
   {
      printf("Sonuc : %d < %d",sayi1,sayi2);
   }


    return 0;
}
