#include <stdio.h>

int main()
{
    int a[4][3], i, j, rs, total = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 4; i++) {
        rs = 0;
        for (j = 0; j < 3; j++)
            rs += a[i][j];
        printf("%d\n", rs);
        total += rs;
    }
    printf("%d\n", total);
    return 0;
}
