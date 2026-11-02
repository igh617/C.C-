#include <stdio.h>

int main()
{
    int n, i, j;
    char c = 'A';
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        for (j = 0; j < i; j++)
            printf("%c", c++);
        printf("\n");
    }
    return 0;
}
