#include <stdio.h>

int main()
{
    int i, d;
    for (d = 2; d <= 4; d++) {
        for (i = 1; i <= 5; i++) {
            if (i > 1)
                printf("   ");
            printf("%d * %d = %2d", d, i, d * i);
        }
        printf("\n");
    }
    return 0;
}
