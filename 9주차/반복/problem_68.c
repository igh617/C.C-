#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        if (i > 1)
            printf(" ");
        printf("%d", n * i);
    }
    printf("\n");
    return 0;
}
