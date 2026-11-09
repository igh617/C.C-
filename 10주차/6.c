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
    for (i = n - 1; i >= 0; i--) {
        if (i < n - 1)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
