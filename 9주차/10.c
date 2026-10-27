#include <stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
scanf("%d",&b);
if(a&&b>4)
printf("WIN");
else if (a||b>4)
printf("DRAW");
else
printf("LOSE");
}
