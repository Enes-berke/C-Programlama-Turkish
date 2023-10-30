#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumlem[100];
    char *p1,*p2;
    int kontrol;



    printf("Lutfen maksimum 100 karakterli bir cumle giriniz\n");
    gets(cumlem);

    for(p2=cumlem;*p2;p2++);

    p2--;


    kontrol=1;
    for(p1=cumlem;kontrol && p1<p2;p1++,p2--)
    {
        if(*p1 != *p2)
        {
            kontrol=0;
        }
    }

    if(kontrol)
    {
        printf("Girilen %s bir palendomdur",cumlem);
    }
    else
    {
        printf("Girilen %s bir palendrom degildir",cumlem);
    }
    return 0;
}
