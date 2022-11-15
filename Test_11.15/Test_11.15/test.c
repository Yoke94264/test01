#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//鸡兔同笼

int main()
{
	int c, t;
	for (int c = 0; c <= 35; c++)
	{
		for (t = 0; t <= 35; t++)
		{
			if (35 == t + c && c * 2 + t * 4 == 96)
			{
				printf("鸡有%d只，兔子有%d只\n", c, t);
			}
		}
	}
	return 0;
}