#include <stdio.h>

int main()
{
    int i, j, k = 1;
    char c = 'a';
    for (i = 0; i < 4; i++) {
        for (j = 0; j <= i; j++) {
            if (j > 0)
                printf(" ");
            printf("%c", c++);
        }
        for (j = 0; j < 4 - i; j++)
            printf(" %d", k++);
        printf("\n");
    }
    return 0;
}
