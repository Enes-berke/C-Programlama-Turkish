#include <stdio.h>
#include <stdlib.h>

        void tekmiciftmi(int x)
        {
            if(x%2==0)
            {
                printf("Sayý cift sayýdýr.");
            }
            else
            {
                printf("Sayý tek sayýdýr.");
            }
        }

int main()

{
    int x;
    printf("Lütfen bir sayý degeri giriniz==>\n");
    scanf("%d",&x);

    tekmiciftmi(x);

    return 0;
}
