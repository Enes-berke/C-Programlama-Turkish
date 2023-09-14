#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizix[2][3][2] ;
    int i , j , k  ;



    for(i=0 ; i<2 ; i++)
    {
            for(j=0 ; j<3 ; j++)
            {
                    for(k=0 ; k<2 ; k++)
                    {
                    printf("Bir deger giriniz ==> \n");
                    scanf("%d",&dizix[i][j][k]);
                    }
            }

    }


    printf("Girdiginiz Degerler==>\n");

     for(i=0 ; i<2 ; i++)
    {
            for(j=0 ; j<3 ; j++)
            {
                    for(k=0 ; k<2 ; k++)
                    {
                        printf("Dizinin[%d][%d][%d]. terimi ==> %d \n",i,j,k,dizix[i][j][k]);
                    }


            }

    }



    return 0;
}
