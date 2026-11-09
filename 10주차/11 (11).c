#include <stdio.h>

int main()
{
    int a[3][3], i, j, rs, cs[3] = {0, 0, 0}, total = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++) {
        rs = 0;
        for (j = 0; j < 3; j++) {
            printf("%d ", a[i][j]);
            rs += a[i][j];
            cs[j] += a[i][j];
        }
        printf("%d\n", rs);
        total += rs;
    }
    printf("%d %d %d %d\n", cs[0], cs[1], cs[2], total);
    return 0;
}
