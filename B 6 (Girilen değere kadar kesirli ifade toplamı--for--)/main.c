#include <stdio.h>
#include <stdlib.h>

int main()
{
            int i , n;
            float sonuc;

            printf("Bir n degeri giriniz ==> \n");
            scanf("%d",&n);

            for(i=1 ; i<=n ; i++)
            {
                sonuc += (float)1/i ;
            }

            printf("Sonuc ==> %f",sonuc);







    return 0;
}
