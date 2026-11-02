#include <stdio.h>

int main()
{
    int a, b, t, i, cnt = 0, sum = 0;
    scanf("%d %d", &a, &b);
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    for (i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            cnt++;
            sum += i;
        }
    }
    printf("sum : %d\n", sum);
    if (cnt > 0)
        printf("avg : %.1f\n", (double)sum / cnt + 1e-9);
    else
        printf("avg : 0.0\n");
    return 0;
}
