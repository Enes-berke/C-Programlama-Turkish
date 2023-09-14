#include <stdio.h>
#include <stdlib.h>
#include <string.h>

        elemanekle()
        {
              int dizi[]= {1,2,3,4,5,56,888,87,37,57};
            int x , y , i = 0 ;


            printf(" Eleman eklenecek degeri giriniz==>");
            scanf("%d",&x);

            printf("\n\n Eleman hangi elemandan sonrasina eklensin==>");
            scanf("%d",&y);

            while(i < 10)
            {
                if(i==y)
                {
                printf("%7.d",x);
                }
                printf("%5.d",dizi[i]);
                i++;

            }

        }









int main()
{
    elemanekle();
    return 0;
}
