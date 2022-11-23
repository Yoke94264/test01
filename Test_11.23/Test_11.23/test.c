#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//判断输入边是否能构成三角形

int main()
{
	int a, b, c;
	printf("请输入三条边:>\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
	{
		printf("yes!\n");
	}
	else
	{
		printf("no!\n");
	}
	return 0;
}