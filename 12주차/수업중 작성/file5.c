#include <stdio.h>

int main() {
    struct Students {
        char name[50];
        int score;
    };
    struct Students s;

    FILE *fp;
    FILE *pass;
    FILE *fail;

    int count;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    printf("학생 수 입력: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++) {
        printf("\n%d번째 학생 이름: ", i + 1);
        scanf("%49s", s.name);
        printf("점수 : ");
        scanf("%d", &s.score);

        fprintf(fp, "%s %d\n", s.name, s.score);
    }
    fclose(fp);

    // 저장된 학생 목록을 읽어서 합격/불합격 파일로 분류
    fp = fopen("students.txt", "r");
    pass = fopen("pass.txt", "w");
    fail = fopen("fail.txt", "w");

    if (fp == NULL || pass == NULL || fail == NULL) {
        printf("파일 열기 실패\n");
        if (fp != NULL) fclose(fp);
        if (pass != NULL) fclose(pass);
        if (fail != NULL) fclose(fail);
        return 1;
    }

    while (fscanf(fp, "%49s %d", s.name, &s.score) == 2) {
        if (s.score >= 60) {
            fprintf(pass, "%s %d\n", s.name, s.score);
        } else {
            fprintf(fail, "%s %d\n", s.name, s.score);
        }
    }

    fclose(fp);
    fclose(pass);
    fclose(fail);

    printf("\n합격자(pass.txt)와 불합격자(fail.txt) 분류가 완료되었습니다.\n");

    return 0;
}
