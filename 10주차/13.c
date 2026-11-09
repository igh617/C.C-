#include <stdio.h>

int main()
{
    int a[10], i, sum = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("sum = %d\n", sum);
    printf("avg = %.1f\n", sum / 10.0 + 1e-9);
    return 0;
}
