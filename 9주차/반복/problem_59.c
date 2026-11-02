#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j > 0)
                printf(" ");
            printf("%d", i + 1 + j);
        }
        printf("\n");
    }
    return 0;
}
