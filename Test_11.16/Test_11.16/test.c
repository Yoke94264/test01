#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ���������Ľ׳�

int main()
{
	int n = 0;
	int sum = 1;
	printf("������һ����:>\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	printf("%d�Ľ׳�Ϊ:>%d\n", n, sum);
	return 0;
}