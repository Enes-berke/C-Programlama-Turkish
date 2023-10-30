#include <stdio.h>
#include <stdlib.h>

int main()
{
    char deneme1 [] = {'e','n','e','s','\0'}; // Bu ifade tarzi kullanilacaksa " \0 " kismi mutlaka yazilmalidir.
    char deneme2 [] = "enes berke";

    char deneme3[100] ; // [100]==> Yazmamizin sebebi max 100 karakter
                        // kapasiteli olacak anlamina gelmektedir.!! Kapasiteyi belirlemis oluyoruz.

    printf("%s\n",deneme1);
    printf("%s\n",deneme2);

    printf("Bir karakter dizisi giriniz ==> \n");
    fgets(deneme3,100,stdin); // " deneme3 " ifadesi tanimaldigimiz dizi anlamina gelmektedir.
                              //Tanimladigimiz dizinin adı ne ise ilk kisma tanimlanan kelime yazilmalidir.
                              // " 100 " ifadesi dizinin max limitini belitmektedir.
                              //" stdin " ise  klavyeden karakter girişinin de okunabilmesi anlamine gelmektedir.
                              //

    printf("%s",deneme3);




    return 0;
}
