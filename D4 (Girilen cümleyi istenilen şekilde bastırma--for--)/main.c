#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char krktr[20];
    int i , j ;

    printf("Bir kelime giriniz==>\n");
    scanf("%s",&krktr);

    for(i=0 ; i<strlen(krktr) ; i++)
    {
        for(j=0 ; j<=i ; j++)
        {
            printf("%c",krktr[j]);
        }
            printf("\n");

    }





    return 0;
}
