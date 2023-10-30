#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
    printf("Bir deger giriniz ==> \n");
    scanf("%d",&i);

    while(i>0)
    {
        printf("%3.d",i);
        i--;
    }
    return 0;
}
