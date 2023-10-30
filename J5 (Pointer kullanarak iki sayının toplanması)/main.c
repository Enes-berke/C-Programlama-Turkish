#include <stdio.h>
#include <stdlib.h>



int main()
{

     //Pointer kullanarak iki sayýyý toplayýnýz

    int sayi11,sayi12,toplam;
    int *ptr11,*ptr12;

    printf("%d\n%d",&sayi11,&sayi12);
    ptr11=&sayi11;
    ptr12=&sayi12;

    printf("\nLutfen 2 adet sayi giriniz\n");
    scanf("%d%d",ptr11,ptr12);

    toplam = *ptr11 + *ptr12;
    printf("Toplam : %d",toplam);




    return 0;
}
