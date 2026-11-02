#include <stdio.h>

int main()
{
    int s;
    while (1) {
        scanf("%d", &s);
        if (s < 0 || s > 100)
            break;
        if (s >= 80)
            printf("Pass\n");
        else
            printf("Fail\n");
    }
    return 0;
}
