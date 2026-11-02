#include <stdio.h>

int main()
{
    char c;
    int i;
    scanf(" %c", &c);
    for (i = 0; i < 20; i++)
        printf("%c", c);
    printf("\n");
    return 0;
}
