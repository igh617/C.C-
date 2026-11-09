#include <stdio.h>

int main()
{
    int cnt[11] = {0}, n, i;
    while (1) {
        scanf("%d", &n);
        if (n < 1 || n > 10)
            break;
        cnt[n]++;
    }
    for (i = 1; i <= 10; i++)
        if (cnt[i] > 0)
            printf("%d : %d\n", i, cnt[i]);
    return 0;
}
