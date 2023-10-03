#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    char opr;

    printf("Bir operator giriniz==>");
    scanf("%c",&opr);

    printf("\n Bir a degeri giriniz==>");
    scanf("%d",&a);

    printf("\n Bir b degeri giriniz==>");
    scanf("%d",&b);

    switch(opr) // switch yazdiktan sonra parantez icini unutma !!!
    {
        case '+' : printf("\n a+b==>%d",a+b);
        break;

        case '-' : printf("\n a-b==>%d",a-b);
        break;

        case '*' : printf("\n a*b==>%d",a*b);
        break;

        case '/' : printf("\n a/b==>%d",a/b);
        break;

        case '%' : printf("\n a%b==>%d",a%b);
        break;
    }
}


