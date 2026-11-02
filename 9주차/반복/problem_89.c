#include <stdio.h>

int main()
{
    int n, i, j, a = 0, d = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j > 0)
                printf(" ");
            if (i + j < n) {
                printf("%c", 'A' + a % 26);
                a++;
            } else {
                printf("%d", d % 10);
                d++;
            }
        }
        printf("\n");
    }
    return 0;
}
