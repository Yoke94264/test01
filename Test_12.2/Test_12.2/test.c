#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//打印某年的日历

void print_calendar(int y)
{
	for (int i = 1; i <= 12; i++)
	{

		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i==12)
		{
			printf("                   %d年%d月", y, i);
			for (int j = 1; j <= 31; j++)
			{
				if (j % 7 == 1)
				{
					printf("\n");
				}
				printf("%d\t", j);
			}
			printf("\n");
		}else if(i==4||i==6||i==9||i==11)
		{
			printf("                   %d年%d月", y, i);
			for (int j = 1; j <= 30; j++)
			{
				if (j % 7 == 1)
				{
					printf("\n");
				}
				printf("%d\t", j);
			}
			printf("\n");
		}else
		{
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			{
				printf("                   %d年%d月", y, i);
				for (int j = 1; j <= 29; j++)
				{
					if (j % 7 == 1)
					{
						printf("\n");
					}
					printf("%d\t", j);
				}
				printf("\n");
			}
			else
			{
				printf("                   %d年%d月", y, i);
				for (int j = 1; j <= 28; j++)
				{
					if (j % 7 == 1)
					{
						printf("\n");
					}
					printf("%d\t", j);
				}
				printf("\n");
			}
		}
	}
}
		
int main()
{
	int y = 0;
	printf("请输入年份:>\n");
	scanf("%d", &y);
	print_calendar(y);
	
	return 0;
}