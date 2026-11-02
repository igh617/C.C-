#include <stdio.h>

int main()
{
    double w, h;
    char c;
    while (1) {
        scanf("%lf %lf", &w, &h);
        printf("Triangle area = %.1f\n", w * h / 2);
        printf("Continue? ");
        scanf(" %c", &c);
        if (c != 'Y' && c != 'y')
            break;
    }
    return 0;
}
