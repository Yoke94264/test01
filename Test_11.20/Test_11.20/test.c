#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ж��������Ƿ�Ϊˮ�ɻ���(1-1000)

int main()
{
	int n = 1;
	int count = 0;
	while (n < 1000)
	{
		int a = n % 10;
		int b = n / 10 % 10;
		int c = n / 100;
		if (a* a* a + b * b * b + c * c * c == n)
		{
			printf("%d ", n);
			count++;
		}
		n++;
	}
	printf("\n��1-1000������%d��ˮ�ɻ���",count);
	return 0;
}