#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//华氏温度<--->摄氏温度 的转换

double f_trans(double tem)
{
	return tem * 9 / 5 + 32;
}

double c_trans(double tem)
{
	return (tem-32) * 5 / 9;
}


int main()
{
	int n = 0;
	double tem = 0;
	while (1)
	{
		printf("请输入:1.华氏温度 2.摄氏温度\n");
		scanf("%d", &n);
		printf("请输入温度:>\n");
		scanf("%lf", &tem);
		if (n == 1)
		{
			printf("转换的摄氏温度为:%lf\n", f_trans(tem));
			continue;
		}
		else if (n == 2)
		{
			printf("转换的华氏温度为:%lf\n", c_trans(tem));
			continue;
		}
		else
		{
			printf("您输入的选项不合法。\n");
		}
	}
	return 0;
}