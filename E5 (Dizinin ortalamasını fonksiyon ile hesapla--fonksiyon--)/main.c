#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 // dizinin ortalamasýný hesapla

        void ortalama()
        {
            int dizi[]= {1,2,3,4,5,56,888,87,37,57,568,79,57,246,432,57555};
            int i , toplam = 0 ;
            int ortalamadeger;

            for(i=0 ; i<16 ; i++)
            {
                toplam = toplam + dizi[i] ;
            }

            printf("Dizinin toplamý==>%d",toplam);


            ortalamadeger = toplam / 16 ;

            printf("\n\nDizinin oratlamasi==>%d",ortalamadeger);

        }





int main()
{

    ortalama();


    return 0;
}
