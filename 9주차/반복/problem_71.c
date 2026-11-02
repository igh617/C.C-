#include <stdio.h>

int main()
{
    int a, b, step, d, i;
    scanf("%d %d", &a, &b);
    step = a <= b ? 1 : -1;
    for (i = 1; i <= 9; i++) {
        for (d = a; ; d += step) {
            if (d != a)
                printf("   ");
            printf("%d * %d = %2d", d, i, d * i);
            if (d == b)
                break;
        }
        printf("\n");
    }
    return 0;
}
