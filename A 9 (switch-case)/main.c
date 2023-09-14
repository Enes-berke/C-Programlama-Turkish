#include <stdio.h>
#include <stdlib.h>

int main()
{
 int day ;
  printf("0 ile 8 arasinda bir deger giriniz==>");
  scanf("%d",&day);

    switch(day)     // case ifadesinden sonra
    {
        case 1:printf("Pazartesi");
        break;
        case 2:printf("Salý");
        break;
        case 3:printf("Çarþamba");
        break;
        case 4:printf("Persembe");
        break;
        case 5:printf("Cuma");
        break;
        case 6:printf("Cumartesi");
        break;
        case 7:printf("Pazar");
        break;
        default :printf("Gecersiz gün");
        break;
    }


    /*
    int day=9;
    if(day==1)
    {
        printf("Pazartesi");
    }
    else if(day==2)
    {
        printf("Sali");
    }
    else if(day==3)
    {
        printf("Çarþamba");
    }
    else if(day==4)
    {
        printf("Persembe");
    }
    else if(day==5)
    {
        printf("Cuma");
    }
    else if(day==6)
    {
        printf("Cumartesi");
    }
    else if(day==7)
    {
        printf("Pazar");
    }
    else
    {
        printf("Boyle bir gun yok");
    }
    return 0;   */
}
