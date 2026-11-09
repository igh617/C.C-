#include <stdio.h>

int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 5; i++) {
        if (i > 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
