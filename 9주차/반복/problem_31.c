#include <stdio.h>

int main()
{
    int n, cnt = 0, sum = 0;
    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;
        cnt++;
        sum += n;
    }
    printf("%d\n", cnt);
    printf("%d\n", sum);
    if (cnt > 0)
        printf("%.2f\n", (double)sum / cnt + 1e-9);
    return 0;
}
