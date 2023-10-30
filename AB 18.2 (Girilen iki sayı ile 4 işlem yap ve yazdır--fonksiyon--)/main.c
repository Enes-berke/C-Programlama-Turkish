#include <stdio.h>
#include <stdlib.h>

    void islemler (int x, int y)
    {

    int  sonuc1 , sonuc2 , sonuc3 , sonuc4 ;


    sonuc1 = x + y;
    sonuc2 = x - y;
    sonuc3 = x / y;
    sonuc4 = x * y;

    printf("Ýslemlerin sonucu=\n");
    printf("Sayilarin toplami ==> %d\n",sonuc1);
    printf("Sayilarin farki ==> %d\n",sonuc2);
    printf("Sayilarin bölümü ==> %d\n",sonuc3);
    printf("Sayilarin carpimi ==> %d\n",sonuc4);

    }


int main()
{
    int x,y;
    printf("Bir x ve y degeri giriniz==>\n");
    scanf("%d%d",&x,&y);

    islemler(x,y);


    return 0;
}
