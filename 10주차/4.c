#include <stdio.h>

int main()
{
    int a[10], i;
    for (i = 0; i < 10; i++)
        a[i] = i + 1;
    for (i = 0; i < 10; i++) {
        if (i > 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
