#include <stdio.h>

int main()
{
    int n, i, s, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &s);
        sum += s;
    }
    printf("%.2f\n", (double)sum / n + 1e-9);
    return 0;
}
