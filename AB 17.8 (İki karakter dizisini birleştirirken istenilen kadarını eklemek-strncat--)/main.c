#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char can[100];
    char canan[100];
    int a;

    printf("Lutfen bir yazi giriniz\n");
    scanf("%s",&can);

    printf("Lutfen ikinci yaziyi giriniz\n");
    scanf("%s",&canan);

    printf("Birinci yazinin sonuna kac karakter eklemek istersin\n");
    scanf("%d",&a);

    printf("Birlestirmeden once %s\n",can);

    printf("Birlestirmeden sonra %s\n",strncat(can,canan,a));

    return 0;
}
