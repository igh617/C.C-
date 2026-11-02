#include <stdio.h>

int main()
{
    int m, d;
    scanf("%d", &m);
    switch (m) {
    case 2:
        d = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        d = 30;
        break;
    default:
        d = 31;
        break;
    }
    printf("%d\n", d);
    return 0;
}
