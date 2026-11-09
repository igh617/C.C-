#include <stdio.h>

int main()
{
    int a[20], i;
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < 20; i++)
        a[i] = a[i - 2] + a[i - 1];
    for (i = 0; i < 20; i++) {
        if (i > 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
