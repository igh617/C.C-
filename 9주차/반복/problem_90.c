#include <stdio.h>

int main()
{
    int n, i, j, k = 1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < 2 * i; j++)
            printf(" ");
        for (j = 0; j < n - i; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", k++);
        }
        printf("\n");
    }
    return 0;
}
