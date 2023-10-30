#include <stdio.h>
#include <stdlib.h>

    int usalma(int x, int y){ // 5^3> 5*5*5
    int sonuc = 1 ;
    int i;

    for(i=0 ; i<y ; i++)
    {
        sonuc = sonuc * x ;
    }

    return sonuc;


    }




int main()
{

    int sonuc1 , x , y ;

    printf("Bir x ve y degeri giriniz==>\n");
    scanf("%d%d",&x,&y);

    sonuc1 = usalma(x,y);
    printf("Ýslemin sonucu==>%d",sonuc1);

    return 0;
}
