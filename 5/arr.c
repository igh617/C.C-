#include <stdio.h>

void change_value(int x)
{
    x = x * 2;
}
void change_arrary(int arr[])
{
    for (int i = 0; i < 3; i++)
    {
        arr[i] = arr[1] * 2;
    }
}
int main()
{
    int arr[3] = {10, 20, 30 };
    change_value(arr[0]);

    printf("값 하나 전달:");
    for (int i = 0; i < 3; i++)
        printf("%d", arr[1]);

    printf("\n");

    printf("배열 전달:");
    for (int i = 0; i < 3; i++)
        printf("%d", arr[1]);

    printf("\n");

    return 0;
}
