#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//计算一个数二进制中1的个数

int test(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n =-1;
	
	int ret = test(n);

	printf("%d", ret);
	return 0;
}