#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//计算一个输入数的阶乘

int main()
{
	int n = 0;
	int sum = 1;
	printf("请输入一个数:>\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d的阶乘为:>%d\n", n, sum);
	return 0;
}