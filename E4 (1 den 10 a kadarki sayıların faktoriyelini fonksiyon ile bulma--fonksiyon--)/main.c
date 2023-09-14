#include <stdio.h>
#include <stdlib.h>

// FONK YARDIMI ÝLE FAKT BULMA 1 den 10 a kadar

        void fakt(int x)
        {
            int i , k , sonuc ;

                for(k=1;k<=10;k++)
                {
                    sonuc = 1;
                        for(i=1 ; i<=k ; i++)
                        {
                        sonuc = sonuc * i ;
                        }
                        printf("%d Sayinin faktöriyeli ==> %d\n",k,sonuc);
                }

        }

int main()
{
    int x;
    fakt(x);

    return 0;
}
