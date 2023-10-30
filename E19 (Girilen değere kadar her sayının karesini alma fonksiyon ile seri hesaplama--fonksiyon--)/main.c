#include <stdio.h>
#include <stdlib.h>

        void serihesapla()
        {
            int x , i ,toplam;
            printf("Bir x degeri giriniz==>");
            scanf("%d",&x);

            for( i=1 ; i <= x ; i++)
            {
                toplam = toplam + ( i * i );
            }
            printf("Seri hesaplamanin sonucu==>%d",toplam);
        }



int main()
{
    serihesapla();
    return 0;
}
