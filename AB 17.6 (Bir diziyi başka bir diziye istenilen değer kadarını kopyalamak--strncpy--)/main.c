#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char can[]="Benim adim Can BOZ";
    char canan[100];



    strncpy(canan,can,10);  // yerleri önemli canan = can gibi düþünülebilir
                            // n kadar karakter kopyalanýr

    printf("%s",canan);
    return 0;
}
