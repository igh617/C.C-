#include <stdio.h>

int main()
{
    int score[7] = {0, 856, 795, 831, 800, 782, 750};
    int a, b, s;
    scanf("%d %d", &a, &b);
    s = score[a] + score[b];
    printf("%d.%d\n", s / 10, s % 10);
    return 0;
}
