#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;

    for(i=0 ; i<10 ; i++)
    {
        if( i == 7)
        {
            continue ;  // 7 yi atla anlamýna geliyor. Döngü devam eder koþul istenilen deðer atlanmýþ olur.
        }

        printf("%d\n",i);
    }
}
