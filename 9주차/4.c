#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("몸무게를 입력하세요");
    scanf("%d", &a);
    printf("키를 입력하세요");
    scanf("%d", &b);
    c = a + 100 - b;
    if (a + 100 - b > 0)
        printf("Obesity \n Need control");
}
