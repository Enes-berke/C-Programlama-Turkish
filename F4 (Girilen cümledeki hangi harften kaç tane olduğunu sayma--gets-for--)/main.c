#include <stdio.h>
#include <string.h>

int main() {
  char metin[100];
  int count[26] = {0};
  int i;

  printf("Bir metin giriniz: ");
  fgets(metin, 100, stdin);

  for (i = 0; i < strlen(metin); i++) {
    if (metin[i] >= 'a' && metin[i] <= 'z') {
      count[metin[i] - 'a']++;
    }
    else if (metin[i] >= 'A' && metin[i] <= 'Z') {
      count[metin[i] - 'A']++;
    }
  }

  printf("Letter frequency:\n");
  for (i = 0; i < 26; i++) {
    printf("%c: %d\n", i + 'a', count[i]);
  }

  return 0;
}
