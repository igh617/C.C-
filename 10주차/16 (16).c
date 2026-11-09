#include <stdio.h>

int main()
{
    int cnt[11] = {0}, s, i;
    while (1) {
        scanf("%d", &s);
        if (s == 0)
            break;
        cnt[s / 10]++;
    }
    for (i = 10; i >= 0; i--)
        if (cnt[i] > 0)
            printf("%d : %d\n", i * 10, cnt[i]);
    return 0;
}
