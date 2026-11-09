#include <stdio.h>

int main()
{
    char a[26];
    int i;
    for (i = 0; i < 26; i++)
        a[i] = 'A' + i;
    for (i = 25; i >= 0; i--) {
        if (i < 25)
            printf(" ");
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
