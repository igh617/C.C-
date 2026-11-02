#include <stdio.h>

int main()
{
    char c;
    scanf(" %c", &c);
    if (c == 'A')
        printf("Excellent\n");
    else if (c == 'B')
        printf("Good\n");
    else if (c == 'C')
        printf("Usually\n");
    else
        printf("error\n");
    return 0;
}
