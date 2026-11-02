#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 15; i++) {
        if (i > 1)
            printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
