#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x  ;

    printf("Bir x degeri giriniz =>\n");
    scanf("%d",&x);


    if (x%2==0)
    {
        printf("x degeri cift bir degerdir.");
    }

    else
    {
        printf("x degeri tek bir degerdir.");
    }

    return 0;
}

