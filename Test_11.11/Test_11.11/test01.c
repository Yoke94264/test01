#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//迭代法求第n个裴波那契数
int Fib(int x)
{
	int a = 1;
	int b = 1;
	int c = 1;

	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}