#include <stdio.h>

int main()
{
    int a[100], n = 0, i, cnt = 0, sum = 0;
    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0)
            break;
        n++;
    }
    for (i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            cnt++;
            sum += a[i];
        }
    }
    printf("Multiples of 5 : %d\n", cnt);
    printf("sum : %d\n", sum);
    if (cnt > 0)
        printf("avg : %.1f\n", (double)sum / cnt + 1e-9);
    else
        printf("avg : 0.0\n");
    return 0;
}
