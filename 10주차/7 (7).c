#include <stdio.h>

int main()
{
    int a[5] = {95, 75, 85, 100, 50};
    int i, j, t;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < 5; i++) {
        if (i > 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
