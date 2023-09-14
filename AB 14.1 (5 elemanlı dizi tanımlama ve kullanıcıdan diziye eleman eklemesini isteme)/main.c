#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[5];
    int i ;
    int x ;


    for(i=1 ; i<=5 ; i++)
    {
        printf("\n Dizinin %d. terimini giriniz==>",i);
        scanf("%d",&x);
        dizi[i] = x ;
    }

            printf("\n\n Dizimiz==>",dizi);


                for(i=1 ; i<=5 ; i++)
                {
                    printf("%3.d",dizi[i]);
                }
}
