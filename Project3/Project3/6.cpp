#include <stdio.h>

int main(void)
{
	int score;
	scanf_s("%d", &score);

	if (score > 100 || score < 0)
		printf("잘못 입력 \n");
	else if (score >= 90)
		printf("A\n");
	else if (score >= 80)
		printf("B\n");
	else if (score >= 70)
		printf("C\n");
	else if (score >= 60)
		printf("D\n");
	else
		printf("F\n");
	return 0;
}