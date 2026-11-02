#include <stdio.h>

int main()
{
    int num = 1, sum = 0;
    while (num <= 10) {
        sum += num;
        num++;
    }
    printf("%d %d\n", sum, num);
    return 0;
}
