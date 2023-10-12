#include <stdio.h>
void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void sort(int* arr)
{
    for (int i = 0; i <4; i++)
    {
		for (int j = 0; j < 4 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
    }
}

int main()
{
	int arr[5] = { 3, 5, 75, 1, 93 };

	sort(arr);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);

	return 0;
}