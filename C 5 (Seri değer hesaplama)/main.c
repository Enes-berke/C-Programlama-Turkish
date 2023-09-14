#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float x,seri;


    printf("Pozitif sayi giriniz:\n");
    scanf("%d",&n);
    printf("Reel sayi : ");
    scanf("%f",&x);

    for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
    }

    printf("Seri = %f",seri);
    return 0;
}
