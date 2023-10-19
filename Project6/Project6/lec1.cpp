#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
    int student = 0;
    int sum = 0;
    printf("학생수 입력 : ");
    scanf_s("%d", &student);

    int* score;
    score = (int*)malloc(student * sizeof(int));

    for (int i = 0; i < student; i++) {
        printf("학생 %d-%d 성적 입력 : ", student, i + 1);
        scanf_s("%d", &score[i]);
        sum += score[i];
    }
    printf("총점 : %d\n\n", sum);
    for (int i = 0; i < student; i++)
        printf("학생 %d-%d 성적 출력 : %d\n", student, i + 1, score[i]);
    printf("평균 점수 : %.2f", float(sum) / student);

    free(score);
    score = NULL;

    return 0;

}