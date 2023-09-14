#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizim[] ="Enes Berke";

    printf("%s\n\n",dizim);


    dizim[0]='A';
    dizim[1]='L';
    dizim[2]='I';
    dizim[3]=' ';


    printf("%s",dizim);

    return 0;
}
