#include <stdio.h>

int main()
{
    int a[200], n, i = 2;
    scanf("%d", &n);
    a[0] = 100;
    a[1] = n;
    while (a[i - 1] >= 0) {
        a[i] = a[i - 2] - a[i - 1];
        i++;
    }
    for (n = 0; n < i; n++) {
        if (n > 0)
            printf(" ");
        printf("%d", a[n]);
    }
    printf("\n");
    return 0;
}
