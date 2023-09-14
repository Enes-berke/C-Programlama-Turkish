#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int sonuc;
    char can[15]="abcdef";
    char canan[15]="ABCDEF";

    sonuc=strncmp(can,canan,4);  // kaç terimi kýyaslamak iztiyorsak onu giriyoruz
                                 // 4 ise abcd alýr bunlarý kýyaslar gibi...



    if(sonuc<0)
    {
        printf("Can Canan dan daha kucuktur");
    }
    else if(sonuc >0)
    {
        printf("Can Canan dan daha buyuktur");
    }
    else
    {
        printf("Ikiside birbirine esittir");
    }

   return(0);
}
