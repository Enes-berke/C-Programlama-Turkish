#include <stdio.h>
#include <stdlib.h>

int main()
{

    int toplam , i , x ;
    toplam = 0 ;

    printf("Bir x degeri giriniz => \n");
    scanf("%d",&x);

    for(i=0 ; i<=x ; i++){
        toplam = toplam + i ;
    }

    printf("Istenen toplam deger ==> %d ",toplam);



    return 0;
}
