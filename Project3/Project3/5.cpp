#include <stdio.h>

int main(void)
{
	int num;
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("¦��\n", num);
	else
		printf("Ȧ��\n", num);

	return 0;

}