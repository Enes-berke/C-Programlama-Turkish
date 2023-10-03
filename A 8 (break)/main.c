#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;

    for(i=0 ; i<10 ; i++)
    {
        if( i == 4)
        {
            break ; // koþul saðlandýðý zaman döngü sonlanýr.
        }

        printf("%d\n",i);
    }
}
