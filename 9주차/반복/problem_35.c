#include <stdio.h>

int main()
{
    int n;
    while (1) {
        printf("1. Input\n");
        printf("2. Output\n");
        printf("3. Delete\n");
        printf("4. Finish\n");
        printf("Enter number:\n");
        scanf("%d", &n);
        if (n == 1)
            printf("You selected Input.\n");
        else if (n == 2)
            printf("You selected Output.\n");
        else if (n == 3)
            printf("You selected Delete.\n");
        else if (n == 4) {
            printf("You selected Finish.\n");
            break;
        } else
            printf("Wrong input.\n");
    }
    return 0;
}
