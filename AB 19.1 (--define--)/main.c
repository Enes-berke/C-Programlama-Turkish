#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define circleArea(r) (PI*r*r)


int main()
{
    float yaricap,alan;
    printf("Lutfen yaricap degerini giriniz\n");
    scanf("%f",&yaricap);
    alan=circleArea(yaricap);
    printf("Alanimiz %.2f birim",alan);

    return 0;
}
