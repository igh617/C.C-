#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) {
        if (i > 2)
            printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
