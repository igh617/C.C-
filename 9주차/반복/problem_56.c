#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", sum / 5.0 + 1e-9);
    return 0;
}
