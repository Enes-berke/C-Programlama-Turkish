#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int dizi[] = {1,2,3,4,5,6,7,8,9,0};
    int i , x ;

    printf("x degeri giriniz==>\n");
    scanf("%d",&x);


    printf("YENI DIZIMIZ==>\n");
    for(i=0 ; i<10 ; i++)
    {
        if(i==x-1)
        {
            continue ;
        }

        else
        {
            printf("%5.d",dizi[i]);
        }

    }


    return 0;
}
