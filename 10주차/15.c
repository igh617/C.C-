#include <stdio.h>

int main()
{
    char a[10];
    int i;
    for (i = 0; i < 10; i++)
        scanf(" %c", &a[i]);
    for (i = 9; i >= 0; i--) {
        if (i < 9)
            printf(" ");
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
