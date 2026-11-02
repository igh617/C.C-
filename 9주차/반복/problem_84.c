#include <stdio.h>

int main()
{
    int n, i, j, k = 1;
    char c = 'A';
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", k++);
        }
        for (j = 0; j <= i; j++)
            printf(" %c", c++);
        printf("\n");
    }
    return 0;
}
