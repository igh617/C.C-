#include <stdio.h>

int main()
{
    int a[5][4], i, j, sum;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 4; j++)
            sum += a[i][j];
        printf("%d %.1f\n", sum, sum / 4.0 + 1e-9);
    }
    return 0;
}
