#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[200];
    int i = 0 ;

    printf("Bir cumle giriniz==>\n");
    gets(cumle);


        for(i=0;cumle[i];i++)
        {
            printf("%c\n",cumle[i]);
        }



    return 0;
}
