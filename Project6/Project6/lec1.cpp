#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
    int student = 0;
    int sum = 0;
    printf("�л��� �Է� : ");
    scanf_s("%d", &student);

    int* score;
    score = (int*)malloc(student * sizeof(int));

    for (int i = 0; i < student; i++) {
        printf("�л� %d-%d ���� �Է� : ", student, i + 1);
        scanf_s("%d", &score[i]);
        sum += score[i];
    }
    printf("���� : %d\n\n", sum);
    for (int i = 0; i < student; i++)
        printf("�л� %d-%d ���� ��� : %d\n", student, i + 1, score[i]);
    printf("��� ���� : %.2f", float(sum) / student);

    free(score);
    score = NULL;

    return 0;

}