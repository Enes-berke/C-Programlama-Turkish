#include <stdio.h>
#include <stdlib.h>

    void deneme()
    {

        int n, i, j, k=1;
    printf("Kac satir yazdirmak istersiniz: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    }

int main()
{
    deneme();
    return 0;
    }









/*#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n, i, j, k=1;
    printf("Ka� sat�r yazd�rmak istersiniz: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}


*/
