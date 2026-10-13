#include <stdio.h>
#define MAX_STUDENTS 50

void bS(int*arr,int size);


void bS(int*arr,int size){
    for(int i = 0;i < size -1; i++){
        for(int j = 0; j<size -i-1;j++ ){
            if(*(arr + j)>*(arr + j+1)){
                int temp = *(arr + j);
                *(arr + j) =*(arr + j + 1);
                *(arr + j + 1)= temp;
            }
        }
    }
}
int main()
{
int ns;
printf("학생 수 입력.(최대 50):",MAX_STUDENTS);
scanf("%d",&ns);

if(ns>MAX_STUDENTS){
    printf("학생 수 초과.\n");
    return 1;
}
int *gp;
int grades[MAX_STUDENTS];
gp = grades;

for(int i = 0 ; i<ns;i++){
    printf("%d번 학생의 최종 성적을 입력하세요.:",i+1);
    scanf("%d",gp + i);
}

bS(gp,ns);

printf("\n정렬된 성적:");
for(int i  = 0;i<ns;i++){
    printf("%d",*(gp + i));
}
printf("\n\n최고 성적 : %d\n",*(gp  +ns -1));
printf("최하 성적 : %d\n",gp);

return 0;
}
