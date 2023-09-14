#include <stdio.h>
#include <stdlib.h>

        void toplama(int x , int y)
        {

            int sonuc;
            sonuc = x + y;
            printf("Sonuc==>%d",sonuc);
        }



int main()
{
    int x, y;
    printf("Bir x ve y degeri giriniz==>\n");
    scanf("%d%d",&x,&y);
    toplama(x,y);




    return 0;
}
