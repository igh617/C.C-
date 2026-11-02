#include <stdio.h>

int main()
{
    int n, max = 0, min = 101;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        if (n < 1 || n > 100)
            continue;
        if (n > max)
            max = n;
        if (n < min)
            min = n;
    }
    printf("max : %d\n", max);
    printf("min : %d\n", min);
    return 0;
}
