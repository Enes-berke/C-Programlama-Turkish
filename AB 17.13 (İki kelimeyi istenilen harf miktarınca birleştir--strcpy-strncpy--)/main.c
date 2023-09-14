#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() //bonsoire yazdýr
{

    char dizi1[] = "Bonne";
    char dizi2[] = "Soiree";
    char dizi3[50];


    strcpy(dizi3,dizi1);
    strncpy(dizi3+3,dizi2,5);

    printf("%s",dizi3);



        return 0;
}
