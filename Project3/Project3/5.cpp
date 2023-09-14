#include <stdio.h>

int main(void)
{
	int num;
	scanf_s("%d", &num);

	if (num % 2 == 0)
		printf("Â¦¼ö\n", num);
	else
		printf("È¦¼ö\n", num);

	return 0;

}