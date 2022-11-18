#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//打印1000-2000年之间的闰年

int is_is(int y)
{
	return (y % 4 == 0 && y % 100 != 0 || y % 400 == 0);
}

int main()
{
	int x = 0;
	int c = 0;
	for (x = 1000; x <= 2000; x++)
	{
		if (is_is(x) == 1)
		{
			printf("%d ", x);
			c++;
		}
	}
	printf("\n%d ", c);
	return 0;
}
