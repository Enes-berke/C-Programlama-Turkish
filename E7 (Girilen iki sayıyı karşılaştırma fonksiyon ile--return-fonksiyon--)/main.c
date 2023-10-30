#include <stdio.h>
#include <stdlib.h>

        int hangisi(int x , int y)
        {

            if(x<y)
            {
           return 1;
            }

            else if(x>y)
            {
            return 0;
            }

            else
            {
            return 2;
            }
        }



int main()
{
    int x , y;
    int deneme;

            printf("x degeri gir==>  ");
            scanf("%d",&x);

            printf("\ny degeri gir==>  ");
            scanf("%d",&y);

            deneme = hangisi(x,y);

            if(deneme==1)
            {
            printf("y degeri daha buyuktur!!!");
            }
            else if(deneme==0)
            {
            printf("x degeri daha buyuktur!!!");
            }
            else
            {
             printf("iki deger esittir!!!");
            }


    return 0;
}
