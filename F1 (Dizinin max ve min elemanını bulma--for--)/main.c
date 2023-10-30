#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[]={11,22,33,4,5,6,7,8,9,12,34,67,99,125,149,3};
    int dizimax = dizi[0];
    int dizimin = dizi[0];
    int i ;


    for(i=0 ; i<15 ; i++ )
    {
        if(dizi[i+1]>dizi[i])
        {
            dizimax = dizi[i+1] ;
            dizi[i+1] = dizi[i] ;
            dizi[i] = dizimax;
        }
    }

    printf("Dizinin max terimi==>%d",dizimax);



    for(i=0 ; i<15 ; i++ )
    {
        if(dizi[i+1]<dizi[i])
        {
            dizimin = dizi[i+1] ;
            dizi[i+1] = dizi[i] ;
            dizi[i] = dizimin;
        }
    }

    printf("\nDizinin min terimi==>%d",dizimin);

    return 0;
}
