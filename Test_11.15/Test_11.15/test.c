#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ͬ��

int main()
{
	int c, t;
	for (int c = 0; c <= 35; c++)
	{
		for (t = 0; t <= 35; t++)
		{
			if (35 == t + c && c * 2 + t * 4 == 96)
			{
				printf("����%dֻ��������%dֻ\n", c, t);
			}
		}
	}
	return 0;
}