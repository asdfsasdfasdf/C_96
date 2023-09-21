#include <stdio.h>

int main(void)
{
	double x = 0;
	double y = 0;
	int count = 0, circle = 0;
	srand(time(NULL));

	while (count < 10000)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		count++;

		if ((x * x) + (y * y) <= 1)
		{
			circle++;
		}
		percent = count / 1000;
		printf("%d%%ม๘วเ pi = %lf: %", percent, (circle / count) * 4);
		for (int i = 0; i < percent; i += 5)
		{
			printf("=");
		}
		printf("\n");
	}
	return 0;
}