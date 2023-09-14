#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , k , sonuc ;
    int x , y ;
    printf("x ve y degeri giriniz==>\n");
    scanf("%d%d",&x,&y);

    for(i=1 ; i<=x ; i++)
    {
        // printf("%5.d",i);

        for(k=1 ; k<=y ; k++)
        {
            sonuc = i * k ;
            printf("%5.d",sonuc);
        }
        printf("\n");
    }


    return 0;
}
