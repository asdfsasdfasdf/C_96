#include <stdio.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	
	for (int i = 1; i <= a; i++)
	{
		for (int j = i; j <=a; j++)
		{
			printf(" ");
		}
		for (int j= i; j <= 1 ; j+=2)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}