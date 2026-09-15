#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Even.") : printf("Odd.");
    return 0;
}