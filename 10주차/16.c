#include <stdio.h>

int main()
{
    int a[5], i;
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("%d\n", a[0] + a[2] + a[4]);
    return 0;
}
