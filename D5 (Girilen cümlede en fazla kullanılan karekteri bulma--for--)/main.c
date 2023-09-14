#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    printf("Lutfen bir kelime girin: ");
    scanf("%s", kelime);

    int karakter_sayisi[26] = {0};
    int uzunluk = strlen(kelime);
    int i, enfazla;
    for (i = 0; i < uzunluk; i++) {
        if (kelime[i] >= 'a' && kelime[i] <= 'z') {
            karakter_sayisi[kelime[i]-'a']++;
        }
        else if (kelime[i] >= 'A' && kelime[i] <= 'Z') {
            karakter_sayisi[kelime[i]-'A']++;
        }
    }

    enfazla = 0 ;
    for (i = 1; i < 26; i++) {
        if (karakter_sayisi[i] > karakter_sayisi[enfazla]) {
            enfazla = i;
        }
    }

    printf("Kelimenin en sik kullanilan harfi: '%c'\n", 'a'+enfazla);

    return 0;
}
