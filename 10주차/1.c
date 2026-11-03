#include <stdio.h>
#include <ctype.h>

int main()
{
char ch ='M';
printf("문자: %c\n",ch); //cf안에 문자 출력

printf("알파벳 여부 : %s\n",isalpha(ch)?"예":"아니오"); //ch가 알파벳인지 확인

printf("대문자 여부 : %s\n",isupper(ch)?"예":"아니오"); //ch가 대문자 알파벳인지 확인

printf("소문자 여부 : %s\n",islower(ch)?"예":"아니오"); //ch가 소문자 알파벳인지 확인

printf("숫자 여부 : %s\n",isdigit(ch)?"예":"아니오"); //ch가 숫자인지 확인

printf("알파벳 또는 숫자 여부 : %s\n",isalnum(ch)?"예":"아니오"); // ch가 숫자 또는 알파벳인지 확인

printf("16진수  여부 : %s\n",isxdigit(ch)?"예":"아니오"); // ch 가 16진수 인지 확인 

printf("구두점 문자  여부 : %s\n",ispunct(ch)?"예":"아니오"); // ch 가 구두점 문자 인지 확인

printf("인쇄 가능 문자  여부 : %s\n",isprint(ch)?"예":"아니오"); // ch 가 프린터블 문자 인지 확인

printf("제어 문자  여부 : %s\n",iscntrl(ch)?"예":"아니오"); // ch 가 제어 문자 인지 확인

printf("아스키 문자  여부 : %s\n",isascii(ch)?"예":"아니오"); // ch 가 아스키 문자 인지 확인
}
