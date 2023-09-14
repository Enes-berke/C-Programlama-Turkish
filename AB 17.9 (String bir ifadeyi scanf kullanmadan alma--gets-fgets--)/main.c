#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    printf("Lutfen isminizi giriniz\n");
    //gets(name);
    fgets(name,sizeof(name),stdin);
    printf("%s",name);

    return 0;
}
