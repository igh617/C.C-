#include <stdio.h>
int main()
{
int outcom;

printf("점수를 입력하세요(0-100):");
scanf("%d",&outcom);

switch(outcom/10){
case 10:
case 9:
printf("A학점입니다.");
break;
case 8:
printf("B학점입니다.");
break;
case 7:
printf("C학점입니다.");
break;
case 6:
printf("D학점입니다.");
break;
default:
printf("F학점입니다.");
}  
return 0;
}
