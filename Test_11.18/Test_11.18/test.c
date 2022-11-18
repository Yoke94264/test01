#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//百钱买百果  苹果5元1个  梨子3元1个   香蕉1元3个

int main()
{
	int a, p, b;
	for (a = 0; a <= 20; a++)
	{
		for (p = 0; p <= 33; p++)
		{
			for (b = 0; b <= 100; b++)
			{
				if (a * 5 + p * 3 + b / 3 == 100 && a + b + p == 100 && b % 3 == 0)
				{
					printf("苹果的个数为:%d 梨子的个数为:%d 香蕉的个数为:%d\n", a, p, b);
				}
			}
		}
	}
	return 0;
}