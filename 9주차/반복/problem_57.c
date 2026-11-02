#include <stdio.h>

int main()
{
    int n, i, s, sum = 0;
    double avg;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &s);
        sum += s;
    }
    avg = (double)sum / n + 1e-9;
    printf("avg : %.1f\n", avg);
    if (avg >= 80)
        printf("pass\n");
    else
        printf("fail\n");
    return 0;
}
