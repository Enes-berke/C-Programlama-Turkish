#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    do
    {
        printf("Bir pozitif sayi giriniz");
        scanf("%f",&x);
        if(x<0)
        {
            printf("Lutfen pozitif bir sayi giriniz\n");
        }
        if(x<0)continue;
        printf("Sayimizin karekoku : %f\n",sqrt(x));

    }
    while(x);
    return 0;
}
