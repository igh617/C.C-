#include <stdio.h>

int main()
{
    int i, d;
    for (i = 1; i <= 9; i++) {
        for (d = 2; d <= 4; d++) {
            if (d > 2)
                printf("   ");
            printf("%d * %d = %2d", d, i, d * i);
        }
        printf("\n");
    }
    return 0;
}
