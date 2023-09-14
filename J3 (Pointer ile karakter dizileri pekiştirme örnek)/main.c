#include <stdio.h>
#include <stdlib.h>

int main()
{
    char isim[20]={'b','o','n','j','o','u','r','\0'};
    char *can;

    can=isim;

    printf("%c",*(can+4));


    return 0;
}
