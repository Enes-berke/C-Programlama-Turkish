#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //strrev()
    char can[100];

    printf("Lutfen bir text giriniz\n");
    scanf("%s",&can);

    printf("Girdiginiz ifade %s\n",can);
    printf("Girdiginiz ifadenin ters cevrilmis hali %s\n",strrev(can));


    return 0;
}
