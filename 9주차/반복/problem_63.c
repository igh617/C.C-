#include <stdio.h>

int main()
{
    int a, b, t, i;
    scanf("%d %d", &a, &b);
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    for (i = a; i <= b; i++) {
        if (i > a)
            printf(" ");
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
