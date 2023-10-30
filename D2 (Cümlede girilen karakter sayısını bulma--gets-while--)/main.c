#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[200];
    int i = 0 ;

    printf("Bir cumle giriniz==>\n");
    gets(cumle);

    while(cumle[i])
    {
        i++;
    }

    printf("Cumlemizde %d tane karakter bulunmaktadir!! ",i);

    return 0;
}
