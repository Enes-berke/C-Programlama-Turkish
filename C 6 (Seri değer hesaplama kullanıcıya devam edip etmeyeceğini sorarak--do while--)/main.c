#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float x,seri;
    char devam;

    do{
         printf("Pozitif sayi giriniz:\n");
    scanf("%d",&n);
    printf("Reel sayi : ");
    scanf("%f %c",&x,&devam);

    seri=0;
    for(i=1;i<=2*n-1;i+=2)
    {
        seri+=i/pow(x,i+1);
    }

    printf("Seri = %f\n",seri);



    }while((devam=='E')||(devam=='e'));
    printf("Hoscakalin");

    return 0;
}
