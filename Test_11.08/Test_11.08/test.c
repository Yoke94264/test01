#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n=0;
	int arr[100] = {101};
	printf("��������������:>\n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int m = 0;
		printf("�������%d������(0-100):\n", i + 1);
		scanf("%d", &m);
		arr[i] = m;

		for (int j = 0; j <=i; j++)
		{
			if (j == i)
			{
				printf("%d\n", arr[j]);
				break;
			}else if (arr[i] == arr[j])
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

//int main()
//{
//	int a[3][2];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			a[i][j] = i + j;
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 2; j++)
//		{
//			printf("%4d", a[i][j]);
//		}
//		putchar('\n');
//	}
//	return 0;
//}