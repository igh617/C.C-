#include <stdio.h>

int main()
{
    int a[100], n = 0, i;
    while (n < 100) {
        scanf("%d", &a[n]);
        if (a[n] == 0)
            break;
        n++;
    }
    printf("%d\n", n);
    for (i = 0; i < n; i++) {
        if (i > 0)
            printf(" ");
        if (a[i] % 2 == 1)
            printf("%d", a[i] * 2);
        else
            printf("%d", a[i] / 2);
    }
    printf("\n");
    return 0;
}
