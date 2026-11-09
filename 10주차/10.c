#include <stdio.h>

int main()
{
    int a[10], i, min = 1001;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] < min)
            min = a[i];
    }
    printf("%d\n", min);
    return 0;
}
