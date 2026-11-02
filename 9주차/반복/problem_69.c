#include <stdio.h>

int main()
{
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    for (i = 1; i <= r; i++) {
        for (j = 1; j <= c; j++) {
            if (j > 1)
                printf(" ");
            printf("%d", i * j);
        }
        printf("\n");
    }
    return 0;
}
