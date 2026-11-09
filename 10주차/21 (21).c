#include <stdio.h>

int main()
{
    int a[4][2], i, j, rs, cs[2] = {0, 0}, total = 0;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 4; i++) {
        rs = 0;
        for (j = 0; j < 2; j++) {
            rs += a[i][j];
            cs[j] += a[i][j];
        }
        total += rs;
        if (i > 0)
            printf(" ");
        printf("%d", rs / 2);
    }
    printf("\n");
    printf("%d %d\n", cs[0] / 4, cs[1] / 4);
    printf("%d\n", total / 8);
    return 0;
}
