#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    int (4 bytes)  ||  %d

    double (8 bytes)  ||  %lf  || çok büyük sayıları tutar ondalık sayıları tutar

    float (4 bytes)  ||  %f  || ondalık sayıları tıtar

    char (1 byte)  ||  %c  || tek karakter tutar


    */


    int deneme1 = 181 ;
    int deneme2 = 30 ;
    int deneme3 = 109 , deneme4 = 145 ;



    // %d iþareti => deneme 1 - 2 - 3 - 4 deðeri de yazdýracaksak 4 kere %d koymamýz lazým
    // %d arasýna boþluk koyarsak alacaðýmýz çýktýda da boþluk olacaktýr


    float deneme5 = 5.97; // ;  unutma kod hata verir !!!!
    double deneme6 = 345.9365;


    char Karakter1 = 'P' ;

        char Karakter2 = 'E' ;
        char Karakter3 = 'N' ;
        char Karakter4 = 'E' ;
        char Karakter5 = 'S' ;



    printf(" DENEME5 => %.3f \n",deneme5); // %.3f  demek ondalık ifadenin ondalık kısmından 3 basamak göster demek
    printf(" DENEME1 => %d \n DENEME2 => %d \n DENEME3 => %d \n DENEME4 => %d \n",deneme1,deneme2,deneme3,deneme4);
    printf(" DENEME6 => %.6lf",deneme6);
    printf("\n Karakterim => %c \n ",Karakter1);
    printf("ISMIM => %c%c%c%c ",Karakter2,Karakter3,Karakter4,Karakter5);



    return 0;
}



