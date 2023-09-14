#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[200];
    int i = 0 , sayac=1;

    printf("Bir cümle giriniz==>\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]== 32) // 32 dememizdeki amaç cümledeki boþluklarý sayý kelime sayýsýný bulmak space=32 anlamýna gelir
        {
            sayac = sayac + 1;
        }
        i++;
    }

    printf("Cumlemizde %d kelime var!! ",sayac);

    return 0;
}
