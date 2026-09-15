#include <stdio.h>

int main(void)
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = b;

    while (temp > 0)
    {
        printf("%d\n", a * (temp % 10));
        temp /= 10;
    }

    printf("%d\n", a * b);

    return 0;
}