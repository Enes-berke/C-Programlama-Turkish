#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z ;

    printf("Bir x degeri giriniz =>\n");
    scanf("%d",&x);

    printf("Bir y degeri giriniz =>\n");
    scanf("%d",&y);

    printf("Bir z degeri giriniz =>\n");
    scanf("%d",&z);

    if (x>y && x>z)
    {
        printf("En buyuk deger x dir.");
    }


    else if (y>z && y>x)
    {
        printf("En buyuk deger y dir.");
    }

    else if (z>x && z>y)
    {
        printf("En buyuk deger z dir.");
    }

    else
    {
        printf(" 3 Sayi birbirine esittir.");
    }

    return 0;
}
