#include <stdio.h>
#include <stdlib.h>

void calcul(float bir,float iki,char operasyon,float *islemsonucu)

{

    switch(operasyon)
    {
    case '+' :
        {
            *islemsonucu=bir+iki;
            break;
        }
    case '-' :
        {
            *islemsonucu=bir-iki;
            break;
        }
    case '/' :
        {
            *islemsonucu=bir/iki;
            break;
        }
    case '*' :
        {
            *islemsonucu=bir*iki;
        }
    }





}





int main()
{
    float birincisayi,ikincisayi;
    char islem;
    float sonuc;
    printf("Hangi islemi yapmak istiyorsunuz\n");
    scanf("%c",&islem);
    printf("Lutfen 2 adet sayi giriniz\n");
    scanf("%f%f",&birincisayi,&ikincisayi);
    calcul(birincisayi,ikincisayi,islem,&sonuc);
    printf("Ýlk sayimiz %.2f ikinci sayimiz %.2f islemimiz %c ve sonucumuz %.2f",birincisayi,ikincisayi,islem,sonuc);
    return 0;
}
