#include <stdio.h>
#include <stdlib.h>
#define tam 150

int main()
{
    int no,boy,fark,minboy,minno;
    printf("Ogrenci no: \n");
    scanf("%d",&no);
    printf("Ogrenci boy : \n");
    scanf("%d",&boy);

    minno=no;
    fark=abs(boy-tam);

    while(no>0)
    {
        printf("\nOgrenci no: ");
        scanf("%d",&no);
        printf("\nOgrenci boy :");
        scanf("%d",&boy);

        if(abs(boy-tam)<fark)
        {
            fark=abs(boy-tam);
            minno=no;
            minboy=boy;
        }
    }

    printf("\n%d numarali ogrenci %d cm boyuyla %d cm e en yakindir",minno,minboy,tam);
    return 0;
}
