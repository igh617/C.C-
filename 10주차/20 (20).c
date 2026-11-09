#include <stdio.h>

int main()
{
    int a[5][5] = {{0}}, i, j, l, r;
    a[0][0] = 1;
    a[0][2] = 1;
    a[0][4] = 1;
    for (i = 1; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            l = j > 0 ? a[i - 1][j - 1] : 0;
            r = j < 4 ? a[i - 1][j + 1] : 0;
            a[i][j] = l + r;
        }
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
