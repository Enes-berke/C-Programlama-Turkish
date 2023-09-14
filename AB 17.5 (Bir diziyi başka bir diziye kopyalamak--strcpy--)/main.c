#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char ilkdizimiz[] = "ENES BERKE";
    char ikincidizimiz [100];



    strcpy(ikincidizimiz,ilkdizimiz);  // yerleri önemli ikincidizimiz = ilkdizimiz gibi düþünülebilir

    printf("%s",ikincidizimiz);

    return 0;
}
