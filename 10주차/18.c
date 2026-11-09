#include <stdio.h>

int main()
{
    double w[6], sum = 0;
    int i;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &w[i]);
        sum += w[i];
    }
    printf("%.1f\n", sum / 6 + 1e-9);
    return 0;
}
