#include <stdio.h>
#include <stdlib.h>

// US ALMA

        void fakt(int x , int y) //4^5== 4*4*4*4*4 x=4 y=5
        {
            int i , sonuc = 1 ;

            for(i=1 ; i<=y ; i++)
            {
                sonuc = sonuc * x ;
            }
            printf("SONUC ==> %d",sonuc);
        }

int main()
{
    int x;
    int y;

    printf("Bir x ve y degeri giriniz==>\n");
    scanf("%d%d",&x,&y);

    fakt(x,y);

    return 0;
}
