#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Ǯ��ٹ�  ƻ��5Ԫ1��  ����3Ԫ1��   �㽶1Ԫ3��

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
					printf("ƻ���ĸ���Ϊ:%d ���ӵĸ���Ϊ:%d �㽶�ĸ���Ϊ:%d\n", a, p, b);
				}
			}
		}
	}
	return 0;
}