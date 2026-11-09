#include <stdio.h>

int main()
{
    int score[10], i, sum = 0, osum = 0;
    for (i = 0; i < 10; i++)
        scanf("%d", &score[i]);
    for (i = 0; i < 10; i++) {
        if (i % 2 == 1)
            sum += score[i];
        else
            osum += score[i];
    }
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", osum / 5.0 + 1e-9);
    return 0;
}
