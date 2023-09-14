#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kisininyasi ;

    printf("Lutfen yasinizi giriniz => \n");
    scanf("%d",&kisininyasi);

    if(kisininyasi>18)
    {
     printf("Kisi oy kullanabilecek yastadir.");
    }

    else
    {
    printf("Kisi oy kullanamaz.");
    }


    return 0;
}
