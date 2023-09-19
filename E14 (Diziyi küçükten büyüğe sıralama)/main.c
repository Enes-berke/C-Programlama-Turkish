#include <stdio.h>

void siralama()
{
    int i, j, a;
    int dizi[] = {12, 32, 56, 89, 70, 90, 123, 54, 56, 873, 1};

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10 - i; j++)
        {
            if (dizi[j] > dizi[j + 1])
            {
                a = dizi[j + 1];
                dizi[j + 1] = dizi[j];
                dizi[j] = a;
            }
        }
    }

    for (i = 0; i < 11; i++)
    {
        printf("%5d", dizi[i]);
    }
}

int main()
{
    siralama();
    return 0;
}
