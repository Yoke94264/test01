#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����һ������������1�ĸ���

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