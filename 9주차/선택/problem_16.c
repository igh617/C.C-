#include <stdio.h>

int main()
{
    double g;
    scanf("%lf", &g);
    if (g >= 4.0)
        printf("scholarship\n");
    else if (g >= 3.0)
        printf("next semester\n");
    else if (g >= 2.0)
        printf("seasonal semester\n");
    else
        printf("retake\n");
    return 0;
}
