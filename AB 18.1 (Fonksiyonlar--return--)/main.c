#include <stdio.h>
#include <stdlib.h>

        int tekmiciftmi(int x)
        {
            if(x%2==0)
            {
            return 1;
            }
            else
            {
            return 0;
            }
        }

int main()

{
    int x;
    int islem;
    printf("Lütfen bir sayý degeri giriniz==>\n");
    scanf("%d",&x);

    islem = tekmiciftmi(x);

    if(islem==1)
    {
        printf("Sayý cift degerdir");
    }

    if(islem==0)
    {
        printf("Sayý tek sayýdýr");
    }



    return 0;
}
