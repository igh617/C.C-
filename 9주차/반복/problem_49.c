#include <stdio.h>

int main()
{
    int i;
    for (i = 10; i <= 20; i++) {
        if (i > 10)
            printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
