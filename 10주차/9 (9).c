#include <stdio.h>

int main()
{
    int a[4][3] = {{3, 5, 4}, {2, 6, 7}, {8, 10, 1}, {5, 3, 15}};
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
