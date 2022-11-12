#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[100] = { 101 };
	printf("请输入整数个数:>\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int m = 0;
		printf("请输入第%d个整数(0-100):\n", i + 1);
		scanf("%d", &m);
		arr[i] = m;

		for (int j = 0; j <= i; j++)
		{
			if (j == i)
			{
				printf("%d\n", arr[j]);
				break;
			}
			else if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
