#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1)
        printf("ADD\n");
    else if (n == 2)
        printf("EDIT\n");
    else if (n == 3)
        printf("DEL\n");
    return 0;
}
