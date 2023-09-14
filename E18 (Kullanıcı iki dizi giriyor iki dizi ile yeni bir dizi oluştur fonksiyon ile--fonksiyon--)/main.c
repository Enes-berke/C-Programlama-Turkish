#include <stdio.h>
#include <stdlib.h>

// iki dizi giriniz ve girilen iki diziyi birleþtiriniz


        void diziolustur()
        {
        int x , y ;
        int dizia[111];
        int dizib[111];
        int diziab[999];

        printf("1. dizi kac elemanli olsun==>");
        scanf("%d",&x);


        printf("Lutfen dizinin ilk %d elemanini girin:\n",x);
        for (int i = 0; i < x ; i++)
        {
        printf("dizi[%d]: ", i);
        scanf("%d", &dizia[i]);
        }


        printf("\n2. dizi kac elemanli olsun==>");
        scanf("%d",&y);

        printf("Lutfen dizinin ilk %d elemanini girin:\n",y);
        for (int i = 0; i < y; i++)
        {
        printf("dizi[%d]: ", i);
        scanf("%d", &dizib[i]);
        }


        printf("\n\nYENI DIZIMIZ==>\n");


        for(int k=0 ; k<x ; k++)
        {
            diziab[k] = dizia[k];
            printf("%5.d",diziab[k]);
        }

        for(int j=0 ; j<y ; j++)
        {
            diziab[j+x] = dizib[j];
            printf("%5.d",diziab[j+x]);
        }

}



int main()
{
    diziolustur();
    return 0;
}


