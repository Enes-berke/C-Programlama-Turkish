#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// random dizi oluþturma

#define uzunluk x

int main() {
    int x;
    printf("degergir==>\n");
    scanf("%d",&x);

    int i, dizi[uzunluk];

    // srand(time(NULL)); // Rastgele sayý üretimi için seed deðeri atanýyor

    printf("Dizi elemanlari: ");
    for (i = 0; i < uzunluk; i++) {
        dizi[i] = rand() % 100; // Rastgele sayý, 0 ile 99 arasýnda olacak þekilde üretiliyor
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
