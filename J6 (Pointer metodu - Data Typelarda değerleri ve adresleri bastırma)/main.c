#include <stdio.h>
#include <stdlib.h>

int main()
{
   //pointer mantığı
    //Farklı data typelar için (char int float double) değişken tanımlayıp değer
    //ataması yapınız hem bu degerleri hemde bellekteki tuttukları adresi console a bastırınız

    char karakter='C';
    int integerdegerim=1;
    float floatsayim=5.43;
    double doublesayim=23132132123123213,1;


    printf("Karakterim = %c, Karakterimin adresi =%d\n",karakter,&karakter);
    printf("Integer degerim = %d, Integerimin adresi =%d\n",integerdegerim,&integerdegerim);
    printf("Float degerim = %f, Floatimin adresi =%d\n",floatsayim,&floatsayim);
    printf("Double degerim = %lf, Doubleimin adresi =%d\n\n\n\n",doublesayim,&doublesayim);
}
