#include <stdio.h>

int main()
{
    int n, cnt = 0, sum = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 0 || n > 100)
            break;
        cnt++;
        sum += n;
    }
    printf("sum : %d\n", sum);
    if (cnt > 0)
        printf("avg : %.1f\n", (double)sum / cnt + 1e-9);
    else
        printf("avg : 0.0\n");
    return 0;
}
