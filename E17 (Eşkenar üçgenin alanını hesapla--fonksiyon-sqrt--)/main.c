#include <stdio.h>
#include <stdlib.h>
// eþkenar üçgenin alaný

int main()
{
    float a ;
    float alan;
    float kok;
    printf("Eskenar ucgenin bir kenarýný giriniz==>");
    scanf("%f",&a);

    kok = sqrt(3);

    alan = (a * a * kok ) / 4;

    printf("%f",alan);
    return 0;
}
