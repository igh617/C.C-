#include <stdio.h>
int main()
{
    int a,b,c;
    int cnt[10 ] ={0};
    int result;
printf("100~1000까지의 자연수를 입력하시오");

printf("첫번째 수를 입력하세요:");
scanf("%d",&a);
printf("두번째 수를 입력하세요:");
scanf("%d",&b);
printf("세번째 수를 입력하세요:");
scanf("%d",&c);

result = a*b*c ;
while (result > 0)
{
   cnt[result%10]++;
   result /= 10;
}
for(int i =0;i<10;i++){
    printf("%d\n",cnt[i]);
}
return 0;

}
