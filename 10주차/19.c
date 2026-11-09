#include <stdio.h>

int main()
{
    int a[100], n = 0, i, max, min;
    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0)
            break;
        n++;
    }
    max = a[0];
    min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    printf("%d\n", max + min);
    return 0;
}
