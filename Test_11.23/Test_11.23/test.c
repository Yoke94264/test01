#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ж�������Ƿ��ܹ���������

int main()
{
	int a, b, c;
	printf("������������:>\n");
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