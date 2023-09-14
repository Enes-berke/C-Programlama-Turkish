#include <stdio.h>
#include <stdlib.h>

// FÝBONACCÝ DÝZÝSÝ === 0 1 1 2 3 5 8 13

int main()
{
    int x , i ;
    int dizi[200];
    dizi[0]=0;
    dizi[1]=1;

    printf(" Bir x degeri giriniz==>\n");
    scanf("%d",&x);

    printf("%d%4.d",dizi[0],dizi[1]);

    for(i=0 ; i<=x ; i++)
    {
        dizi[i+2] = dizi[i+1] + dizi[i] ;
        printf("%4.d",dizi[i+2]);
    }
    return 0;
}
