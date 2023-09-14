#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char can[100][100]={"bir","iki","uc","dort","bes"};

    printf("Dizimin dorduncu elemani %s\n",can[3]);
    printf("Dizimin dorduncu elemaninin ucuncu karakteri %c",can[3][2]);


    return 0;
}
