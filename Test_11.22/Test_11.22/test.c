#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�����¶�<--->�����¶� ��ת��

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
		printf("������:1.�����¶� 2.�����¶�\n");
		scanf("%d", &n);
		printf("�������¶�:>\n");
		scanf("%lf", &tem);
		if (n == 1)
		{
			printf("ת���������¶�Ϊ:%lf\n", f_trans(tem));
			continue;
		}
		else if (n == 2)
		{
			printf("ת���Ļ����¶�Ϊ:%lf\n", c_trans(tem));
			continue;
		}
		else
		{
			printf("�������ѡ��Ϸ���\n");
		}
	}
	return 0;
}