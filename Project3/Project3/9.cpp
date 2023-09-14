#include <stdio.h>

int main(void)
{
	int cnt, hap = 0;

	cnt = 1;
	while (cnt <= 10)
	{
		hap += cnt;
		printf("hap=%d, cnt = %d\n", hap, cnt);
		cnt++;
	}
	printf("%d\n", hap);
	return 0;
	
}