#include <stdio.h>

int main()
{
    int h, w, r;
    scanf("%d %d", &h, &w);
    r = w + 100 - h;
    printf("%d\n", r);
    if (r > 0) {
        printf("Obesity\n");
        printf("Need control\n");
    }
    return 0;
}
