        #include <stdio.h>
#include <stdlib.h>

int main()
{
    int i ;
        int a[12] = {2,3,4,5,6,7,8,998,68,45,24,56,678};
        int max = a[0];
        int min = a[0];

        for(i=0 ; i<12 ; i++){

            if(min>a[i])
            {
                min = a[i];

            }

            if(max<a[i])
            {
                max = a[i];

            }


        }

        printf("Dizinin max terimi ==> %d \n",max);
        printf("Dizinin min terimi ==> %d \n",min);
}
