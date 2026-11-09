#include <stdio.h>

int main()
{
    int a[10], i;
    scanf("%d %d", &a[0], &a[1]);
    for (i = 2; i < 10; i++)
        a[i] = (a[i - 2] + a[i - 1]) % 10;
    for (i = 0; i < 10; i++) {
        if (i > 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
