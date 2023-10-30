#include <stdio.h>
#include <stdlib.h>
 // saat dakika saniye hesabı

int main()
{
    int dakika , saniye , saat ;
    int sure ;
     printf("Bir saniye degeri giriniz==>");
     scanf("%d",&sure);

     saat = sure / 3600 ;
     dakika = (sure / 60) - (saat * 60) ; // 150 dk için sure / 60 150 çıkar
                                          //150 - (150 dk 2 saattir) 2 * 60 deriz yani ==150 - 120 = 30 dk kalır
     saniye =  sure - ((saat*60*60)+(dakika*60));

    printf("süre %d saat ",saat);

    printf(" %d dakika",dakika);

    printf(" %d saniyedir!! ",saniye);



    return 0;
}
