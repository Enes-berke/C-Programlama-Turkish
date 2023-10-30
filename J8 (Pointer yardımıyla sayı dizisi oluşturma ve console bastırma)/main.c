#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    //Kullanýcýya kaç elemanlý bir sayý dizisi oluþturmak istediðini sorun
    //Pointer kullanarak elemanlarý tek tek alýn ve console a bastýrýn

    int arr[100];
    int N;
    int *ptr;
    ptr=arr;




    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    for(int i=0;i<N;i++)
    {
        scanf("%d",ptr+i);
        /*printf("Lutfen elemanlari giriniz\n");  ikisi de ayný sonucu veriyor
        for(int i=0;i<N;i++)
        {
        scanf("%d",ptr);
        ptr++;
        }*/
    }
    ptr=arr; // ptr tekrardan arr dizisinin ilk elemanýna döndürdük
             // bu ifadeyi yazmadan döngü baþlasýydý eðer yukarýya ptr adresi arttý
             // aþaðýdaki döngüde adres artmaya devam edecek sonuçta adres diziden daha da büyük hale gelecek
             // sonuç olarak adreste olmayan diziyi bastýrmaya çalýþmýþ olacaðýz => hata verir ve adresi çýktý verir

    printf("Degerlerim:\n");
    for(int i=0;i<N;i++)
    {
        printf("%d ",*ptr); // adresi bastýrýyoruz bu sebeple *ptr ifadesini kullandýk
        ptr++;
    }

    return 0;







}
