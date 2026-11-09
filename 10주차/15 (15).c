#include <stdio.h>

int main()
{
    int cnt[7] = {0}, d, i;
    for (i = 0; i < 10; i++) {
        scanf("%d", &d);
        cnt[d]++;
    }
    for (i = 1; i <= 6; i++)
        printf("%d : %d\n", i, cnt[i]);
    return 0;
}
